// roc 2010-06 009e2e30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2e30
//
// 009e2e30  a1b8a0c100           mov eax, dword ptr [0xc1a0b8]
// 009e2e35  50                   push eax
// 009e2e36  e85f4bdcff           call 0x7a799a
// 009e2e3b  83c404               add esp, 4
// 009e2e3e  c7059ca0c1001809a000 mov dword ptr [0xc1a09c], 0xa00918
// 009e2e48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2e30(int);
void func_009e2e30()
{
    G4_func_009e2e30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
