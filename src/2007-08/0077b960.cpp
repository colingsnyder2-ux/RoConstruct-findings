// roc 2007-08 0077b960  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b960
//
// 0077b960  a1bc638c00           mov eax, dword ptr [0x8c63bc]
// 0077b965  50                   push eax
// 0077b966  e8f742ebff           call 0x62fc62
// 0077b96b  83c404               add esp, 4
// 0077b96e  c705a4638c00b4707800 mov dword ptr [0x8c63a4], 0x7870b4
// 0077b978  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b960(int);
void func_0077b960()
{
    G4_func_0077b960(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
