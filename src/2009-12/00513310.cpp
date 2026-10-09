// roc 2009-12 00513310  unit: RBX::Network::Players  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513310
//
// 00513310  56                   push esi
// 00513311  8bf1                 mov esi, ecx
// 00513313  e858f11100           call 0x632470
// 00513318  33c9                 xor ecx, ecx
// 0051331a  3bc6                 cmp eax, esi
// 0051331c  0f94c1               sete cl
// 0051331f  8ac1                 mov al, cl
// 00513321  5e                   pop esi
// 00513322  c3                   ret 
// copied from an identical function in another client (function ?isA@ServiceProvider@ns_ROCX00000f@@QAE_NXZ)

namespace ns_ROCX00000f {
struct ServiceProvider {
    bool isA();
};

extern "C" void* __fastcall sub_52CB30();

bool ServiceProvider::isA() {
    return sub_52CB30() == (void*)this;
}
}
