// roc 2007-08 0077bbf0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bbf0
//
// 0077bbf0  a1bc678c00           mov eax, dword ptr [0x8c67bc]
// 0077bbf5  50                   push eax
// 0077bbf6  e86740ebff           call 0x62fc62
// 0077bbfb  83c404               add esp, 4
// 0077bbfe  c705a0678c00b4707800 mov dword ptr [0x8c67a0], 0x7870b4
// 0077bc08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bbf0(int);
void func_0077bbf0()
{
    G4_func_0077bbf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
