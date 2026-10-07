// roc 2010-06 009e39f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e39f0
//
// 009e39f0  a164b3c100           mov eax, dword ptr [0xc1b364]
// 009e39f5  50                   push eax
// 009e39f6  e89f3fdcff           call 0x7a799a
// 009e39fb  83c404               add esp, 4
// 009e39fe  c70548b3c1001809a000 mov dword ptr [0xc1b348], 0xa00918
// 009e3a08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e39f0(int);
void func_009e39f0()
{
    G4_func_009e39f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
