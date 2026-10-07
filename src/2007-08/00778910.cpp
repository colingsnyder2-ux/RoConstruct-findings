// roc 2007-08 00778910  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778910
//
// 00778910  a1e8e78b00           mov eax, dword ptr [0x8be7e8]
// 00778915  50                   push eax
// 00778916  e84773ebff           call 0x62fc62
// 0077891b  83c404               add esp, 4
// 0077891e  c705d0e78b00b4707800 mov dword ptr [0x8be7d0], 0x7870b4
// 00778928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778910(int);
void func_00778910()
{
    G4_func_00778910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
