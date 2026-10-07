// roc 2009-06 0089aa40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aa40
//
// 0089aa40  a17ccca400           mov eax, dword ptr [0xa4cc7c]
// 0089aa45  50                   push eax
// 0089aa46  e8e7dfe7ff           call 0x718a32
// 0089aa4b  83c404               add esp, 4
// 0089aa4e  c70564cca40030d28a00 mov dword ptr [0xa4cc64], 0x8ad230
// 0089aa58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aa40(int);
void func_0089aa40()
{
    G4_func_0089aa40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
