// roc 2007-08 00779860  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779860
//
// 00779860  a100188c00           mov eax, dword ptr [0x8c1800]
// 00779865  50                   push eax
// 00779866  e8f763ebff           call 0x62fc62
// 0077986b  83c404               add esp, 4
// 0077986e  c705e8178c00b4707800 mov dword ptr [0x8c17e8], 0x7870b4
// 00779878  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779860(int);
void func_00779860()
{
    G4_func_00779860(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
