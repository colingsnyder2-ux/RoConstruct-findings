// roc 2009-06 0089a480  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a480
//
// 0089a480  a180c2a400           mov eax, dword ptr [0xa4c280]
// 0089a485  50                   push eax
// 0089a486  e8a7e5e7ff           call 0x718a32
// 0089a48b  83c404               add esp, 4
// 0089a48e  c70568c2a40030d28a00 mov dword ptr [0xa4c268], 0x8ad230
// 0089a498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a480(int);
void func_0089a480()
{
    G4_func_0089a480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
