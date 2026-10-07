// roc 2010-06 009e41d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e41d0
//
// 009e41d0  b9e0c4c100           mov ecx, 0xc1c4e0
// 009e41d5  e99623bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e41d0 { void m(); };
extern T_func_009e41d0 G1_func_009e41d0;
void func_009e41d0()
{
    G1_func_009e41d0.m();
}
