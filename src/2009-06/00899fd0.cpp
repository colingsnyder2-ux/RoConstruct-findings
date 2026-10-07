// roc 2009-06 00899fd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899fd0
//
// 00899fd0  a170baa400           mov eax, dword ptr [0xa4ba70]
// 00899fd5  50                   push eax
// 00899fd6  e857eae7ff           call 0x718a32
// 00899fdb  83c404               add esp, 4
// 00899fde  c70558baa40030d28a00 mov dword ptr [0xa4ba58], 0x8ad230
// 00899fe8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899fd0(int);
void func_00899fd0()
{
    G4_func_00899fd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
