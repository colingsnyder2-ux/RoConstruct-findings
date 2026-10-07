// roc 2009-06 00895050  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895050
//
// 00895050  a104dba300           mov eax, dword ptr [0xa3db04]
// 00895055  50                   push eax
// 00895056  e8d739e8ff           call 0x718a32
// 0089505b  83c404               add esp, 4
// 0089505e  c705ecdaa30030d28a00 mov dword ptr [0xa3daec], 0x8ad230
// 00895068  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895050(int);
void func_00895050()
{
    G4_func_00895050(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
