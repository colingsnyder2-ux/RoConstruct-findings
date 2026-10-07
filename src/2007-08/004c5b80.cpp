// roc 2007-08 004c5b80  unit: RakPeer  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5b80
//
// 004c5b80  e98bf7ffff           jmp 0x4c5310
// auto-matched from its assembly shape

extern void G1_func_004c5b80();
void func_004c5b80()
{
    G1_func_004c5b80();
}
