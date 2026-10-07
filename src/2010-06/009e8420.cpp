// roc 2010-06 009e8420  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8420
//
// 009e8420  a1ac20c200           mov eax, dword ptr [0xc220ac]
// 009e8425  50                   push eax
// 009e8426  e86ff5dbff           call 0x7a799a
// 009e842b  83c404               add esp, 4
// 009e842e  c7059020c2001809a000 mov dword ptr [0xc22090], 0xa00918
// 009e8438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8420(int);
void func_009e8420()
{
    G4_func_009e8420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
