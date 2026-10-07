// roc 2009-06 0089ca70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca70
//
// 0089ca70  a170f6a400           mov eax, dword ptr [0xa4f670]
// 0089ca75  50                   push eax
// 0089ca76  e8b7bfe7ff           call 0x718a32
// 0089ca7b  83c404               add esp, 4
// 0089ca7e  c70558f6a40030d28a00 mov dword ptr [0xa4f658], 0x8ad230
// 0089ca88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ca70(int);
void func_0089ca70()
{
    G4_func_0089ca70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
