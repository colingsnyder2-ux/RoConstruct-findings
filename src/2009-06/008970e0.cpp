// roc 2009-06 008970e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008970e0
//
// 008970e0  a1d439a400           mov eax, dword ptr [0xa439d4]
// 008970e5  50                   push eax
// 008970e6  e84719e8ff           call 0x718a32
// 008970eb  83c404               add esp, 4
// 008970ee  c705bc39a40030d28a00 mov dword ptr [0xa439bc], 0x8ad230
// 008970f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008970e0(int);
void func_008970e0()
{
    G4_func_008970e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
