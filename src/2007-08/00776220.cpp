// roc 2007-08 00776220  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776220
//
// 00776220  6830ca7700           push 0x77ca30
// 00776225  e8f9aaebff           call 0x630d23
// 0077622a  59                   pop ecx
// 0077622b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776220;
extern void G1_func_00776220(void*);
void func_00776220()
{
    G1_func_00776220(&G2_func_00776220);
}
