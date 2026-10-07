// roc 2009-06 0089b710  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b710
//
// 0089b710  a18cdda400           mov eax, dword ptr [0xa4dd8c]
// 0089b715  50                   push eax
// 0089b716  e817d3e7ff           call 0x718a32
// 0089b71b  83c404               add esp, 4
// 0089b71e  c70574dda40030d28a00 mov dword ptr [0xa4dd74], 0x8ad230
// 0089b728  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b710(int);
void func_0089b710()
{
    G4_func_0089b710(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
