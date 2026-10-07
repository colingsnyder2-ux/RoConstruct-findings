// roc 2010-06 009e32b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e32b0
//
// 009e32b0  a120a9c100           mov eax, dword ptr [0xc1a920]
// 009e32b5  50                   push eax
// 009e32b6  e8df46dcff           call 0x7a799a
// 009e32bb  83c404               add esp, 4
// 009e32be  c70504a9c1001809a000 mov dword ptr [0xc1a904], 0xa00918
// 009e32c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e32b0(int);
void func_009e32b0()
{
    G4_func_009e32b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
