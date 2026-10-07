// roc 2009-06 0089a520  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a520
//
// 0089a520  a17cc3a400           mov eax, dword ptr [0xa4c37c]
// 0089a525  50                   push eax
// 0089a526  e807e5e7ff           call 0x718a32
// 0089a52b  83c404               add esp, 4
// 0089a52e  c70564c3a40030d28a00 mov dword ptr [0xa4c364], 0x8ad230
// 0089a538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a520(int);
void func_0089a520()
{
    G4_func_0089a520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
