// roc 2009-06 00899d50  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899d50
//
// 00899d50  a110b7a400           mov eax, dword ptr [0xa4b710]
// 00899d55  50                   push eax
// 00899d56  e8d7ece7ff           call 0x718a32
// 00899d5b  83c404               add esp, 4
// 00899d5e  c705f8b6a40030d28a00 mov dword ptr [0xa4b6f8], 0x8ad230
// 00899d68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899d50(int);
void func_00899d50()
{
    G4_func_00899d50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
