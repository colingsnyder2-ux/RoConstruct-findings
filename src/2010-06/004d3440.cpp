// roc 2010-06 004d3440  unit: RBX::Network::VClient::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d3440
//
// 004d3440  e8bbfdffff           call 0x4d3200
// 004d3445  85c0                 test eax, eax
// 004d3447  7407                 je 0x4d3450
// 004d3449  8a806c260000         mov al, byte ptr [eax + 0x266c]
// 004d344f  c3                   ret 
// 004d3450  32c0                 xor al, al
// 004d3452  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00525920@ns_ROCX00001d@@QAEEXZ)

namespace ns_ROCX00001d {
struct S_func_00525920 {
    unsigned char f();
};

struct S_func_005256e0_result {
    char pad0[0x266c];
    unsigned char value;
};

S_func_005256e0_result *S_func_005256e0();

unsigned char S_func_00525920::f()
{
    S_func_005256e0_result *p = S_func_005256e0();
    if (p)
        return p->value;
    return 0;
}
}
