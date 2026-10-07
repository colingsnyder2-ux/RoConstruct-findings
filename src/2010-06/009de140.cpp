// roc 2010-06 009de140  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de140
//
// 009de140  a1c8aec000           mov eax, dword ptr [0xc0aec8]
// 009de145  50                   push eax
// 009de146  e84f98dcff           call 0x7a799a
// 009de14b  83c404               add esp, 4
// 009de14e  c705acaec0001809a000 mov dword ptr [0xc0aeac], 0xa00918
// 009de158  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de140(int);
void func_009de140()
{
    G4_func_009de140(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
