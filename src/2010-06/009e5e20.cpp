// roc 2010-06 009e5e20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5e20
//
// 009e5e20  a1bceec100           mov eax, dword ptr [0xc1eebc]
// 009e5e25  50                   push eax
// 009e5e26  e86f1bdcff           call 0x7a799a
// 009e5e2b  83c404               add esp, 4
// 009e5e2e  c705a0eec1001809a000 mov dword ptr [0xc1eea0], 0xa00918
// 009e5e38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5e20(int);
void func_009e5e20()
{
    G4_func_009e5e20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
