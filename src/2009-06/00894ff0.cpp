// roc 2009-06 00894ff0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894ff0
//
// 00894ff0  a1acdaa300           mov eax, dword ptr [0xa3daac]
// 00894ff5  50                   push eax
// 00894ff6  e8373ae8ff           call 0x718a32
// 00894ffb  83c404               add esp, 4
// 00894ffe  c70590daa30030d28a00 mov dword ptr [0xa3da90], 0x8ad230
// 00895008  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894ff0(int);
void func_00894ff0()
{
    G4_func_00894ff0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
