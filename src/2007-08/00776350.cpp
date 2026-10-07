// roc 2007-08 00776350  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776350
//
// 00776350  68f0ca7700           push 0x77caf0
// 00776355  e8c9a9ebff           call 0x630d23
// 0077635a  59                   pop ecx
// 0077635b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776350;
extern void G1_func_00776350(void*);
void func_00776350()
{
    G1_func_00776350(&G2_func_00776350);
}
