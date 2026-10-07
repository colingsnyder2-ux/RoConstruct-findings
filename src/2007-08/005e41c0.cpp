// roc 2007-08 005e41c0  unit: RBX::ArrowTool  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005e41c0
//
// 005e41c0  e92bffffff           jmp 0x5e40f0
// auto-matched from its assembly shape

extern void G1_func_005e41c0();
void func_005e41c0()
{
    G1_func_005e41c0();
}
