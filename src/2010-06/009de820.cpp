// roc 2010-06 009de820  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de820
//
// 009de820  a108aec000           mov eax, dword ptr [0xc0ae08]
// 009de825  50                   push eax
// 009de826  e86f91dcff           call 0x7a799a
// 009de82b  83c404               add esp, 4
// 009de82e  c705ecadc0001809a000 mov dword ptr [0xc0adec], 0xa00918
// 009de838  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de820(int);
void func_009de820()
{
    G4_func_009de820(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
