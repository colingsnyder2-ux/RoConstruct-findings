// roc 2010-06 009e7d30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d30
//
// 009e7d30  a17417c200           mov eax, dword ptr [0xc21774]
// 009e7d35  50                   push eax
// 009e7d36  e85ffcdbff           call 0x7a799a
// 009e7d3b  83c404               add esp, 4
// 009e7d3e  c7055417c2001809a000 mov dword ptr [0xc21754], 0xa00918
// 009e7d48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7d30(int);
void func_009e7d30()
{
    G4_func_009e7d30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
