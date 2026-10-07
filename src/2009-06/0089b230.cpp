// roc 2009-06 0089b230  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b230
//
// 0089b230  a1c8daa400           mov eax, dword ptr [0xa4dac8]
// 0089b235  50                   push eax
// 0089b236  e8f7d7e7ff           call 0x718a32
// 0089b23b  83c404               add esp, 4
// 0089b23e  c705acdaa40030d28a00 mov dword ptr [0xa4daac], 0x8ad230
// 0089b248  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b230(int);
void func_0089b230()
{
    G4_func_0089b230(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
