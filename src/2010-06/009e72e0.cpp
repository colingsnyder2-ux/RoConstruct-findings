// roc 2010-06 009e72e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e72e0
//
// 009e72e0  a16409c200           mov eax, dword ptr [0xc20964]
// 009e72e5  50                   push eax
// 009e72e6  e8af06dcff           call 0x7a799a
// 009e72eb  83c404               add esp, 4
// 009e72ee  c7054409c2001809a000 mov dword ptr [0xc20944], 0xa00918
// 009e72f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e72e0(int);
void func_009e72e0()
{
    G4_func_009e72e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
