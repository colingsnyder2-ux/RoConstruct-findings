// roc 2009-06 00896ba0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896ba0
//
// 00896ba0  a1f836a400           mov eax, dword ptr [0xa436f8]
// 00896ba5  50                   push eax
// 00896ba6  e8871ee8ff           call 0x718a32
// 00896bab  83c404               add esp, 4
// 00896bae  c705e036a40030d28a00 mov dword ptr [0xa436e0], 0x8ad230
// 00896bb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896ba0(int);
void func_00896ba0()
{
    G4_func_00896ba0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
