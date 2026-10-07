// roc 2010-06 009e4240  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4240
//
// 009e4240  a1c0c8c100           mov eax, dword ptr [0xc1c8c0]
// 009e4245  50                   push eax
// 009e4246  e84f37dcff           call 0x7a799a
// 009e424b  83c404               add esp, 4
// 009e424e  c705a4c8c1001809a000 mov dword ptr [0xc1c8a4], 0xa00918
// 009e4258  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4240(int);
void func_009e4240()
{
    G4_func_009e4240(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
