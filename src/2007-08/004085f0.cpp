// roc 2007-08 004085f0  unit: VCApp::?$CComObject  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004085f0
//
// 004085f0  b924be8b00           mov ecx, 0x8bbe24
// 004085f5  e9d6fc0100           jmp 0x4282d0
// auto-matched from its assembly shape

struct T_func_004085f0 { void m(); };
extern T_func_004085f0 G1_func_004085f0;
void func_004085f0()
{
    G1_func_004085f0.m();
}
