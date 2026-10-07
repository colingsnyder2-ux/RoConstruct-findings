// roc 2010-06 009def50  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009def50
//
// 009def50  a1c8bcc000           mov eax, dword ptr [0xc0bcc8]
// 009def55  50                   push eax
// 009def56  e83f8adcff           call 0x7a799a
// 009def5b  83c404               add esp, 4
// 009def5e  c705acbcc0001809a000 mov dword ptr [0xc0bcac], 0xa00918
// 009def68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009def50(int);
void func_009def50()
{
    G4_func_009def50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
