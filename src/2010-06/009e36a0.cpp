// roc 2010-06 009e36a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e36a0
//
// 009e36a0  a14cafc100           mov eax, dword ptr [0xc1af4c]
// 009e36a5  50                   push eax
// 009e36a6  e8ef42dcff           call 0x7a799a
// 009e36ab  83c404               add esp, 4
// 009e36ae  c70530afc1001809a000 mov dword ptr [0xc1af30], 0xa00918
// 009e36b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e36a0(int);
void func_009e36a0()
{
    G4_func_009e36a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
