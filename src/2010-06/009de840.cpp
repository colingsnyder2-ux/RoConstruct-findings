// roc 2010-06 009de840  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de840
//
// 009de840  a1dcb0c000           mov eax, dword ptr [0xc0b0dc]
// 009de845  50                   push eax
// 009de846  e84f91dcff           call 0x7a799a
// 009de84b  83c404               add esp, 4
// 009de84e  c705c0b0c0001809a000 mov dword ptr [0xc0b0c0], 0xa00918
// 009de858  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de840(int);
void func_009de840()
{
    G4_func_009de840(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
