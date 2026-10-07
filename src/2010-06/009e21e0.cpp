// roc 2010-06 009e21e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e21e0
//
// 009e21e0  a1048ec100           mov eax, dword ptr [0xc18e04]
// 009e21e5  50                   push eax
// 009e21e6  e8af57dcff           call 0x7a799a
// 009e21eb  83c404               add esp, 4
// 009e21ee  c705e88dc1001809a000 mov dword ptr [0xc18de8], 0xa00918
// 009e21f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e21e0(int);
void func_009e21e0()
{
    G4_func_009e21e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
