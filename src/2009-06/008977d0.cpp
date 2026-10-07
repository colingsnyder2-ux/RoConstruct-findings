// roc 2009-06 008977d0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008977d0
//
// 008977d0  a18844a400           mov eax, dword ptr [0xa44488]
// 008977d5  50                   push eax
// 008977d6  e85712e8ff           call 0x718a32
// 008977db  83c404               add esp, 4
// 008977de  c7057044a40030d28a00 mov dword ptr [0xa44470], 0x8ad230
// 008977e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008977d0(int);
void func_008977d0()
{
    G4_func_008977d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
