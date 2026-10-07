// roc 2007-08 005e41b0  unit: RBX::ArrowTool  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005e41b0
//
// 005e41b0  e9cbfeffff           jmp 0x5e4080
// auto-matched from its assembly shape

extern void G1_func_005e41b0();
void func_005e41b0()
{
    G1_func_005e41b0();
}
