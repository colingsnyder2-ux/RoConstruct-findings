// roc 2007-08 0077a420  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a420
//
// 0077a420  a16c2e8c00           mov eax, dword ptr [0x8c2e6c]
// 0077a425  50                   push eax
// 0077a426  e83758ebff           call 0x62fc62
// 0077a42b  83c404               add esp, 4
// 0077a42e  c705542e8c00b4707800 mov dword ptr [0x8c2e54], 0x7870b4
// 0077a438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a420(int);
void func_0077a420()
{
    G4_func_0077a420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
