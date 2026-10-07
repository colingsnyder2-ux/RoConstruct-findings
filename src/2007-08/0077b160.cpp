// roc 2007-08 0077b160  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b160
//
// 0077b160  a1b4558c00           mov eax, dword ptr [0x8c55b4]
// 0077b165  50                   push eax
// 0077b166  e8f74aebff           call 0x62fc62
// 0077b16b  83c404               add esp, 4
// 0077b16e  c7059c558c00b4707800 mov dword ptr [0x8c559c], 0x7870b4
// 0077b178  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b160(int);
void func_0077b160()
{
    G4_func_0077b160(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
