// roc 2011-06 00771490  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00771490
//
// 00771490  685439cb00           push 0xcb3954
// 00771495  e836fd0800           call 0x8011d0
// 0077149a  59                   pop ecx
// 0077149b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00771490;
extern void G1_func_00771490(void*);
void func_00771490()
{
    G1_func_00771490(&G2_func_00771490);
}
