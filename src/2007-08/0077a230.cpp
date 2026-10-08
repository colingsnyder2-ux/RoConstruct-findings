// roc 2007-08 0077a230  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a230
//
// 0077a230  a1ec2a8c00           mov eax, dword ptr [0x8c2aec]
// 0077a235  50                   push eax
// 0077a236  e8275aebff           call 0x62fc62
// 0077a23b  83c404               add esp, 4
// 0077a23e  c705d42a8c00b4707800 mov dword ptr [0x8c2ad4], 0x7870b4
// 0077a248  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a230(int);
void func_0077a230()
{
    G4_func_0077a230(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
