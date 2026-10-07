// roc 2009-06 0089b370  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b370
//
// 0089b370  a128d5a400           mov eax, dword ptr [0xa4d528]
// 0089b375  50                   push eax
// 0089b376  e8b7d6e7ff           call 0x718a32
// 0089b37b  83c404               add esp, 4
// 0089b37e  c70510d5a40030d28a00 mov dword ptr [0xa4d510], 0x8ad230
// 0089b388  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b370(int);
void func_0089b370()
{
    G4_func_0089b370(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
