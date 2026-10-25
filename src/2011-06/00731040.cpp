// from server: 100% by tester
// roc 2011-06 00731040  unit: RBX::VContentFilter::?$BoundFuncDesc  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731040
//
// 00731040  56                   push esi
// 00731041  8bf1                 mov esi, ecx
// 00731043  e8a8fdffff           call 0x730df0
// 00731048  0fbf86a0000000       movsx eax, word ptr [esi + 0xa0]
// 0073104f  5e                   pop esi
// 00731050  c3                   ret 

struct S
{
    char padding[0xa0];
    short value;
    int f();
};

extern void G1_func_00730df0();

int S::f()
{
    G1_func_00730df0();
    return value;
}
