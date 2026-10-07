// roc 2007-08 0077af10  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077af10
//
// 0077af10  a158508c00           mov eax, dword ptr [0x8c5058]
// 0077af15  50                   push eax
// 0077af16  e8474debff           call 0x62fc62
// 0077af1b  83c404               add esp, 4
// 0077af1e  c7053c508c00b4707800 mov dword ptr [0x8c503c], 0x7870b4
// 0077af28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077af10(int);
void func_0077af10()
{
    G4_func_0077af10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
