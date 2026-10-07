// roc 2010-06 009de280  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de280
//
// 009de280  a148aec000           mov eax, dword ptr [0xc0ae48]
// 009de285  50                   push eax
// 009de286  e80f97dcff           call 0x7a799a
// 009de28b  83c404               add esp, 4
// 009de28e  c7052caec0001809a000 mov dword ptr [0xc0ae2c], 0xa00918
// 009de298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de280(int);
void func_009de280()
{
    G4_func_009de280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
