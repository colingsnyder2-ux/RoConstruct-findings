// roc 2009-06 0089bea0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bea0
//
// 0089bea0  a1d4e6a400           mov eax, dword ptr [0xa4e6d4]
// 0089bea5  50                   push eax
// 0089bea6  e887cbe7ff           call 0x718a32
// 0089beab  83c404               add esp, 4
// 0089beae  c705bce6a40030d28a00 mov dword ptr [0xa4e6bc], 0x8ad230
// 0089beb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bea0(int);
void func_0089bea0()
{
    G4_func_0089bea0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
