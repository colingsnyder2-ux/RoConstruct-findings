// roc 2010-06 009dd260  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd260
//
// 009dd260  a1c060c000           mov eax, dword ptr [0xc060c0]
// 009dd265  50                   push eax
// 009dd266  e82fa7dcff           call 0x7a799a
// 009dd26b  83c404               add esp, 4
// 009dd26e  c705a460c0001809a000 mov dword ptr [0xc060a4], 0xa00918
// 009dd278  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd260(int);
void func_009dd260()
{
    G4_func_009dd260(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
