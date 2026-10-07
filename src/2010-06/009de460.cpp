// roc 2010-06 009de460  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de460
//
// 009de460  a1b4b1c000           mov eax, dword ptr [0xc0b1b4]
// 009de465  50                   push eax
// 009de466  e82f95dcff           call 0x7a799a
// 009de46b  83c404               add esp, 4
// 009de46e  c70598b1c0001809a000 mov dword ptr [0xc0b198], 0xa00918
// 009de478  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de460(int);
void func_009de460()
{
    G4_func_009de460(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
