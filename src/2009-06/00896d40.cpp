// roc 2009-06 00896d40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896d40
//
// 00896d40  a14839a400           mov eax, dword ptr [0xa43948]
// 00896d45  50                   push eax
// 00896d46  e8e71ce8ff           call 0x718a32
// 00896d4b  83c404               add esp, 4
// 00896d4e  c7053039a40030d28a00 mov dword ptr [0xa43930], 0x8ad230
// 00896d58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896d40(int);
void func_00896d40()
{
    G4_func_00896d40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
