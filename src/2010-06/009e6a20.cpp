// roc 2010-06 009e6a20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6a20
//
// 009e6a20  a1b4fac100           mov eax, dword ptr [0xc1fab4]
// 009e6a25  50                   push eax
// 009e6a26  e86f0fdcff           call 0x7a799a
// 009e6a2b  83c404               add esp, 4
// 009e6a2e  c70598fac1001809a000 mov dword ptr [0xc1fa98], 0xa00918
// 009e6a38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6a20(int);
void func_009e6a20()
{
    G4_func_009e6a20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
