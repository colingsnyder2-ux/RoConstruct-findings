// roc 2009-06 00896dc0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896dc0
//
// 00896dc0  a17837a400           mov eax, dword ptr [0xa43778]
// 00896dc5  50                   push eax
// 00896dc6  e8671ce8ff           call 0x718a32
// 00896dcb  83c404               add esp, 4
// 00896dce  c7056037a40030d28a00 mov dword ptr [0xa43760], 0x8ad230
// 00896dd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896dc0(int);
void func_00896dc0()
{
    G4_func_00896dc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
