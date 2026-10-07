// roc 2010-06 009e5ba0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ba0
//
// 009e5ba0  a1fcebc100           mov eax, dword ptr [0xc1ebfc]
// 009e5ba5  50                   push eax
// 009e5ba6  e8ef1ddcff           call 0x7a799a
// 009e5bab  83c404               add esp, 4
// 009e5bae  c705e0ebc1001809a000 mov dword ptr [0xc1ebe0], 0xa00918
// 009e5bb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ba0(int);
void func_009e5ba0()
{
    G4_func_009e5ba0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
