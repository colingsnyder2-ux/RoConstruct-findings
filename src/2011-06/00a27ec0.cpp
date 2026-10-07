// roc 2011-06 00a27ec0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27ec0
//
// 00a27ec0  68b8fdcc00           push 0xccfdb8
// 00a27ec5  e80675c2ff           call 0x64f3d0
// 00a27eca  59                   pop ecx
// 00a27ecb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a27ec0;
extern void G1_func_00a27ec0(void*);
void func_00a27ec0()
{
    G1_func_00a27ec0(&G2_func_00a27ec0);
}
