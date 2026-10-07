// roc 2010-06 009e5570  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5570
//
// 009e5570  a184e5c100           mov eax, dword ptr [0xc1e584]
// 009e5575  50                   push eax
// 009e5576  e81f24dcff           call 0x7a799a
// 009e557b  83c404               add esp, 4
// 009e557e  c70568e5c1001809a000 mov dword ptr [0xc1e568], 0xa00918
// 009e5588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5570(int);
void func_009e5570()
{
    G4_func_009e5570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
