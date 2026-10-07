// roc 2010-06 009de400  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de400
//
// 009de400  a118acc000           mov eax, dword ptr [0xc0ac18]
// 009de405  50                   push eax
// 009de406  e88f95dcff           call 0x7a799a
// 009de40b  83c404               add esp, 4
// 009de40e  c705fcabc0001809a000 mov dword ptr [0xc0abfc], 0xa00918
// 009de418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de400(int);
void func_009de400()
{
    G4_func_009de400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
