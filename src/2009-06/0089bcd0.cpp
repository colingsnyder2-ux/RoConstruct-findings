// roc 2009-06 0089bcd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bcd0
//
// 0089bcd0  a11ce4a400           mov eax, dword ptr [0xa4e41c]
// 0089bcd5  50                   push eax
// 0089bcd6  e857cde7ff           call 0x718a32
// 0089bcdb  83c404               add esp, 4
// 0089bcde  c70504e4a40030d28a00 mov dword ptr [0xa4e404], 0x8ad230
// 0089bce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bcd0(int);
void func_0089bcd0()
{
    G4_func_0089bcd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
