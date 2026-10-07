// roc 2010-06 009e79b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e79b0
//
// 009e79b0  a17010c200           mov eax, dword ptr [0xc21070]
// 009e79b5  50                   push eax
// 009e79b6  e8dfffdbff           call 0x7a799a
// 009e79bb  83c404               add esp, 4
// 009e79be  c7055410c2001809a000 mov dword ptr [0xc21054], 0xa00918
// 009e79c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e79b0(int);
void func_009e79b0()
{
    G4_func_009e79b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
