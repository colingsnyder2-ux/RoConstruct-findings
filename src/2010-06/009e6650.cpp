// roc 2010-06 009e6650  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6650
//
// 009e6650  a17cf5c100           mov eax, dword ptr [0xc1f57c]
// 009e6655  50                   push eax
// 009e6656  e83f13dcff           call 0x7a799a
// 009e665b  83c404               add esp, 4
// 009e665e  c70560f5c1001809a000 mov dword ptr [0xc1f560], 0xa00918
// 009e6668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6650(int);
void func_009e6650()
{
    G4_func_009e6650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
