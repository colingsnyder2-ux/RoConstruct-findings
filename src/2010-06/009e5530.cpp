// roc 2010-06 009e5530  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5530
//
// 009e5530  a124e5c100           mov eax, dword ptr [0xc1e524]
// 009e5535  50                   push eax
// 009e5536  e85f24dcff           call 0x7a799a
// 009e553b  83c404               add esp, 4
// 009e553e  c70508e5c1001809a000 mov dword ptr [0xc1e508], 0xa00918
// 009e5548  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5530(int);
void func_009e5530()
{
    G4_func_009e5530(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
