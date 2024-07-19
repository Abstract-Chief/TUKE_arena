#!/bin/bash

# Функция для проверки наличия пакета и его установки
check_and_install() {
    local package_name="$1"
    local install_command="$2"

    # Проверка наличия пакета
    if ! command -v "$package_name" &>/dev/null; then
        echo "Пакет $package_name не найден. Установка..."
        # Установка пакета через пакетный менеджер
        if sudo "$install_command" install -y "$package_name" > /dev/null; then
            echo "Пакет $package_name успешно установлен."
        else
            echo "Ошибка при установке пакета $package_name."
            exit 1
        fi
    else
        echo "Пакет $package_name уже установлен."
    fi
}

# Проверка и установка awk
check_and_install "awk" "apt-get"
# Проверка и установка Python 3 (или Python)
check_and_install "python3" "apt-get"
# Проверка и установка gcc
check_and_install "gcc" "apt-get"
# Проверка и установка ncurses
check_and_install "libncurses5-dev" "apt-get"
check_and_install "libncursesw5-dev" "apt-get"

rm -rf ~/.local/share/karl_arena
 mkdir -p ~/.local/share/karl_arena


compile_c(){
   file=$1
   echo $file
   gcc -o "$file" "$file.c" 2> /dev/null
   rm "$file.c"
}
path="data"
compile_c "$path/arena"
compile_c "$path/pretest"
compile_c "$path/get_access"
compile_c "$path/ps_tests/ps1/karel_arena"
compile_c "$path/ps_tests/ps2/test"
compile_c "$path/ps_tests/ps3/test"
compile_c "$path/ps_tests/ps3/task4test"
compile_c "$path/ps_tests/ps4/test"
compile_c "$path/ps_tests/ps5/test"
compile_c "$path/ps_tests/ps7/test"



cp -r data/* ~/.local/share/karl_arena

echo "Установка завершена."
sudo cp data/tarena /usr/local/bin/tarena
sudo chmod +x /usr/local/bin/tarena

#sudo chmod +x ~/.local/share/karl_arena/pretest.sh
#sudo chmod +x ~/.local/share/karl_arena/arena.sh
#sudo chmod +x ~/.local/share/karl_arena/ps_tests/ps{2,3,4,5,7}/test.sh
#sudo chmod +x ~/.local/share/karl_arena/ps_tests/ps1/karel_arena.sh

# generate random key 
RANDOM_KEY_PATH=~/.local/share/
random_key=$(blkid | grep -oP 'UUID="\K[^"]+' | read f; echo $f) 




