// roc 2007-08 0077af70  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077af70
//
// 0077af70  a194508c00           mov eax, dword ptr [0x8c5094]
// 0077af75  50                   push eax
// 0077af76  e8e74cebff           call 0x62fc62
// 0077af7b  83c404               add esp, 4
// 0077af7e  c7057c508c00b4707800 mov dword ptr [0x8c507c], 0x7870b4
// 0077af88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077af70(int);
void func_0077af70()
{
    G4_func_0077af70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
