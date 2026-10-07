// roc 2007-08 0040edc0  unit: CChildFrame  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040edc0
//
// 0040edc0  e93bffffff           jmp 0x40ed00
// auto-matched from its assembly shape

extern void G1_func_0040edc0();
void func_0040edc0()
{
    G1_func_0040edc0();
}
