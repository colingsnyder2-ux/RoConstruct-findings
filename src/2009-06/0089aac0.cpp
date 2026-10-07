// roc 2009-06 0089aac0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aac0
//
// 0089aac0  a128cea400           mov eax, dword ptr [0xa4ce28]
// 0089aac5  50                   push eax
// 0089aac6  e867dfe7ff           call 0x718a32
// 0089aacb  83c404               add esp, 4
// 0089aace  c70510cea40030d28a00 mov dword ptr [0xa4ce10], 0x8ad230
// 0089aad8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aac0(int);
void func_0089aac0()
{
    G4_func_0089aac0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
