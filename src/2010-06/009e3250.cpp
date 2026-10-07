// roc 2010-06 009e3250  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3250
//
// 009e3250  a184a9c100           mov eax, dword ptr [0xc1a984]
// 009e3255  50                   push eax
// 009e3256  e83f47dcff           call 0x7a799a
// 009e325b  83c404               add esp, 4
// 009e325e  c70568a9c1001809a000 mov dword ptr [0xc1a968], 0xa00918
// 009e3268  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3250(int);
void func_009e3250()
{
    G4_func_009e3250(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
