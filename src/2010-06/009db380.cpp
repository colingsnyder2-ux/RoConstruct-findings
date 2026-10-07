// roc 2010-06 009db380  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db380
//
// 009db380  a1280bc000           mov eax, dword ptr [0xc00b28]
// 009db385  50                   push eax
// 009db386  e80fc6dcff           call 0x7a799a
// 009db38b  83c404               add esp, 4
// 009db38e  c7050c0bc0001809a000 mov dword ptr [0xc00b0c], 0xa00918
// 009db398  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db380(int);
void func_009db380()
{
    G4_func_009db380(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
