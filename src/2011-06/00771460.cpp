// roc 2011-06 00771460  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00771460
//
// 00771460  686052cd00           push 0xcd5260
// 00771465  e866fd0800           call 0x8011d0
// 0077146a  59                   pop ecx
// 0077146b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00771460;
extern void G1_func_00771460(void*);
void func_00771460()
{
    G1_func_00771460(&G2_func_00771460);
}
