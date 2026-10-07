// roc 2010-06 009e8380  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8380
//
// 009e8380  a18c20c200           mov eax, dword ptr [0xc2208c]
// 009e8385  50                   push eax
// 009e8386  e80ff6dbff           call 0x7a799a
// 009e838b  83c404               add esp, 4
// 009e838e  c7057020c2001809a000 mov dword ptr [0xc22070], 0xa00918
// 009e8398  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8380(int);
void func_009e8380()
{
    G4_func_009e8380(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
