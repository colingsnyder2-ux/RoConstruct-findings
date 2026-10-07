// roc 2010-06 009e4040  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4040
//
// 009e4040  a13cc3c100           mov eax, dword ptr [0xc1c33c]
// 009e4045  50                   push eax
// 009e4046  e84f39dcff           call 0x7a799a
// 009e404b  83c404               add esp, 4
// 009e404e  c70520c3c1001809a000 mov dword ptr [0xc1c320], 0xa00918
// 009e4058  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4040(int);
void func_009e4040()
{
    G4_func_009e4040(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
