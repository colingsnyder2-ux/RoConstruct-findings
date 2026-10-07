// roc 2009-06 00896fe0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896fe0
//
// 00896fe0  a12438a400           mov eax, dword ptr [0xa43824]
// 00896fe5  50                   push eax
// 00896fe6  e8471ae8ff           call 0x718a32
// 00896feb  83c404               add esp, 4
// 00896fee  c7050838a40030d28a00 mov dword ptr [0xa43808], 0x8ad230
// 00896ff8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896fe0(int);
void func_00896fe0()
{
    G4_func_00896fe0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
