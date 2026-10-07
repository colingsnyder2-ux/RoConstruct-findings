// roc 2009-06 0089ae30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ae30
//
// 0089ae30  a13cd2a400           mov eax, dword ptr [0xa4d23c]
// 0089ae35  50                   push eax
// 0089ae36  e8f7dbe7ff           call 0x718a32
// 0089ae3b  83c404               add esp, 4
// 0089ae3e  c70520d2a40030d28a00 mov dword ptr [0xa4d220], 0x8ad230
// 0089ae48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ae30(int);
void func_0089ae30()
{
    G4_func_0089ae30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
