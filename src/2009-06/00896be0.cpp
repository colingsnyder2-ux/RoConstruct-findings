// roc 2009-06 00896be0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896be0
//
// 00896be0  a16c36a400           mov eax, dword ptr [0xa4366c]
// 00896be5  50                   push eax
// 00896be6  e8471ee8ff           call 0x718a32
// 00896beb  83c404               add esp, 4
// 00896bee  c7055436a40030d28a00 mov dword ptr [0xa43654], 0x8ad230
// 00896bf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896be0(int);
void func_00896be0()
{
    G4_func_00896be0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
