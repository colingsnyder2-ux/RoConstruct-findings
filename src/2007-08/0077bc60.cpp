// roc 2007-08 0077bc60  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bc60
//
// 0077bc60  a1b4698c00           mov eax, dword ptr [0x8c69b4]
// 0077bc65  50                   push eax
// 0077bc66  e8f73febff           call 0x62fc62
// 0077bc6b  83c404               add esp, 4
// 0077bc6e  c7059c698c00b4707800 mov dword ptr [0x8c699c], 0x7870b4
// 0077bc78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bc60(int);
void func_0077bc60()
{
    G4_func_0077bc60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
