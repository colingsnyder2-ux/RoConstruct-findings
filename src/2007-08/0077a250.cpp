// roc 2007-08 0077a250  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a250
//
// 0077a250  a1d4278c00           mov eax, dword ptr [0x8c27d4]
// 0077a255  50                   push eax
// 0077a256  e8075aebff           call 0x62fc62
// 0077a25b  83c404               add esp, 4
// 0077a25e  c705bc278c00b4707800 mov dword ptr [0x8c27bc], 0x7870b4
// 0077a268  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a250(int);
void func_0077a250()
{
    G4_func_0077a250(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
