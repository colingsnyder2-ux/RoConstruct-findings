// roc 2009-06 0089a640  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a640
//
// 0089a640  a168c4a400           mov eax, dword ptr [0xa4c468]
// 0089a645  50                   push eax
// 0089a646  e8e7e3e7ff           call 0x718a32
// 0089a64b  83c404               add esp, 4
// 0089a64e  c70550c4a40030d28a00 mov dword ptr [0xa4c450], 0x8ad230
// 0089a658  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a640(int);
void func_0089a640()
{
    G4_func_0089a640(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
