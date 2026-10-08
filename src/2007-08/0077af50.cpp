// roc 2007-08 0077af50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077af50
//
// 0077af50  a138508c00           mov eax, dword ptr [0x8c5038]
// 0077af55  50                   push eax
// 0077af56  e8074debff           call 0x62fc62
// 0077af5b  83c404               add esp, 4
// 0077af5e  c70520508c00b4707800 mov dword ptr [0x8c5020], 0x7870b4
// 0077af68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077af50(int);
void func_0077af50()
{
    G4_func_0077af50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
