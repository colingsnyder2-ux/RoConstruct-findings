// roc 2010-06 009dc260  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc260
//
// 009dc260  a15448c000           mov eax, dword ptr [0xc04854]
// 009dc265  50                   push eax
// 009dc266  e82fb7dcff           call 0x7a799a
// 009dc26b  83c404               add esp, 4
// 009dc26e  c7053848c0001809a000 mov dword ptr [0xc04838], 0xa00918
// 009dc278  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc260(int);
void func_009dc260()
{
    G4_func_009dc260(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
