// roc 2010-06 009e5fb0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5fb0
//
// 009e5fb0  a198f0c100           mov eax, dword ptr [0xc1f098]
// 009e5fb5  50                   push eax
// 009e5fb6  e8df19dcff           call 0x7a799a
// 009e5fbb  83c404               add esp, 4
// 009e5fbe  c7057cf0c1001809a000 mov dword ptr [0xc1f07c], 0xa00918
// 009e5fc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5fb0(int);
void func_009e5fb0()
{
    G4_func_009e5fb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
