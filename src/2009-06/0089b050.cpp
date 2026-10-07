// roc 2009-06 0089b050  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b050
//
// 0089b050  a158d0a400           mov eax, dword ptr [0xa4d058]
// 0089b055  50                   push eax
// 0089b056  e8d7d9e7ff           call 0x718a32
// 0089b05b  83c404               add esp, 4
// 0089b05e  c7053cd0a40030d28a00 mov dword ptr [0xa4d03c], 0x8ad230
// 0089b068  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b050(int);
void func_0089b050()
{
    G4_func_0089b050(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
