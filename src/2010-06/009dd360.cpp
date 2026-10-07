// roc 2010-06 009dd360  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd360
//
// 009dd360  a18461c000           mov eax, dword ptr [0xc06184]
// 009dd365  50                   push eax
// 009dd366  e82fa6dcff           call 0x7a799a
// 009dd36b  83c404               add esp, 4
// 009dd36e  c7056861c0001809a000 mov dword ptr [0xc06168], 0xa00918
// 009dd378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd360(int);
void func_009dd360()
{
    G4_func_009dd360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
