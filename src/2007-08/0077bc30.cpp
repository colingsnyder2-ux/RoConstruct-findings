// roc 2007-08 0077bc30  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bc30
//
// 0077bc30  a1d8678c00           mov eax, dword ptr [0x8c67d8]
// 0077bc35  50                   push eax
// 0077bc36  e82740ebff           call 0x62fc62
// 0077bc3b  83c404               add esp, 4
// 0077bc3e  c705c0678c00b4707800 mov dword ptr [0x8c67c0], 0x7870b4
// 0077bc48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bc30(int);
void func_0077bc30()
{
    G4_func_0077bc30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
