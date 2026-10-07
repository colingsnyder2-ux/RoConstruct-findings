// roc 2010-06 009de520  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de520
//
// 009de520  a1f8abc000           mov eax, dword ptr [0xc0abf8]
// 009de525  50                   push eax
// 009de526  e86f94dcff           call 0x7a799a
// 009de52b  83c404               add esp, 4
// 009de52e  c705dcabc0001809a000 mov dword ptr [0xc0abdc], 0xa00918
// 009de538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de520(int);
void func_009de520()
{
    G4_func_009de520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
