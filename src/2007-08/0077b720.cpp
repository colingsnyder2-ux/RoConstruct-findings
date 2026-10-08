// roc 2007-08 0077b720  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b720
//
// 0077b720  a128608c00           mov eax, dword ptr [0x8c6028]
// 0077b725  50                   push eax
// 0077b726  e83745ebff           call 0x62fc62
// 0077b72b  83c404               add esp, 4
// 0077b72e  c70510608c00b4707800 mov dword ptr [0x8c6010], 0x7870b4
// 0077b738  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b720(int);
void func_0077b720()
{
    G4_func_0077b720(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
