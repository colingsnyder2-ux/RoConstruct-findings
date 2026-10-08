// roc 2007-08 0077bd20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd20
//
// 0077bd20  a1086a8c00           mov eax, dword ptr [0x8c6a08]
// 0077bd25  50                   push eax
// 0077bd26  e8373febff           call 0x62fc62
// 0077bd2b  83c404               add esp, 4
// 0077bd2e  c705f0698c00b4707800 mov dword ptr [0x8c69f0], 0x7870b4
// 0077bd38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bd20(int);
void func_0077bd20()
{
    G4_func_0077bd20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
