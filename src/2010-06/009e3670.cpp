// roc 2010-06 009e3670  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3670
//
// 009e3670  a1ecaec100           mov eax, dword ptr [0xc1aeec]
// 009e3675  50                   push eax
// 009e3676  e81f43dcff           call 0x7a799a
// 009e367b  83c404               add esp, 4
// 009e367e  c705d0aec1001809a000 mov dword ptr [0xc1aed0], 0xa00918
// 009e3688  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3670(int);
void func_009e3670()
{
    G4_func_009e3670(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
