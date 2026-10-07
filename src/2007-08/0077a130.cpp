// roc 2007-08 0077a130  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a130
//
// 0077a130  a10c288c00           mov eax, dword ptr [0x8c280c]
// 0077a135  50                   push eax
// 0077a136  e8275bebff           call 0x62fc62
// 0077a13b  83c404               add esp, 4
// 0077a13e  c705f4278c00b4707800 mov dword ptr [0x8c27f4], 0x7870b4
// 0077a148  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a130(int);
void func_0077a130()
{
    G4_func_0077a130(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
