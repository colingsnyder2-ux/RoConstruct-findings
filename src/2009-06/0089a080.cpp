// roc 2009-06 0089a080  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a080
//
// 0089a080  a17cbba400           mov eax, dword ptr [0xa4bb7c]
// 0089a085  50                   push eax
// 0089a086  e8a7e9e7ff           call 0x718a32
// 0089a08b  83c404               add esp, 4
// 0089a08e  c70564bba40030d28a00 mov dword ptr [0xa4bb64], 0x8ad230
// 0089a098  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a080(int);
void func_0089a080()
{
    G4_func_0089a080(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
