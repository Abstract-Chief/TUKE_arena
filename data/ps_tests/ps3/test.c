#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f lock_arena/data/ps_tests/ps3/test.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\320\273\164\176\135\250\327\016\003\020\346\264\231\313\065\156"
	"\006\025\307\212\106\301\377\210\055"
#define      inlo_z	3
#define      inlo	((&data[25]))
	"\241\306\213"
#define      shll_z	10
#define      shll	((&data[29]))
	"\036\363\101\120\005\012\123\153\301\056\041\107\102"
#define      tst2_z	19
#define      tst2	((&data[44]))
	"\276\352\075\327\216\012\032\337\150\321\056\220\370\261\010\321"
	"\005\273\152\020\111\225\265\375\330\230"
#define      msg2_z	19
#define      msg2	((&data[71]))
	"\160\030\167\007\100\137\225\263\137\230\344\062\216\064\052\004"
	"\005\021\142\316\161\171\331\252"
#define      rlax_z	1
#define      rlax	((&data[91]))
	"\361"
#define      pswd_z	256
#define      pswd	((&data[102]))
	"\242\150\362\176\206\071\300\151\373\232\044\111\001\203\334\030"
	"\330\062\106\352\346\156\002\334\205\041\245\017\132\340\172\250"
	"\113\335\030\334\153\207\360\110\225\025\222\226\231\156\257\161"
	"\241\366\133\207\144\136\144\351\200\012\371\333\353\164\203\066"
	"\121\234\022\275\043\003\005\271\030\230\120\262\006\377\043\247"
	"\366\177\057\133\335\224\104\136\236\076\071\212\262\274\300\003"
	"\130\322\300\174\326\306\065\357\136\205\241\145\205\304\014\173"
	"\103\074\326\041\320\033\177\157\131\271\371\013\165\271\017\316"
	"\214\317\112\142\226\200\121\365\005\362\132\213\267\146\006\373"
	"\242\335\035\163\371\234\342\122\125\333\136\313\224\156\232\041"
	"\076\344\204\324\145\326\311\152\311\043\365\200\212\374\173\055"
	"\332\231\240\323\065\202\046\213\135\204\127\362\363\361\024\061"
	"\326\230\005\073\156\317\246\067\363\234\270\175\231\064\252\163"
	"\315\112\106\003\315\155\216\052\362\346\035\345\327\061\026\256"
	"\312\034\352\070\353\220\160\336\055\050\133\306\134\006\071\052"
	"\121\200\055\036\355\274\110\337\242\146\304\172\230\333\050\142"
	"\367\022\233\342\243\013\301\320\064\035\047\345\330\334\342\260"
	"\165\203\224\316\364\255\105\373\127\340\324\274\360"
#define      chk2_z	19
#define      chk2	((&data[377]))
	"\365\011\311\021\315\123\175\202\357\324\155\357\300\021\302\273"
	"\177\376\056\145\375"
#define      msg1_z	65
#define      msg1	((&data[413]))
	"\321\125\061\154\174\027\104\131\372\364\316\175\211\235\161\151"
	"\277\051\276\034\215\302\073\331\076\110\012\152\047\173\225\122"
	"\255\310\077\266\021\041\252\335\112\164\252\345\245\360\102\166"
	"\312\270\104\212\141\332\267\133\367\152\010\321\147\272\227\056"
	"\311\147\152\155\322\266\024\355\323\174\026\124\165\207\302\033"
	"\066\343\155"
#define      opts_z	1
#define      opts	((&data[481]))
	"\356"
#define      xecc_z	15
#define      xecc	((&data[484]))
	"\125\106\107\214\373\273\113\006\063\111\275\245\171\150\142\300"
	"\337"
#define      text_z	2508
#define      text	((&data[700]))
	"\220\210\050\345\272\224\142\322\330\274\314\314\213\111\125\051"
	"\272\214\014\047\032\321\151\145\205\250\272\314\114\014\043\334"
	"\225\113\302\120\340\045\042\270\341\356\205\154\070\333\225\362"
	"\150\242\032\202\163\203\347\371\053\241\305\170\256\350\125\104"
	"\064\027\224\025\075\267\315\036\245\123\213\335\057\041\320\227"
	"\304\353\031\070\156\001\061\232\243\366\023\122\337\150\226\024"
	"\200\052\051\275\341\367\334\207\113\147\145\172\211\065\021\115"
	"\040\053\205\217\055\267\052\320\255\075\042\215\245\271\241\045"
	"\343\312\343\305\302\277\115\015\047\262\207\260\350\231\376\011"
	"\304\204\231\361\073\303\302\351\000\345\166\246\236\027\314\202"
	"\342\257\110\244\156\225\261\225\110\070\106\061\321\104\072\226"
	"\310\323\210\004\226\113\355\227\060\143\075\316\173\011\121\135"
	"\270\231\002\047\056\263\274\167\354\226\164\046\073\175\100\050"
	"\112\306\351\216\313\311\232\312\120\126\266\277\126\202\104\247"
	"\061\123\050\263\127\103\207\241\130\247\365\257\167\244\367\320"
	"\161\375\072\023\332\127\055\074\142\251\100\333\061\323\207\243"
	"\172\064\256\106\367\312\132\103\035\101\162\347\012\242\174\166"
	"\314\334\372\363\002\027\021\041\007\316\042\077\133\167\157\303"
	"\305\117\335\323\232\232\046\372\315\013\013\003\343\071\012\133"
	"\173\045\367\110\245\135\313\274\032\071\350\271\107\247\230\313"
	"\152\134\021\075\301\114\015\345\156\225\020\160\132\105\352\305"
	"\372\115\307\021\213\336\023\330\006\264\325\123\254\261\077\376"
	"\130\143\177\014\067\315\212\257\251\367\204\120\177\373\330\037"
	"\177\042\015\067\236\010\077\153\127\263\376\112\036\126\150\056"
	"\045\202\053\205\320\012\113\122\051\264\162\344\160\316\377\046"
	"\307\310\240\357\162\223\125\170\313\236\225\200\067\223\224\240"
	"\254\103\005\176\216\224\222\267\361\045\243\144\340\053\023\045"
	"\266\136\115\102\230\110\163\067\107\243\133\166\114\046\332\172"
	"\331\276\020\165\203\064\313\306\330\024\361\164\053\206\366\061"
	"\104\120\151\042\270\117\377\013\173\377\322\067\161\030\112\155"
	"\054\340\106\230\150\126\264\344\072\172\325\127\333\371\233\311"
	"\245\362\260\022\165\066\310\175\164\043\243\155\060\167\153\055"
	"\121\273\102\203\330\111\364\057\046\333\310\206\324\237\070\045"
	"\372\032\133\334\211\205\227\267\372\265\347\171\140\370\240\222"
	"\356\064\174\326\174\261\150\202\260\014\302\356\003\260\377\162"
	"\335\016\057\216\121\237\035\174\107\120\062\324\260\003\236\106"
	"\066\144\075\010\313\310\366\051\067\166\203\063\365\241\316\045"
	"\376\014\232\101\364\331\254\264\321\157\100\172\116\045\355\051"
	"\212\204\356\153\355\065\247\250\356\101\074\302\075\110\266\117"
	"\164\274\314\021\042\110\011\254\376\337\030\331\100\134\266\170"
	"\261\347\016\107\304\130\377\157\372\035\106\372\256\335\071\047"
	"\121\275\143\247\373\325\073\151\305\244\321\267\304\023\170\362"
	"\100\130\035\203\000\254\226\272\242\074\001\272\030\102\171\211"
	"\163\060\133\142\042\040\333\213\021\172\103\050\105\272\221\366"
	"\355\171\035\374\113\020\361\240\247\043\154\365\233\016\140\313"
	"\114\364\170\042\157\056\305\334\147\315\306\303\051\016\174\372"
	"\133\330\333\122\047\146\167\206\126\023\351\127\377\050\116\126"
	"\344\212\165\154\132\307\127\174\051\251\075\226\144\171\333\131"
	"\222\037\344\043\344\312\144\344\353\156\174\147\162\367\003\112"
	"\171\270\106\233\207\126\072\061\046\307\375\002\321\214\334\364"
	"\067\234\212\174\353\323\227\303\246\051\360\011\360\110\107\135"
	"\235\352\340\350\250\040\010\253\101\063\370\162\014\270\012\363"
	"\306\005\263\367\210\260\117\203\007\034\166\125\234\241\164\210"
	"\150\060\350\141\077\367\302\054\207\202\077\053\300\051\362\326"
	"\310\154\323\337\220\106\215\163\174\025\306\163\216\175\110\323"
	"\235\015\100\322\003\317\364\004\300\052\151\351\024\230\100\321"
	"\061\310\162\050\225\372\317\242\201\350\355\324\012\332\236\241"
	"\344\242\375\053\316\161\022\326\015\200\275\337\352\275\114\225"
	"\246\303\017\143\153\114\220\201\360\277\163\101\062\043\211\072"
	"\367\030\314\250\114\335\147\240\273\013\060\222\127\373\363\016"
	"\301\206\247\350\165\217\255\013\276\340\245\205\235\231\173\101"
	"\003\304\066\366\217\033\055\143\133\373\213\005\100\153\156\327"
	"\166\146\000\325\327\067\127\012\070\342\234\350\057\122\341\213"
	"\323\121\257\311\136\277\163\077\372\132\012\150\126\073\202\300"
	"\243\165\051\325\050\273\135\316\177\177\165\037\223\177\221\073"
	"\024\317\277\241\042\007\240\103\226\327\242\252\340\262\221\120"
	"\253\320\342\124\134\107\141\151\252\346\071\011\067\230\117\053"
	"\137\333\327\373\206\016\227\252\276\011\264\333\207\202\153\017"
	"\212\130\057\310\204\112\245\332\113\215\124\154\377\206\127\272"
	"\166\365\244\041\025\244\350\352\305\177\235\202\061\356\072\351"
	"\253\326\021\072\016\326\240\112\200\136\103\300\031\210\070\017"
	"\101\230\354\316\007\034\367\310\064\311\210\135\023\342\020\174"
	"\041\121\161\313\224\126\350\051\053\372\006\141\230\240\175\257"
	"\161\141\154\165\134\215\044\242\075\343\073\061\326\162\006\212"
	"\013\105\211\300\005\114\175\052\004\141\107\224\176\033\245\353"
	"\130\323\153\073\126\154\345\122\121\260\111\212\323\266\257\212"
	"\140\372\004\217\131\227\365\227\260\015\150\233\316\004\341\327"
	"\115\162\253\041\242\151\353\270\325\355\236\331\322\151\153\073"
	"\224\353\075\176\070\034\326\160\317\152\070\043\127\170\265\332"
	"\242\213\177\331\212\021\026\320\074\043\115\251\061\325\326\041"
	"\236\301\007\056\043\316\361\226\257\020\341\010\062\046\255\041"
	"\064\020\302\363\000\246\037\004\044\036\070\050\325\272\054\143"
	"\031\305\056\350\264\375\210\174\302\376\176\250\306\336\210\141"
	"\115\032\155\333\051\144\001\005\052\275\170\010\232\077\373\057"
	"\012\274\033\352\354\243\154\227\142\375\167\011\143\206\300\331"
	"\170\034\057\063\313\070\177\200\065\270\144\163\331\302\117\304"
	"\375\273\304\120\357\310\141\262\011\322\056\037\152\016\260\027"
	"\033\356\024\144\102\106\300\014\231\131\240\045\351\126\210\103"
	"\016\374\202\075\206\270\066\161\223\176\331\233\036\046\024\063"
	"\002\157\267\277\244\020\153\047\361\313\351\060\003\103\216\121"
	"\104\066\222\355\135\323\324\064\216\243\363\146\220\076\023\177"
	"\021\055\015\122\106\354\112\147\135\074\056\316\064\137\153\111"
	"\345\016\126\175\220\247\153\270\201\355\330\233\166\150\170\046"
	"\303\107\244\146\151\117\032\122\166\213\074\103\316\033\137\105"
	"\151\217\000\206\131\200\055\204\361\011\202\272\332\022\155\133"
	"\005\377\106\146\200\343\250\177\174\034\360\101\131\356\371\323"
	"\150\372\254\156\124\223\035\263\244\247\034\136\026\057\026\065"
	"\252\005\333\307\271\070\177\177\127\104\020\122\316\256\322\055"
	"\145\137\273\117\327\174\161\224\021\303\306\360\314\116\116\000"
	"\115\001\241\304\124\254\073\141\106\322\305\305\312\067\345\306"
	"\354\034\122\313\050\044\070\166\137\117\132\324\340\353\015\202"
	"\005\171\313\041\025\151\106\326\305\354\331\324\253\326\044\057"
	"\231\256\356\065\307\140\217\220\170\017\157\056\062\164\376\205"
	"\142\245\014\340\216\124\250\342\332\013\174\337\254\307\041\200"
	"\027\027\230\242\364\124\201\161\276\267\174\216\250\204\313\307"
	"\073\000\321\121\271\137\342\250\124\063\267\273\361\305\004\135"
	"\231\046\222\067\302\004\240\065\162\344\070\370\145\242\205\147"
	"\104\035\107\354\112\354\172\316\075\360\155\372\113\336\003\227"
	"\063\171\311\323\246\167\060\167\060\241\327\043\104\066\134\033"
	"\175\063\043\230\261\113\136\172\034\044\211\366\113\264\072\143"
	"\066\026\241\105\074\334\365\274\011\121\341\356\161\276\017\365"
	"\152\264\150\333\070\065\062\042\261\103\157\340\311\024\121\010"
	"\271\001\167\051\143\020\056\262\004\031\276\142\157\337\367\027"
	"\056\371\355\125\044\033\355\350\330\033\105\021\152\372\345\115"
	"\353\120\174\332\151\054\246\162\023\025\344\333\116\263\035\277"
	"\103\150\144\055\376\263\213\363\214\147\224\311\236\344\131\345"
	"\307\361\315\372\013\377\007\374\234\176\155\237\152\266\312\356"
	"\163\106\252\260\317\154\132\021\221\014\034\046\240\340\157\337"
	"\146\073\037\041\172\156\357\336\033\066\030\375\215\213\323\041"
	"\327\340\230\341\267\113\113\041\255\314\013\250\305\105\142\335"
	"\055\217\124\267\337\363\371\202\067\127\050\024\034\313\126\004"
	"\002\155\240\052\136\274\246\002\306\064\173\317\376\134\160\031"
	"\021\235\247\062\175\216\162\123\346\226\357\110\165\216\072\050"
	"\113\035\320\330\373\077\361\042\156\337\155\263\311\014\020\155"
	"\016\304\356\020\130\056\210\127\153\260\101\304\273\140\351\230"
	"\174\012\313\043\035\305\151\146\342\371\343\275\003\377\154\357"
	"\304\305\034\377\033\234\215\212\206\376\272\101\271\070\053\234"
	"\242\234\227\160\151\061\036\073\065\066\047\133\274\244\166\312"
	"\151\046\041\162\015\154\342\134\274\130\101\347\263\074\377\351"
	"\146\232\353\057\000\335\254\174\157\304\121\277\216\030\073\110"
	"\364\155\210\341\065\233\052\262\263\171\012\310\043\216\145\355"
	"\220\261\343\200\110\323\013\062\053\127\006\117\105\302\341\376"
	"\362\254\321\260\052\017\233\010\306\051\340\245\324\325\244\334"
	"\176\134\304\331\046\166\327\175\071\142\040\054\006\337\264\054"
	"\271\110\355\250\244\377\314\303\310\306\163\306\156\335\270\204"
	"\370\042\152\301\344\054\304\016\371\255\073\353\214\027\263\342"
	"\360\034\246\022\266\261\004\231\341\067\220\065\137\224\253\116"
	"\360\327\377\366\352\232\133\033\224\052\150\124\222\223\274\157"
	"\101\103\031\314\242\304\314\037\202\237\023\352\352\036\063\020"
	"\110\147\245\144\157\072\334\314\001\142\032\372\272\111\010\311"
	"\211\350\257\167\351\325\160\241\022\146\137\035\016\164\355\206"
	"\370\141\241\145\060\055\275\007\007\303\353\123\026\262\210\353"
	"\150\073\074\275\113\373\325\374\202\071\202\023\200\316\050\335"
	"\213\273\326\316\254\301\175\221\264\050\340\265\061\313\034\142"
	"\305\315\273\356\172\360\356\214\153\342\244\361\176\110\365\115"
	"\236\177\350\365\024\252\141\240\150\034\065\265\207\072\110\370"
	"\066\265\033\341\135\327\244\143\231\336\173\162\240\001\312\113"
	"\166\153\020\055\035\140\077\367\345\213\325\220\321\145\053\224"
	"\055\101\346\312\271\302\175\351\130\236\172\007\366\222\360\114"
	"\276\120\265\302\022\032\075\143\223\273\262\036\235\375\142\157"
	"\020\165\104\142\272\321\325\104\176\257\347\355\241\140\051\031"
	"\042\172\302\066\377\134\332\251\164\025\066\143\142\122\167\233"
	"\112\062\116\071\061\341\334\207\310\247\252\053\167\322\220\117"
	"\020\325\341\025\366\066\163\356\346\236\366\147\343\250\373\133"
	"\362\062\017\223\336\376\071\155\212\141\362\143\326\060\271\133"
	"\022\214\011\314\025\263\025\010\326\143\114\172\104\332\335\263"
	"\112\043\334\242\056\024\223\365\062\153\070\032\326\057\213\317"
	"\044\116\247\140\246\005\004\332\053\201\164\123\211\070\225\341"
	"\255\247\045\320\017\134\251\244\133\327\215\210\277\033\165\145"
	"\061\242\242\143\025\313\134\312\304\045\015\071\267\146\155\132"
	"\317\316\322\167\125\105\111\201\210\200\152\265\262\101\311\201"
	"\372\235\327\146\217\001\147\014\306\346\363\263\123\261\326\020"
	"\037\377\231\053\036\206\234\007\230\303\114\135\021\270\307\031"
	"\123\172\115\345\264\054\127\144\171\157\375\147\256\351\143\152"
	"\052\347\012\216\031\176\022\061\120\275\206\233\045\072\334\063"
	"\067\321\004\126\172\226\304\173\321\343\104\360\334\334\210\005"
	"\352\022\236\164\103\225\140\164\126\046\232\127\355\123\342\243"
	"\315\070\010\166\307\371\053\201\305\364\221\066\044\265\155\163"
	"\252\006\020\233\053\363\056\172\166\335\141\035\341\325\007\104"
	"\223\260\144\140\016\002\250\276\107\342\124\020\266\335\024\115"
	"\050\002\344\131\146\041\047\341\053\170\077\344\022\102\013\100"
	"\365\310\270\341\312\140\240\022\103\365\042\371\322\067\106\373"
	"\071\052\124\237\114\174\201\170\364\301\134\007\003\147\110\370"
	"\057\000\332\372\140\173\015\244\160\057\235\102\146\344\075\240"
	"\017\221\077\133\015\301\324\002\202\060\011\205\230\121\176\310"
	"\122\130\303\262\323\320\126\104\377\364\206\146\330\304\006\347"
	"\125\106\103\143\007\027\146\211\110\160\016\340\301\215\251\024"
	"\346\154\306\272\074\035\376\074\021\204\243\352\110\252\322\236"
	"\360\025\002\367\055\150\201\165\331\220\126\232\035\377\257\003"
	"\154\165\275\250\223\273\345\245\100\210\217\211\062\141\050\043"
	"\167\052\032\245\223\234\033\154\054\161\007\112\161\266\116\335"
	"\054\013\206\277\307\153\144\010\364\364\221\046\126\272\111\316"
	"\344\144\163\170\001\216\344\055\000\354\170"
#define      lsto_z	1
#define      lsto	((&data[3422]))
	"\040"
#define      tst1_z	22
#define      tst1	((&data[3427]))
	"\325\217\231\101\014\353\106\176\172\234\212\114\353\100\011\020"
	"\363\276\012\251\036\160\020\225\107\103\364\242\065\350"
#define      date_z	1
#define      date	((&data[3453]))
	"\102"/* End of data[] */;
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
