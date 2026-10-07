// roc 2010-06 009e7090  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7090
//
// 009e7090  a13c06c200           mov eax, dword ptr [0xc2063c]
// 009e7095  50                   push eax
// 009e7096  e8ff08dcff           call 0x7a799a
// 009e709b  83c404               add esp, 4
// 009e709e  c7052006c2001809a000 mov dword ptr [0xc20620], 0xa00918
// 009e70a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7090(int);
void func_009e7090()
{
    G4_func_009e7090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
