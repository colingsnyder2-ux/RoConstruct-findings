// roc 2010-06 009de240  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de240
//
// 009de240  a128aec000           mov eax, dword ptr [0xc0ae28]
// 009de245  50                   push eax
// 009de246  e84f97dcff           call 0x7a799a
// 009de24b  83c404               add esp, 4
// 009de24e  c7050caec0001809a000 mov dword ptr [0xc0ae0c], 0xa00918
// 009de258  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de240(int);
void func_009de240()
{
    G4_func_009de240(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
