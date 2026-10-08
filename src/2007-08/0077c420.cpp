// roc 2007-08 0077c420  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c420
//
// 0077c420  a1287e8c00           mov eax, dword ptr [0x8c7e28]
// 0077c425  50                   push eax
// 0077c426  e83738ebff           call 0x62fc62
// 0077c42b  83c404               add esp, 4
// 0077c42e  c705107e8c00b4707800 mov dword ptr [0x8c7e10], 0x7870b4
// 0077c438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c420(int);
void func_0077c420()
{
    G4_func_0077c420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
