// roc 2009-06 00899bd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899bd0
//
// 00899bd0  a164b5a400           mov eax, dword ptr [0xa4b564]
// 00899bd5  50                   push eax
// 00899bd6  e857eee7ff           call 0x718a32
// 00899bdb  83c404               add esp, 4
// 00899bde  c70548b5a40030d28a00 mov dword ptr [0xa4b548], 0x8ad230
// 00899be8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899bd0(int);
void func_00899bd0()
{
    G4_func_00899bd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
