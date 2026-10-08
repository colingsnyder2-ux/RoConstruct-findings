// roc 2007-08 0077a000  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a000
//
// 0077a000  a120278c00           mov eax, dword ptr [0x8c2720]
// 0077a005  50                   push eax
// 0077a006  e8575cebff           call 0x62fc62
// 0077a00b  83c404               add esp, 4
// 0077a00e  c70508278c00b4707800 mov dword ptr [0x8c2708], 0x7870b4
// 0077a018  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a000(int);
void func_0077a000()
{
    G4_func_0077a000(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
