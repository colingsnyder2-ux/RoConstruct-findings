// roc 2010-06 009e0f70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f70
//
// 009e0f70  b97072c100           mov ecx, 0xc17270
// 009e0f75  e966ecbcff           jmp 0x5afbe0
// auto-matched from its assembly shape

struct T_func_009e0f70 { void m(); };
extern T_func_009e0f70 G1_func_009e0f70;
void func_009e0f70()
{
    G1_func_009e0f70.m();
}
