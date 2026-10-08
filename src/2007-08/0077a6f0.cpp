// roc 2007-08 0077a6f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a6f0
//
// 0077a6f0  a1f0348c00           mov eax, dword ptr [0x8c34f0]
// 0077a6f5  50                   push eax
// 0077a6f6  e86755ebff           call 0x62fc62
// 0077a6fb  83c404               add esp, 4
// 0077a6fe  c705d8348c00b4707800 mov dword ptr [0x8c34d8], 0x7870b4
// 0077a708  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a6f0(int);
void func_0077a6f0()
{
    G4_func_0077a6f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
