// roc 2007-08 0077a400  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a400
//
// 0077a400  a1502e8c00           mov eax, dword ptr [0x8c2e50]
// 0077a405  50                   push eax
// 0077a406  e85758ebff           call 0x62fc62
// 0077a40b  83c404               add esp, 4
// 0077a40e  c705382e8c00b4707800 mov dword ptr [0x8c2e38], 0x7870b4
// 0077a418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a400(int);
void func_0077a400()
{
    G4_func_0077a400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
