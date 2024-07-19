#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f lock_arena/data/ps_tests/ps2/test.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\345\023\267\327\314\045\031\377\263\331\027\014\342\272\234\365"
	"\050\366\331\172\077\154\164\153\003\176"
#define      rlax_z	1
#define      rlax	((&data[26]))
	"\075"
#define      msg2_z	19
#define      msg2	((&data[28]))
	"\300\220\151\163\126\356\132\121\213\254\352\060\336\137\313\236"
	"\024\153\055\035\274\020\056"
#define      opts_z	1
#define      opts	((&data[50]))
	"\361"
#define      tst1_z	22
#define      tst1	((&data[51]))
	"\356\361\216\262\170\354\030\121\042\244\223\127\337\110\357\260"
	"\124\252\240\372\340\067\353\050\155"
#define      chk2_z	19
#define      chk2	((&data[77]))
	"\246\237\301\273\233\154\336\252\062\222\044\171\306\377\146\016"
	"\274\133\053\130\171\002"
#define      pswd_z	256
#define      pswd	((&data[160]))
	"\024\370\146\311\077\357\147\172\255\050\067\276\126\362\074\102"
	"\161\125\317\134\175\075\133\322\252\001\114\254\002\101\224\026"
	"\071\373\337\171\352\107\363\230\157\052\126\306\035\222\010\216"
	"\347\327\353\145\024\107\070\276\111\204\153\114\305\000\246\060"
	"\157\131\155\324\300\120\327\056\322\175\250\117\131\077\067\356"
	"\115\033\070\022\144\044\222\270\152\314\046\224\322\315\305\101"
	"\046\062\026\347\202\355\026\125\153\276\244\304\375\334\262\113"
	"\367\352\135\134\017\360\024\171\274\072\016\216\007\324\320\056"
	"\007\346\025\211\324\054\337\077\352\204\004\350\140\267\063\130"
	"\241\220\264\261\200\310\053\075\003\072\314\012\016\234\071\025"
	"\203\117\237\130\173\176\227\145\002\234\115\143\123\200\273\365"
	"\021\160\246\222\070\322\320\074\014\234\106\033\070\200\060\274"
	"\317\320\024\112\116\254\257\121\110\375\264\234\176\160\221\217"
	"\340\070\042\031\012\362\125\026\216\234\062\307\034\142\203\353"
	"\063\230\065\202\104\345\323\214\342\210\050\140\370\272\360\330"
	"\362\022\362\374\005\107\023\223\343\105\133\377\250\337\352\333"
	"\167\040\135\273\005\061\110\350\272\161\110\262\053\070\213\035"
	"\113\175\032\120\305\056\344\250\163\077\247\034\036\222\370\225"
	"\263\126\120\271\210\230\241\102\011\351\365\065\042\200\122\155"
	"\376\155\275\303\233\241\154\017\340\023\054\377\246\044\142\377"
	"\373\101\170\346\211\154\176\370\227\324\277\264\146\307\103\115"
	"\237\057\263\263\166\353\162\300\160\335\014\065\335\157\065\331"
	"\261\255\277\072\032\075\063\261\021\362\146\170\272\251\306\131"
	"\330\171\014\117\145\177\020\325"
#define      xecc_z	15
#define      xecc	((&data[474]))
	"\213\261\236\044\121\057\353\137\225\102\330\143\075\010\367"
#define      shll_z	10
#define      shll	((&data[490]))
	"\024\261\064\222\176\311\261\307\131\055\035"
#define      inlo_z	3
#define      inlo	((&data[500]))
	"\135\202\104"
#define      text_z	1177
#define      text	((&data[513]))
	"\252\272\042\235\040\233\127\311\141\260\065\145\262\323\157\005"
	"\010\330\263\235\020\145\135\002\272\356\245\024\260\247\073\013"
	"\125\011\201\232\070\157\004\235\020\310\223\341\024\162\234\332"
	"\266\372\337\055\173\247\376\215\146\300\025\175\130\167\143\140"
	"\164\350\362\237\044\203\016\116\363\077\356\245\217\262\246\014"
	"\274\321\125\240\311\135\313\075\277\352\057\045\305\275\340\136"
	"\072\366\203\200\306\006\033\116\202\312\161\067\034\353\150\231"
	"\342\255\276\146\056\155\062\153\054\127\342\316\055\312\332\134"
	"\342\201\116\116\242\167\053\032\372\255\145\145\146\045\352\054"
	"\123\144\372\271\077\111\271\023\341\310\355\175\104\014\254\044"
	"\340\016\221\307\377\174\202\320\117\152\060\251\104\105\106\223"
	"\131\074\354\036\346\171\130\146\372\020\264\051\326\327\075\206"
	"\274\131\227\014\074\315\212\004\043\116\163\172\075\203\337\350"
	"\253\004\177\326\027\101\133\133\321\067\273\010\132\245\360\024"
	"\157\013\254\251\220\016\050\011\014\223\321\217\311\266\300\160"
	"\351\342\243\232\261\215\264\044\060\321\320\055\375\164\255\146"
	"\036\347\037\205\357\334\262\310\065\333\241\157\102\032\110\377"
	"\312\204\137\262\265\362\361\345\315\102\255\325\162\151\102\344"
	"\140\214\337\246\053\326\173\377\357\041\363\201\143\351\227\305"
	"\327\225\027\101\016\140\166\225\051\336\332\361\067\355\000\364"
	"\157\072\302\246\223\370\355\231\255\141\374\005\341\207\045\264"
	"\357\237\207\025\010\360\244\330\014\334\001\104\025\202\115\346"
	"\320\107\003\071\010\115\177\165\065\363\226\265\030\336\012\367"
	"\037\042\330\034\123\036\127\345\065\126\350\136\101\214\072\055"
	"\213\100\161\320\311\252\044\007\011\124\300\346\315\277\341\015"
	"\201\020\242\264\041\347\327\354\063\036\213\325\245\231\242\002"
	"\035\173\270\271\136\301\156\367\337\003\323\273\216\172\371\307"
	"\361\212\150\136\176\036\066\255\275\056\301\057\102\216\000\223"
	"\037\075\275\270\131\166\303\253\010\356\324\146\066\071\170\101"
	"\023\137\233\156\166\332\162\216\120\336\165\143\237\152\106\366"
	"\200\277\135\243\103\103\337\016\340\177\147\300\334\326\101\341"
	"\146\043\073\077\200\267\375\027\103\117\125\352\362\355\050\135"
	"\002\374\134\043\047\163\120\202\230\210\020\334\327\101\042\070"
	"\371\156\042\076\370\055\177\260\053\217\035\317\143\327\125\362"
	"\167\123\277\273\325\377\035\062\142\326\046\310\200\354\223\232"
	"\063\173\351\315\137\341\157\274\134\145\120\243\343\044\203\045"
	"\226\176\033\255\342\021\024\130\332\021\152\136\010\232\116\360"
	"\347\337\172\223\013\277\213\042\021\164\301\123\046\366\162\102"
	"\277\202\260\157\200\176\033\152\204\125\170\305\166\304\027\214"
	"\066\147\375\035\240\322\271\056\056\117\220\353\000\014\042\343"
	"\153\064\224\256\301\236\254\275\047\301\154\207\224\363\230\025"
	"\166\043\012\077\357\266\101\047\101\242\232\130\364\033\232\327"
	"\211\061\314\012\306\061\023\066\135\245\216\303\165\256\074\013"
	"\014\326\312\335\327\012\061\106\142\360\100\166\231\050\025\253"
	"\276\022\267\301\105\303\276\071\163\135\166\111\324\067\125\201"
	"\274\276\323\332\124\042\143\041\210\046\105\047\035\315\153\361"
	"\022\320\026\135\176\221\042\047\056\343\311\156\017\313\144\024"
	"\173\315\060\036\012\372\075\303\031\007\335\156\045\350\144\256"
	"\104\045\026\357\246\010\330\375\355\341\242\251\365\267\270\344"
	"\206\367\146\103\223\102\327\337\333\221\235\042\360\067\245\217"
	"\254\362\032\154\063\114\132\021\005\127\141\002\123\264\165\244"
	"\314\206\055\224\173\024\006\203\206\306\330\160\004\137\063\047"
	"\312\072\014\176\235\212\323\026\033\143\241\033\234\117\165\147"
	"\051\020\036\303\371\231\111\027\010\313\172\201\057\335\120\016"
	"\230\162\055\126\332\235\206\204\162\057\234\065\364\307\036\347"
	"\154\013\052\340\236\121\250\024\362\213\363\374\037\043\037\232"
	"\070\361\370\372\216\210\106\044\027\375\174\034\344\160\345\271"
	"\307\173\340\042\163\250\175\331\226\216\126\241\235\030\015\116"
	"\225\055\111\033\100\243\226\072\101\357\307\216\221\126\103\362"
	"\236\130\353\336\337\316\063\132\011\125\342\341\300\143\117\343"
	"\154\311\100\220\301\157\115\137\034\120\375\013\174\222\112\163"
	"\372\062\052\376\025\174\221\305\264\367\104\240\126\072\115\105"
	"\245\003\012\127\115\302\135\131\117\044\230\004\027\144\153\021"
	"\243\373\212\212\276\253\230\344\211\276\140\040\225\213\322\276"
	"\251\345\332\001\116\266\253\014\213\321\072\027\066\237\204\323"
	"\131\303\373\121\126\072\005\051\331\250\026\357\005\371\130\347"
	"\145\167\225\004\226\210\170\004\146\341\351\004\234\371\332\336"
	"\230\276\130\357\306\275\175\255\173\046\027\046\003\226\357\223"
	"\001\237\023\006\040\377\026\230\026\046\232\213\211\364\336\331"
	"\256\323\051\313\225\227\254\250\000\113\220\013\101\316\156\335"
	"\313\055\311\216\253\057\363\342\377\155\012\114\233\252\113\030"
	"\334\061\254\027\241\323\332\241\301\105\003\307\011\100\153\064"
	"\330\201\143\363\234\277\175\012\071\120\277\163\100\326\245\016"
	"\110\146\273\021\131\222\021\337\123\214\162\230\263\205\040\043"
	"\263\333\037\242\332\275\362\100\075\003\025\232\040\041\326\255"
	"\141\352\352\120\276\142"
#define      lsto_z	1
#define      lsto	((&data[1709]))
	"\375"
#define      msg1_z	65
#define      msg1	((&data[1726]))
	"\063\215\002\375\357\263\240\311\161\223\012\257\227\037\111\270"
	"\261\262\030\356\100\326\113\041\044\334\101\277\114\376\205\044"
	"\271\333\336\204\314\306\252\124\134\357\073\001\104\104\115\350"
	"\147\227\073\000\061\010\211\077\150\115\143\066\160\277\112\237"
	"\121\141\143\307\041\260\352\126\004\275\230\030\041\050\124\235"
	"\350\101\037\145\242\012\120\363\311\263\114\230"
#define      tst2_z	19
#define      tst2	((&data[1803]))
	"\153\052\176\234\354\263\315\004\123\277\033\355\367\331\171\320"
	"\164\255\015\054\224\031"
#define      date_z	1
#define      date	((&data[1824]))
	"\367"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
