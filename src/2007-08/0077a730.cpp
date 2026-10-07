// roc 2007-08 0077a730  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a730
//
// 0077a730  a1e4338c00           mov eax, dword ptr [0x8c33e4]
// 0077a735  50                   push eax
// 0077a736  e82755ebff           call 0x62fc62
// 0077a73b  83c404               add esp, 4
// 0077a73e  c705cc338c00b4707800 mov dword ptr [0x8c33cc], 0x7870b4
// 0077a748  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a730(int);
void func_0077a730()
{
    G4_func_0077a730(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
