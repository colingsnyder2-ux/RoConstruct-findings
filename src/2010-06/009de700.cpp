// roc 2010-06 009de700  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de700
//
// 009de700  a1d0afc000           mov eax, dword ptr [0xc0afd0]
// 009de705  50                   push eax
// 009de706  e88f92dcff           call 0x7a799a
// 009de70b  83c404               add esp, 4
// 009de70e  c705b0afc0001809a000 mov dword ptr [0xc0afb0], 0xa00918
// 009de718  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de700(int);
void func_009de700()
{
    G4_func_009de700(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
