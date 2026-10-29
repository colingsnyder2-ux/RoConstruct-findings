// roc 2010-06 004d3400  unit: RBX::Network::VClient::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d3400
//
// 004d3400  e8fbfdffff           call 0x4d3200
// 004d3405  85c0                 test eax, eax
// 004d3407  7407                 je 0x4d3410
// 004d3409  8a806d260000         mov al, byte ptr [eax + 0x266d]
// 004d340f  c3                   ret 
// 004d3410  32c0                 xor al, al
// 004d3412  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005258e0@ns_ROCX00001c@@QAEDXZ)

namespace ns_ROCX00001c {
struct S_func_005258e0 {
    char f();
};

extern "C" void* __cdecl sub_005256e0();

char S_func_005258e0::f()
{
    void* p = sub_005256e0();
    if (p != 0)
        return *(char*)((char*)p + 0x266d);
    return 0;
}
}
