// roc 2010-06 009e6af0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6af0
//
// 009e6af0  a124fcc100           mov eax, dword ptr [0xc1fc24]
// 009e6af5  50                   push eax
// 009e6af6  e89f0edcff           call 0x7a799a
// 009e6afb  83c404               add esp, 4
// 009e6afe  c70508fcc1001809a000 mov dword ptr [0xc1fc08], 0xa00918
// 009e6b08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6af0(int);
void func_009e6af0()
{
    G4_func_009e6af0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
