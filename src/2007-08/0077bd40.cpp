// roc 2007-08 0077bd40  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd40
//
// 0077bd40  a1646a8c00           mov eax, dword ptr [0x8c6a64]
// 0077bd45  50                   push eax
// 0077bd46  e8173febff           call 0x62fc62
// 0077bd4b  83c404               add esp, 4
// 0077bd4e  c7054c6a8c00b4707800 mov dword ptr [0x8c6a4c], 0x7870b4
// 0077bd58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bd40(int);
void func_0077bd40()
{
    G4_func_0077bd40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
