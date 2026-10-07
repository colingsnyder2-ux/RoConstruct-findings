// roc 2010-06 009e8400  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8400
//
// 009e8400  a1cc1ec200           mov eax, dword ptr [0xc21ecc]
// 009e8405  50                   push eax
// 009e8406  e88ff5dbff           call 0x7a799a
// 009e840b  83c404               add esp, 4
// 009e840e  c705b01ec2001809a000 mov dword ptr [0xc21eb0], 0xa00918
// 009e8418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8400(int);
void func_009e8400()
{
    G4_func_009e8400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
