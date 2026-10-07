// roc 2009-06 00896ce0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896ce0
//
// 00896ce0  a15c3ba400           mov eax, dword ptr [0xa43b5c]
// 00896ce5  50                   push eax
// 00896ce6  e8471de8ff           call 0x718a32
// 00896ceb  83c404               add esp, 4
// 00896cee  c705443ba40030d28a00 mov dword ptr [0xa43b44], 0x8ad230
// 00896cf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896ce0(int);
void func_00896ce0()
{
    G4_func_00896ce0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
