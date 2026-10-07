// roc 2010-06 009e6e70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6e70
//
// 009e6e70  a10405c200           mov eax, dword ptr [0xc20504]
// 009e6e75  50                   push eax
// 009e6e76  e81f0bdcff           call 0x7a799a
// 009e6e7b  83c404               add esp, 4
// 009e6e7e  c705e804c2001809a000 mov dword ptr [0xc204e8], 0xa00918
// 009e6e88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6e70(int);
void func_009e6e70()
{
    G4_func_009e6e70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
