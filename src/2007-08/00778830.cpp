// roc 2007-08 00778830  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778830
//
// 00778830  a104e88b00           mov eax, dword ptr [0x8be804]
// 00778835  50                   push eax
// 00778836  e82774ebff           call 0x62fc62
// 0077883b  83c404               add esp, 4
// 0077883e  c705ece78b00b4707800 mov dword ptr [0x8be7ec], 0x7870b4
// 00778848  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778830(int);
void func_00778830()
{
    G4_func_00778830(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
