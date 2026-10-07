// roc 2009-06 0089adb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089adb0
//
// 0089adb0  a194d0a400           mov eax, dword ptr [0xa4d094]
// 0089adb5  50                   push eax
// 0089adb6  e877dce7ff           call 0x718a32
// 0089adbb  83c404               add esp, 4
// 0089adbe  c70578d0a40030d28a00 mov dword ptr [0xa4d078], 0x8ad230
// 0089adc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089adb0(int);
void func_0089adb0()
{
    G4_func_0089adb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
