// roc 2007-08 0077b560  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b560
//
// 0077b560  a1905c8c00           mov eax, dword ptr [0x8c5c90]
// 0077b565  50                   push eax
// 0077b566  e8f746ebff           call 0x62fc62
// 0077b56b  83c404               add esp, 4
// 0077b56e  c705785c8c00b4707800 mov dword ptr [0x8c5c78], 0x7870b4
// 0077b578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b560(int);
void func_0077b560()
{
    G4_func_0077b560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
