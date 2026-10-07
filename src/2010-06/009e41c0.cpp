// roc 2010-06 009e41c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e41c0
//
// 009e41c0  b9c0c5c100           mov ecx, 0xc1c5c0
// 009e41c5  e9a623bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e41c0 { void m(); };
extern T_func_009e41c0 G1_func_009e41c0;
void func_009e41c0()
{
    G1_func_009e41c0.m();
}
