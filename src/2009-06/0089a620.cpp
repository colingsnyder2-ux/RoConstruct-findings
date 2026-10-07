// roc 2009-06 0089a620  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a620
//
// 0089a620  a1c8c4a400           mov eax, dword ptr [0xa4c4c8]
// 0089a625  50                   push eax
// 0089a626  e807e4e7ff           call 0x718a32
// 0089a62b  83c404               add esp, 4
// 0089a62e  c705b0c4a40030d28a00 mov dword ptr [0xa4c4b0], 0x8ad230
// 0089a638  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a620(int);
void func_0089a620()
{
    G4_func_0089a620(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
