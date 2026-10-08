// roc 2007-08 0077a270  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a270
//
// 0077a270  a1cc298c00           mov eax, dword ptr [0x8c29cc]
// 0077a275  50                   push eax
// 0077a276  e8e759ebff           call 0x62fc62
// 0077a27b  83c404               add esp, 4
// 0077a27e  c705b4298c00b4707800 mov dword ptr [0x8c29b4], 0x7870b4
// 0077a288  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a270(int);
void func_0077a270()
{
    G4_func_0077a270(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
