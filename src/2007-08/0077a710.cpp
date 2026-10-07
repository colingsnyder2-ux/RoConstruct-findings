// roc 2007-08 0077a710  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a710
//
// 0077a710  a190338c00           mov eax, dword ptr [0x8c3390]
// 0077a715  50                   push eax
// 0077a716  e84755ebff           call 0x62fc62
// 0077a71b  83c404               add esp, 4
// 0077a71e  c70578338c00b4707800 mov dword ptr [0x8c3378], 0x7870b4
// 0077a728  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a710(int);
void func_0077a710()
{
    G4_func_0077a710(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
