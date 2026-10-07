// roc 2010-06 009e78b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e78b0
//
// 009e78b0  a1c00fc200           mov eax, dword ptr [0xc20fc0]
// 009e78b5  50                   push eax
// 009e78b6  e8df00dcff           call 0x7a799a
// 009e78bb  83c404               add esp, 4
// 009e78be  c705a00fc2001809a000 mov dword ptr [0xc20fa0], 0xa00918
// 009e78c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e78b0(int);
void func_009e78b0()
{
    G4_func_009e78b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
