// roc 2007-08 00778050  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778050
//
// 00778050  a128de8b00           mov eax, dword ptr [0x8bde28]
// 00778055  50                   push eax
// 00778056  e8077cebff           call 0x62fc62
// 0077805b  83c404               add esp, 4
// 0077805e  c70510de8b00b4707800 mov dword ptr [0x8bde10], 0x7870b4
// 00778068  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778050(int);
void func_00778050()
{
    G4_func_00778050(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
