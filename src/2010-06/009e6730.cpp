// roc 2010-06 009e6730  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6730
//
// 009e6730  a15cf6c100           mov eax, dword ptr [0xc1f65c]
// 009e6735  50                   push eax
// 009e6736  e85f12dcff           call 0x7a799a
// 009e673b  83c404               add esp, 4
// 009e673e  c70540f6c1001809a000 mov dword ptr [0xc1f640], 0xa00918
// 009e6748  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6730(int);
void func_009e6730()
{
    G4_func_009e6730(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
