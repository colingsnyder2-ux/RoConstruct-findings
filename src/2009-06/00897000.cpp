// roc 2009-06 00897000  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897000
//
// 00897000  a1403ba400           mov eax, dword ptr [0xa43b40]
// 00897005  50                   push eax
// 00897006  e8271ae8ff           call 0x718a32
// 0089700b  83c404               add esp, 4
// 0089700e  c705283ba40030d28a00 mov dword ptr [0xa43b28], 0x8ad230
// 00897018  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897000(int);
void func_00897000()
{
    G4_func_00897000(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
