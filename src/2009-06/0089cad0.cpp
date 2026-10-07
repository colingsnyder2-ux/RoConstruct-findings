// roc 2009-06 0089cad0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cad0
//
// 0089cad0  a1c4f5a400           mov eax, dword ptr [0xa4f5c4]
// 0089cad5  50                   push eax
// 0089cad6  e857bfe7ff           call 0x718a32
// 0089cadb  83c404               add esp, 4
// 0089cade  c705a8f5a40030d28a00 mov dword ptr [0xa4f5a8], 0x8ad230
// 0089cae8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cad0(int);
void func_0089cad0()
{
    G4_func_0089cad0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
