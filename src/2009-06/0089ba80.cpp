// roc 2009-06 0089ba80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ba80
//
// 0089ba80  a174e3a400           mov eax, dword ptr [0xa4e374]
// 0089ba85  50                   push eax
// 0089ba86  e8a7cfe7ff           call 0x718a32
// 0089ba8b  83c404               add esp, 4
// 0089ba8e  c7055ce3a40030d28a00 mov dword ptr [0xa4e35c], 0x8ad230
// 0089ba98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ba80(int);
void func_0089ba80()
{
    G4_func_0089ba80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
