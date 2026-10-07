// roc 2010-06 009e5b40  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5b40
//
// 009e5b40  a17cecc100           mov eax, dword ptr [0xc1ec7c]
// 009e5b45  50                   push eax
// 009e5b46  e84f1edcff           call 0x7a799a
// 009e5b4b  83c404               add esp, 4
// 009e5b4e  c7055cecc1001809a000 mov dword ptr [0xc1ec5c], 0xa00918
// 009e5b58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5b40(int);
void func_009e5b40()
{
    G4_func_009e5b40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
