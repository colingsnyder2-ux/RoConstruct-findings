// roc 2010-06 009dd180  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd180
//
// 009dd180  a1ac5fc000           mov eax, dword ptr [0xc05fac]
// 009dd185  50                   push eax
// 009dd186  e80fa8dcff           call 0x7a799a
// 009dd18b  83c404               add esp, 4
// 009dd18e  c705905fc0001809a000 mov dword ptr [0xc05f90], 0xa00918
// 009dd198  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd180(int);
void func_009dd180()
{
    G4_func_009dd180(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
