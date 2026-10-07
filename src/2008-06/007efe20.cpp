// roc 2008-06 007efe20  unit: seg_007e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efe20
//
// 007efe20  68c0b07f00           push 0x7fb0c0
// 007efe25  e88519ebff           call 0x6a17af
// 007efe2a  59                   pop ecx
// 007efe2b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007efe20;
extern void G1_func_007efe20(void*);
void func_007efe20()
{
    G1_func_007efe20(&G2_func_007efe20);
}
