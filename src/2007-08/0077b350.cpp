// roc 2007-08 0077b350  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b350
//
// 0077b350  a104588c00           mov eax, dword ptr [0x8c5804]
// 0077b355  50                   push eax
// 0077b356  e80749ebff           call 0x62fc62
// 0077b35b  83c404               add esp, 4
// 0077b35e  c705e8578c00b4707800 mov dword ptr [0x8c57e8], 0x7870b4
// 0077b368  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b350(int);
void func_0077b350()
{
    G4_func_0077b350(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
