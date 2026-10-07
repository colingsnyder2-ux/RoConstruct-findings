// roc 2010-06 009e6530  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6530
//
// 009e6530  a15cf5c100           mov eax, dword ptr [0xc1f55c]
// 009e6535  50                   push eax
// 009e6536  e85f14dcff           call 0x7a799a
// 009e653b  83c404               add esp, 4
// 009e653e  c70540f5c1001809a000 mov dword ptr [0xc1f540], 0xa00918
// 009e6548  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6530(int);
void func_009e6530()
{
    G4_func_009e6530(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
