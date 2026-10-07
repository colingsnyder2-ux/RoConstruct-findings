// roc 2010-06 009e4b50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4b50
//
// 009e4b50  a140d8c100           mov eax, dword ptr [0xc1d840]
// 009e4b55  50                   push eax
// 009e4b56  e83f2edcff           call 0x7a799a
// 009e4b5b  83c404               add esp, 4
// 009e4b5e  c70520d8c1001809a000 mov dword ptr [0xc1d820], 0xa00918
// 009e4b68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4b50(int);
void func_009e4b50()
{
    G4_func_009e4b50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
