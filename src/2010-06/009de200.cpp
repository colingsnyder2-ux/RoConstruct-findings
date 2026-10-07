// roc 2010-06 009de200  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de200
//
// 009de200  a16cafc000           mov eax, dword ptr [0xc0af6c]
// 009de205  50                   push eax
// 009de206  e88f97dcff           call 0x7a799a
// 009de20b  83c404               add esp, 4
// 009de20e  c70550afc0001809a000 mov dword ptr [0xc0af50], 0xa00918
// 009de218  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de200(int);
void func_009de200()
{
    G4_func_009de200(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
