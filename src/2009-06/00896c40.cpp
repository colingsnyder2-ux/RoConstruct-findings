// roc 2009-06 00896c40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896c40
//
// 00896c40  a1d838a400           mov eax, dword ptr [0xa438d8]
// 00896c45  50                   push eax
// 00896c46  e8e71de8ff           call 0x718a32
// 00896c4b  83c404               add esp, 4
// 00896c4e  c705c038a40030d28a00 mov dword ptr [0xa438c0], 0x8ad230
// 00896c58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896c40(int);
void func_00896c40()
{
    G4_func_00896c40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
