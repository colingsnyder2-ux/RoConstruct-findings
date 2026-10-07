// roc 2010-06 009e2e50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2e50
//
// 009e2e50  a1f8a0c100           mov eax, dword ptr [0xc1a0f8]
// 009e2e55  50                   push eax
// 009e2e56  e83f4bdcff           call 0x7a799a
// 009e2e5b  83c404               add esp, 4
// 009e2e5e  c705dca0c1001809a000 mov dword ptr [0xc1a0dc], 0xa00918
// 009e2e68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2e50(int);
void func_009e2e50()
{
    G4_func_009e2e50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
