// roc 2009-06 0089cbf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cbf0
//
// 0089cbf0  a17cf7a400           mov eax, dword ptr [0xa4f77c]
// 0089cbf5  50                   push eax
// 0089cbf6  e837bee7ff           call 0x718a32
// 0089cbfb  83c404               add esp, 4
// 0089cbfe  c70564f7a40030d28a00 mov dword ptr [0xa4f764], 0x8ad230
// 0089cc08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cbf0(int);
void func_0089cbf0()
{
    G4_func_0089cbf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
