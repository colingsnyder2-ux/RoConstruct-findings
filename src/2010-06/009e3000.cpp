// roc 2010-06 009e3000  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3000
//
// 009e3000  a1f4a3c100           mov eax, dword ptr [0xc1a3f4]
// 009e3005  50                   push eax
// 009e3006  e88f49dcff           call 0x7a799a
// 009e300b  83c404               add esp, 4
// 009e300e  c705d8a3c1001809a000 mov dword ptr [0xc1a3d8], 0xa00918
// 009e3018  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3000(int);
void func_009e3000()
{
    G4_func_009e3000(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
