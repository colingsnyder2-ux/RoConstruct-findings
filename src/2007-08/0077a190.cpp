// roc 2007-08 0077a190  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a190
//
// 0077a190  a1b42a8c00           mov eax, dword ptr [0x8c2ab4]
// 0077a195  50                   push eax
// 0077a196  e8c75aebff           call 0x62fc62
// 0077a19b  83c404               add esp, 4
// 0077a19e  c705982a8c00b4707800 mov dword ptr [0x8c2a98], 0x7870b4
// 0077a1a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a190(int);
void func_0077a190()
{
    G4_func_0077a190(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
