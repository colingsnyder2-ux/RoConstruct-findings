// roc 2010-06 0099fc40  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fc40
//
// 0099fc40  b9f0d3c100           mov ecx, 0xc1d3f0
// 0099fc45  e97635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fc40 { void m(); };
extern T_func_0099fc40 G1_func_0099fc40;
void func_0099fc40()
{
    G1_func_0099fc40.m();
}
