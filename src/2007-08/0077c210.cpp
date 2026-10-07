// roc 2007-08 0077c210  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c210
//
// 0077c210  a130748c00           mov eax, dword ptr [0x8c7430]
// 0077c215  50                   push eax
// 0077c216  e8473aebff           call 0x62fc62
// 0077c21b  83c404               add esp, 4
// 0077c21e  c70518748c00b4707800 mov dword ptr [0x8c7418], 0x7870b4
// 0077c228  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c210(int);
void func_0077c210()
{
    G4_func_0077c210(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
