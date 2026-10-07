// roc 2010-06 009de560  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de560
//
// 009de560  a14cabc000           mov eax, dword ptr [0xc0ab4c]
// 009de565  50                   push eax
// 009de566  e82f94dcff           call 0x7a799a
// 009de56b  83c404               add esp, 4
// 009de56e  c70530abc0001809a000 mov dword ptr [0xc0ab30], 0xa00918
// 009de578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de560(int);
void func_009de560()
{
    G4_func_009de560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
