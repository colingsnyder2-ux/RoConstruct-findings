// roc 2010-06 009e3e70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3e70
//
// 009e3e70  a1d0bfc100           mov eax, dword ptr [0xc1bfd0]
// 009e3e75  50                   push eax
// 009e3e76  e81f3bdcff           call 0x7a799a
// 009e3e7b  83c404               add esp, 4
// 009e3e7e  c705b0bfc1001809a000 mov dword ptr [0xc1bfb0], 0xa00918
// 009e3e88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3e70(int);
void func_009e3e70()
{
    G4_func_009e3e70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
