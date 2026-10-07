// roc 2010-06 009de880  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de880
//
// 009de880  a10caac000           mov eax, dword ptr [0xc0aa0c]
// 009de885  50                   push eax
// 009de886  e80f91dcff           call 0x7a799a
// 009de88b  83c404               add esp, 4
// 009de88e  c705f0a9c0001809a000 mov dword ptr [0xc0a9f0], 0xa00918
// 009de898  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de880(int);
void func_009de880()
{
    G4_func_009de880(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
