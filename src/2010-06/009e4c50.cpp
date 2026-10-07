// roc 2010-06 009e4c50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4c50
//
// 009e4c50  a14cd4c100           mov eax, dword ptr [0xc1d44c]
// 009e4c55  50                   push eax
// 009e4c56  e83f2ddcff           call 0x7a799a
// 009e4c5b  83c404               add esp, 4
// 009e4c5e  c70530d4c1001809a000 mov dword ptr [0xc1d430], 0xa00918
// 009e4c68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4c50(int);
void func_009e4c50()
{
    G4_func_009e4c50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
