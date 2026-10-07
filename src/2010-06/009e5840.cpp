// roc 2010-06 009e5840  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5840
//
// 009e5840  a174e7c100           mov eax, dword ptr [0xc1e774]
// 009e5845  50                   push eax
// 009e5846  e84f21dcff           call 0x7a799a
// 009e584b  83c404               add esp, 4
// 009e584e  c70558e7c1001809a000 mov dword ptr [0xc1e758], 0xa00918
// 009e5858  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5840(int);
void func_009e5840()
{
    G4_func_009e5840(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
