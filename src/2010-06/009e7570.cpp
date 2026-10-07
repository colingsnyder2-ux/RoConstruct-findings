// roc 2010-06 009e7570  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7570
//
// 009e7570  a15c0bc200           mov eax, dword ptr [0xc20b5c]
// 009e7575  50                   push eax
// 009e7576  e81f04dcff           call 0x7a799a
// 009e757b  83c404               add esp, 4
// 009e757e  c705400bc2001809a000 mov dword ptr [0xc20b40], 0xa00918
// 009e7588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7570(int);
void func_009e7570()
{
    G4_func_009e7570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
