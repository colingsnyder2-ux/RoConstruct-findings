// roc 2010-06 009dc280  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc280
//
// 009dc280  a19c45c000           mov eax, dword ptr [0xc0459c]
// 009dc285  50                   push eax
// 009dc286  e80fb7dcff           call 0x7a799a
// 009dc28b  83c404               add esp, 4
// 009dc28e  c7058045c0001809a000 mov dword ptr [0xc04580], 0xa00918
// 009dc298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc280(int);
void func_009dc280()
{
    G4_func_009dc280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
