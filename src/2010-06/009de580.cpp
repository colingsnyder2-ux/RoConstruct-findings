// roc 2010-06 009de580  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de580
//
// 009de580  a1f8acc000           mov eax, dword ptr [0xc0acf8]
// 009de585  50                   push eax
// 009de586  e80f94dcff           call 0x7a799a
// 009de58b  83c404               add esp, 4
// 009de58e  c705dcacc0001809a000 mov dword ptr [0xc0acdc], 0xa00918
// 009de598  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de580(int);
void func_009de580()
{
    G4_func_009de580(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
