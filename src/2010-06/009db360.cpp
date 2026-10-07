// roc 2010-06 009db360  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db360
//
// 009db360  a1480bc000           mov eax, dword ptr [0xc00b48]
// 009db365  50                   push eax
// 009db366  e82fc6dcff           call 0x7a799a
// 009db36b  83c404               add esp, 4
// 009db36e  c7052c0bc0001809a000 mov dword ptr [0xc00b2c], 0xa00918
// 009db378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db360(int);
void func_009db360()
{
    G4_func_009db360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
