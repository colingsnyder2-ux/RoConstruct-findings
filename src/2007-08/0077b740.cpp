// roc 2007-08 0077b740  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b740
//
// 0077b740  a1b85f8c00           mov eax, dword ptr [0x8c5fb8]
// 0077b745  50                   push eax
// 0077b746  e81745ebff           call 0x62fc62
// 0077b74b  83c404               add esp, 4
// 0077b74e  c705a05f8c00b4707800 mov dword ptr [0x8c5fa0], 0x7870b4
// 0077b758  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b740(int);
void func_0077b740()
{
    G4_func_0077b740(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
