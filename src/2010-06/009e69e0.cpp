// roc 2010-06 009e69e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e69e0
//
// 009e69e0  a11cfbc100           mov eax, dword ptr [0xc1fb1c]
// 009e69e5  50                   push eax
// 009e69e6  e8af0fdcff           call 0x7a799a
// 009e69eb  83c404               add esp, 4
// 009e69ee  c70500fbc1001809a000 mov dword ptr [0xc1fb00], 0xa00918
// 009e69f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e69e0(int);
void func_009e69e0()
{
    G4_func_009e69e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
