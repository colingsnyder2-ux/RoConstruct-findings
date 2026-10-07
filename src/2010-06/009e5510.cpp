// roc 2010-06 009e5510  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5510
//
// 009e5510  a17ce4c100           mov eax, dword ptr [0xc1e47c]
// 009e5515  50                   push eax
// 009e5516  e87f24dcff           call 0x7a799a
// 009e551b  83c404               add esp, 4
// 009e551e  c70560e4c1001809a000 mov dword ptr [0xc1e460], 0xa00918
// 009e5528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5510(int);
void func_009e5510()
{
    G4_func_009e5510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
