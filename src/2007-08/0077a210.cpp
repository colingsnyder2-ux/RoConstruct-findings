// roc 2007-08 0077a210  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a210
//
// 0077a210  a1f0278c00           mov eax, dword ptr [0x8c27f0]
// 0077a215  50                   push eax
// 0077a216  e8475aebff           call 0x62fc62
// 0077a21b  83c404               add esp, 4
// 0077a21e  c705d8278c00b4707800 mov dword ptr [0x8c27d8], 0x7870b4
// 0077a228  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a210(int);
void func_0077a210()
{
    G4_func_0077a210(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
