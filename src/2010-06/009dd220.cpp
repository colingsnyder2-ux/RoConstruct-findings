// roc 2010-06 009dd220  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd220
//
// 009dd220  a11860c000           mov eax, dword ptr [0xc06018]
// 009dd225  50                   push eax
// 009dd226  e86fa7dcff           call 0x7a799a
// 009dd22b  83c404               add esp, 4
// 009dd22e  c705f85fc0001809a000 mov dword ptr [0xc05ff8], 0xa00918
// 009dd238  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd220(int);
void func_009dd220()
{
    G4_func_009dd220(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
