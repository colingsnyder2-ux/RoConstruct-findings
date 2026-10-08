// roc 2007-08 0077a750  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a750
//
// 0077a750  a1c8338c00           mov eax, dword ptr [0x8c33c8]
// 0077a755  50                   push eax
// 0077a756  e80755ebff           call 0x62fc62
// 0077a75b  83c404               add esp, 4
// 0077a75e  c705b0338c00b4707800 mov dword ptr [0x8c33b0], 0x7870b4
// 0077a768  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a750(int);
void func_0077a750()
{
    G4_func_0077a750(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
