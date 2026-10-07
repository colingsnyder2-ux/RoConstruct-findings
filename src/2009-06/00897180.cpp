// roc 2009-06 00897180  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897180
//
// 00897180  a18836a400           mov eax, dword ptr [0xa43688]
// 00897185  50                   push eax
// 00897186  e8a718e8ff           call 0x718a32
// 0089718b  83c404               add esp, 4
// 0089718e  c7057036a40030d28a00 mov dword ptr [0xa43670], 0x8ad230
// 00897198  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897180(int);
void func_00897180()
{
    G4_func_00897180(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
