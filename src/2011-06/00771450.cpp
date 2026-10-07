// roc 2011-06 00771450  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00771450
//
// 00771450  685c52cd00           push 0xcd525c
// 00771455  e876fd0800           call 0x8011d0
// 0077145a  59                   pop ecx
// 0077145b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00771450;
extern void G1_func_00771450(void*);
void func_00771450()
{
    G1_func_00771450(&G2_func_00771450);
}
