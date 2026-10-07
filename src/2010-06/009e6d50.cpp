// roc 2010-06 009e6d50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6d50
//
// 009e6d50  a19001c200           mov eax, dword ptr [0xc20190]
// 009e6d55  50                   push eax
// 009e6d56  e83f0cdcff           call 0x7a799a
// 009e6d5b  83c404               add esp, 4
// 009e6d5e  c7057001c2001809a000 mov dword ptr [0xc20170], 0xa00918
// 009e6d68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6d50(int);
void func_009e6d50()
{
    G4_func_009e6d50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
