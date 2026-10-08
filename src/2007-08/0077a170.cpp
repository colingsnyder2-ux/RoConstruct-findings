// roc 2007-08 0077a170  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a170
//
// 0077a170  a1402a8c00           mov eax, dword ptr [0x8c2a40]
// 0077a175  50                   push eax
// 0077a176  e8e75aebff           call 0x62fc62
// 0077a17b  83c404               add esp, 4
// 0077a17e  c705282a8c00b4707800 mov dword ptr [0x8c2a28], 0x7870b4
// 0077a188  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a170(int);
void func_0077a170()
{
    G4_func_0077a170(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
