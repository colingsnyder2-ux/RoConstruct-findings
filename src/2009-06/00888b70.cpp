// roc 2009-06 00888b70  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888b70
//
// 00888b70  68a06a8900           push 0x896aa0
// 00888b75  e8810fe9ff           call 0x719afb
// 00888b7a  59                   pop ecx
// 00888b7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888b70;
extern void G1_func_00888b70(void*);
void func_00888b70()
{
    G1_func_00888b70(&G2_func_00888b70);
}
