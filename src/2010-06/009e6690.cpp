// roc 2010-06 009e6690  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6690
//
// 009e6690  a1a4f8c100           mov eax, dword ptr [0xc1f8a4]
// 009e6695  50                   push eax
// 009e6696  e8ff12dcff           call 0x7a799a
// 009e669b  83c404               add esp, 4
// 009e669e  c70588f8c1001809a000 mov dword ptr [0xc1f888], 0xa00918
// 009e66a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6690(int);
void func_009e6690()
{
    G4_func_009e6690(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
