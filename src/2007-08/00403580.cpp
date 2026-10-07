// roc 2007-08 00403580  unit: ATL::CRegObject  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00403580
//
// 00403580  e99befffff           jmp 0x402520
// auto-matched from its assembly shape

extern void G1_func_00403580();
void func_00403580()
{
    G1_func_00403580();
}
