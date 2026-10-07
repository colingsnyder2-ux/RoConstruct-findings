// roc 2009-06 0089ab60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ab60
//
// 0089ab60  a138cda400           mov eax, dword ptr [0xa4cd38]
// 0089ab65  50                   push eax
// 0089ab66  e8c7dee7ff           call 0x718a32
// 0089ab6b  83c404               add esp, 4
// 0089ab6e  c70520cda40030d28a00 mov dword ptr [0xa4cd20], 0x8ad230
// 0089ab78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ab60(int);
void func_0089ab60()
{
    G4_func_0089ab60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
