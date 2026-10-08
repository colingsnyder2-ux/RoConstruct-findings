// roc 2007-08 00779840  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779840
//
// 00779840  a138178c00           mov eax, dword ptr [0x8c1738]
// 00779845  50                   push eax
// 00779846  e81764ebff           call 0x62fc62
// 0077984b  83c404               add esp, 4
// 0077984e  c70520178c00b4707800 mov dword ptr [0x8c1720], 0x7870b4
// 00779858  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779840(int);
void func_00779840()
{
    G4_func_00779840(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
