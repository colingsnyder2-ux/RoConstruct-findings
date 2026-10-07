// roc 2010-06 009de720  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de720
//
// 009de720  a1d4abc000           mov eax, dword ptr [0xc0abd4]
// 009de725  50                   push eax
// 009de726  e86f92dcff           call 0x7a799a
// 009de72b  83c404               add esp, 4
// 009de72e  c705b4abc0001809a000 mov dword ptr [0xc0abb4], 0xa00918
// 009de738  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de720(int);
void func_009de720()
{
    G4_func_009de720(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
