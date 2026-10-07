// roc 2009-06 0089b150  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b150
//
// 0089b150  a168d4a400           mov eax, dword ptr [0xa4d468]
// 0089b155  50                   push eax
// 0089b156  e8d7d8e7ff           call 0x718a32
// 0089b15b  83c404               add esp, 4
// 0089b15e  c7054cd4a40030d28a00 mov dword ptr [0xa4d44c], 0x8ad230
// 0089b168  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b150(int);
void func_0089b150()
{
    G4_func_0089b150(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
