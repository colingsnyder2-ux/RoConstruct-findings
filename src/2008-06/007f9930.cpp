// roc 2008-06 007f9930  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9930
//
// 007f9930  68c0188000           push 0x8018c0
// 007f9935  e8757eeaff           call 0x6a17af
// 007f993a  59                   pop ecx
// 007f993b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9930;
extern void G1_func_007f9930(void*);
void func_007f9930()
{
    G1_func_007f9930(&G2_func_007f9930);
}
