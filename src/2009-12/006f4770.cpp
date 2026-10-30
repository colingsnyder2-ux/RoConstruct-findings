// roc 2009-12 006f4770  unit: RBX::Backpack  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4770
//
// 006f4770  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 006f4776  8b442404             mov eax, dword ptr [esp + 4]
// 006f477a  8908                 mov dword ptr [eax], ecx
// 006f477c  c20400               ret 4
// copied from an identical function in another client (function ?get_0x238@RBX_Backpack@ns_ROCX00000e@@QAEHPAH@Z)

namespace ns_ROCX00000e {
// from server: 100% by tester
struct RBX_Backpack {
    int get_0x238(int* out);
};

int RBX_Backpack::get_0x238(int* out) {
    *out = *(int*)((char*)this + 0xa4);
    return (int)out;
}
}
