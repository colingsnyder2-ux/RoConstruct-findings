// roc 2009-06 0089cb30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cb30
//
// 0089cb30  a10cf6a400           mov eax, dword ptr [0xa4f60c]
// 0089cb35  50                   push eax
// 0089cb36  e8f7bee7ff           call 0x718a32
// 0089cb3b  83c404               add esp, 4
// 0089cb3e  c705f4f5a40030d28a00 mov dword ptr [0xa4f5f4], 0x8ad230
// 0089cb48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cb30(int);
void func_0089cb30()
{
    G4_func_0089cb30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
