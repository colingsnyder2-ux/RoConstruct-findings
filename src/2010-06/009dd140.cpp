// roc 2010-06 009dd140  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd140
//
// 009dd140  a16060c000           mov eax, dword ptr [0xc06060]
// 009dd145  50                   push eax
// 009dd146  e84fa8dcff           call 0x7a799a
// 009dd14b  83c404               add esp, 4
// 009dd14e  c7054460c0001809a000 mov dword ptr [0xc06044], 0xa00918
// 009dd158  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd140(int);
void func_009dd140()
{
    G4_func_009dd140(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
