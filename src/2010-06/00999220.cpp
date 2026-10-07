// roc 2010-06 00999220  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00999220
//
// 00999220  b99c99c100           mov ecx, 0xc1999c
// 00999225  e9969fb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00999220 { void m(); };
extern T_func_00999220 G1_func_00999220;
void func_00999220()
{
    G1_func_00999220.m();
}
