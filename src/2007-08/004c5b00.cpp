// roc 2007-08 004c5b00  unit: RakPeer  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5b00
//
// 004c5b00  e93bf9ffff           jmp 0x4c5440
// auto-matched from its assembly shape

extern void G1_func_004c5b00();
void func_004c5b00()
{
    G1_func_004c5b00();
}
