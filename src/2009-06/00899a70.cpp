// roc 2009-06 00899a70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899a70
//
// 00899a70  a1c4b2a400           mov eax, dword ptr [0xa4b2c4]
// 00899a75  50                   push eax
// 00899a76  e8b7efe7ff           call 0x718a32
// 00899a7b  83c404               add esp, 4
// 00899a7e  c705acb2a40030d28a00 mov dword ptr [0xa4b2ac], 0x8ad230
// 00899a88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899a70(int);
void func_00899a70()
{
    G4_func_00899a70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
