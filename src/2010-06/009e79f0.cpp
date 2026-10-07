// roc 2010-06 009e79f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e79f0
//
// 009e79f0  a12c10c200           mov eax, dword ptr [0xc2102c]
// 009e79f5  50                   push eax
// 009e79f6  e89fffdbff           call 0x7a799a
// 009e79fb  83c404               add esp, 4
// 009e79fe  c7051010c2001809a000 mov dword ptr [0xc21010], 0xa00918
// 009e7a08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e79f0(int);
void func_009e79f0()
{
    G4_func_009e79f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
