// roc 2010-06 009de360  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de360
//
// 009de360  a168aec000           mov eax, dword ptr [0xc0ae68]
// 009de365  50                   push eax
// 009de366  e82f96dcff           call 0x7a799a
// 009de36b  83c404               add esp, 4
// 009de36e  c7054caec0001809a000 mov dword ptr [0xc0ae4c], 0xa00918
// 009de378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de360(int);
void func_009de360()
{
    G4_func_009de360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
