// roc 2009-06 008972d0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008972d0
//
// 008972d0  a10c3ea400           mov eax, dword ptr [0xa43e0c]
// 008972d5  50                   push eax
// 008972d6  e85717e8ff           call 0x718a32
// 008972db  83c404               add esp, 4
// 008972de  c705f43da40030d28a00 mov dword ptr [0xa43df4], 0x8ad230
// 008972e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008972d0(int);
void func_008972d0()
{
    G4_func_008972d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
