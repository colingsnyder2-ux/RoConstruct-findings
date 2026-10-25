// from server: 100% by tester
// roc 2011-06 00731000  unit: RBX::VContentFilter::?$BoundFuncDesc  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731000
//
// 00731000  56                   push esi
// 00731001  8bf1                 mov esi, ecx
// 00731003  e8e8fdffff           call 0x730df0
// 00731008  0fbf8698000000       movsx eax, word ptr [esi + 0x98]
// 0073100f  5e                   pop esi
// 00731010  c3                   ret 

struct S
{
    int f();
    char padding[0x98];
    short value;
};

extern "C" void G1_func_00730df0();

int S::f()
{
    G1_func_00730df0();
    return (int)value;
}
