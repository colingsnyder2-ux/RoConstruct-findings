// roc 2010-06 009e5820  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5820
//
// 009e5820  a1b4e7c100           mov eax, dword ptr [0xc1e7b4]
// 009e5825  50                   push eax
// 009e5826  e86f21dcff           call 0x7a799a
// 009e582b  83c404               add esp, 4
// 009e582e  c70598e7c1001809a000 mov dword ptr [0xc1e798], 0xa00918
// 009e5838  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5820(int);
void func_009e5820()
{
    G4_func_009e5820(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
