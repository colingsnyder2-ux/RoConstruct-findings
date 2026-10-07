// roc 2010-06 009e3530  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3530
//
// 009e3530  a1f4acc100           mov eax, dword ptr [0xc1acf4]
// 009e3535  50                   push eax
// 009e3536  e85f44dcff           call 0x7a799a
// 009e353b  83c404               add esp, 4
// 009e353e  c705d8acc1001809a000 mov dword ptr [0xc1acd8], 0xa00918
// 009e3548  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3530(int);
void func_009e3530()
{
    G4_func_009e3530(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
