// roc 2007-08 007769f0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007769f0
//
// 007769f0  6840cc7700           push 0x77cc40
// 007769f5  e829a3ebff           call 0x630d23
// 007769fa  59                   pop ecx
// 007769fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007769f0;
extern void G1_func_007769f0(void*);
void func_007769f0()
{
    G1_func_007769f0(&G2_func_007769f0);
}
