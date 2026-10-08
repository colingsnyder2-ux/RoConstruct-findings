// roc 2007-08 00779820  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779820
//
// 00779820  a138198c00           mov eax, dword ptr [0x8c1938]
// 00779825  50                   push eax
// 00779826  e83764ebff           call 0x62fc62
// 0077982b  83c404               add esp, 4
// 0077982e  c70520198c00b4707800 mov dword ptr [0x8c1920], 0x7870b4
// 00779838  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779820(int);
void func_00779820()
{
    G4_func_00779820(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
