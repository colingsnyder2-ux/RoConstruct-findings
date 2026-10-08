// roc 2007-08 0077bbc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bbc0
//
// 0077bbc0  a1bc658c00           mov eax, dword ptr [0x8c65bc]
// 0077bbc5  50                   push eax
// 0077bbc6  e89740ebff           call 0x62fc62
// 0077bbcb  83c404               add esp, 4
// 0077bbce  c705a0658c00b4707800 mov dword ptr [0x8c65a0], 0x7870b4
// 0077bbd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bbc0(int);
void func_0077bbc0()
{
    G4_func_0077bbc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
