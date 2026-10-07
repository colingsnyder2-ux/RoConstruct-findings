// roc 2009-06 0089aef0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aef0
//
// 0089aef0  a174d0a400           mov eax, dword ptr [0xa4d074]
// 0089aef5  50                   push eax
// 0089aef6  e837dbe7ff           call 0x718a32
// 0089aefb  83c404               add esp, 4
// 0089aefe  c7055cd0a40030d28a00 mov dword ptr [0xa4d05c], 0x8ad230
// 0089af08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aef0(int);
void func_0089aef0()
{
    G4_func_0089aef0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
