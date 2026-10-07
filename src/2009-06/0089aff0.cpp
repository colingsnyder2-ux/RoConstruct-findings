// roc 2009-06 0089aff0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aff0
//
// 0089aff0  a1f4d2a400           mov eax, dword ptr [0xa4d2f4]
// 0089aff5  50                   push eax
// 0089aff6  e837dae7ff           call 0x718a32
// 0089affb  83c404               add esp, 4
// 0089affe  c705dcd2a40030d28a00 mov dword ptr [0xa4d2dc], 0x8ad230
// 0089b008  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aff0(int);
void func_0089aff0()
{
    G4_func_0089aff0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
