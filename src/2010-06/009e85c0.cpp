// roc 2010-06 009e85c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e85c0
//
// 009e85c0  a18c1fc200           mov eax, dword ptr [0xc21f8c]
// 009e85c5  50                   push eax
// 009e85c6  e8cff3dbff           call 0x7a799a
// 009e85cb  83c404               add esp, 4
// 009e85ce  c705701fc2001809a000 mov dword ptr [0xc21f70], 0xa00918
// 009e85d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e85c0(int);
void func_009e85c0()
{
    G4_func_009e85c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
