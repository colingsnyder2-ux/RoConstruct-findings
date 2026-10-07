// roc 2010-06 009e6490  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6490
//
// 009e6490  a1a4f9c100           mov eax, dword ptr [0xc1f9a4]
// 009e6495  50                   push eax
// 009e6496  e8ff14dcff           call 0x7a799a
// 009e649b  83c404               add esp, 4
// 009e649e  c70588f9c1001809a000 mov dword ptr [0xc1f988], 0xa00918
// 009e64a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6490(int);
void func_009e6490()
{
    G4_func_009e6490(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
