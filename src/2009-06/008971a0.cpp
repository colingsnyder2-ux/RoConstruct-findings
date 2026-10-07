// roc 2009-06 008971a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008971a0
//
// 008971a0  a1e035a400           mov eax, dword ptr [0xa435e0]
// 008971a5  50                   push eax
// 008971a6  e88718e8ff           call 0x718a32
// 008971ab  83c404               add esp, 4
// 008971ae  c705c835a40030d28a00 mov dword ptr [0xa435c8], 0x8ad230
// 008971b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008971a0(int);
void func_008971a0()
{
    G4_func_008971a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
