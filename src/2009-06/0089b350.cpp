// roc 2009-06 0089b350  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b350
//
// 0089b350  a168d8a400           mov eax, dword ptr [0xa4d868]
// 0089b355  50                   push eax
// 0089b356  e8d7d6e7ff           call 0x718a32
// 0089b35b  83c404               add esp, 4
// 0089b35e  c70550d8a40030d28a00 mov dword ptr [0xa4d850], 0x8ad230
// 0089b368  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b350(int);
void func_0089b350()
{
    G4_func_0089b350(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
