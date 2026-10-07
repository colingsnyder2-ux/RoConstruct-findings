// roc 2009-06 0089a690  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a690
//
// 0089a690  a100c5a400           mov eax, dword ptr [0xa4c500]
// 0089a695  50                   push eax
// 0089a696  e897e3e7ff           call 0x718a32
// 0089a69b  83c404               add esp, 4
// 0089a69e  c705e8c4a40030d28a00 mov dword ptr [0xa4c4e8], 0x8ad230
// 0089a6a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a690(int);
void func_0089a690()
{
    G4_func_0089a690(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
