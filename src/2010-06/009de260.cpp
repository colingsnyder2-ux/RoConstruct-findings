// roc 2010-06 009de260  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de260
//
// 009de260  a1f4afc000           mov eax, dword ptr [0xc0aff4]
// 009de265  50                   push eax
// 009de266  e82f97dcff           call 0x7a799a
// 009de26b  83c404               add esp, 4
// 009de26e  c705d8afc0001809a000 mov dword ptr [0xc0afd8], 0xa00918
// 009de278  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de260(int);
void func_009de260()
{
    G4_func_009de260(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
