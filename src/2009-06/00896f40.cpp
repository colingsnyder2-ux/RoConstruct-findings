// roc 2009-06 00896f40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896f40
//
// 00896f40  a1b83ba400           mov eax, dword ptr [0xa43bb8]
// 00896f45  50                   push eax
// 00896f46  e8e71ae8ff           call 0x718a32
// 00896f4b  83c404               add esp, 4
// 00896f4e  c705a03ba40030d28a00 mov dword ptr [0xa43ba0], 0x8ad230
// 00896f58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896f40(int);
void func_00896f40()
{
    G4_func_00896f40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
