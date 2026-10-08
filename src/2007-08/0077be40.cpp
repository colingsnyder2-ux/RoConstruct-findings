// roc 2007-08 0077be40  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077be40
//
// 0077be40  a1446d8c00           mov eax, dword ptr [0x8c6d44]
// 0077be45  50                   push eax
// 0077be46  e8173eebff           call 0x62fc62
// 0077be4b  83c404               add esp, 4
// 0077be4e  c705286d8c00b4707800 mov dword ptr [0x8c6d28], 0x7870b4
// 0077be58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077be40(int);
void func_0077be40()
{
    G4_func_0077be40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
