// roc 2009-12 0075f170  unit: RBX::VDataModel::?$BoundFuncDesc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f170
//
// 0075f170  8b89a8000000         mov ecx, dword ptr [ecx + 0xa8]
// 0075f176  8b442404             mov eax, dword ptr [esp + 4]
// 0075f17a  8908                 mov dword ptr [eax], ecx
// 0075f17c  c20400               ret 4
// copied from an identical function in another client (function ?get_0x238@RBX_Backpack@ns_ROCX00000f@@QAEHPAH@Z)

namespace ns_ROCX00000f {
// from server: 100% by tester
struct RBX_Backpack {
    int get_0x238(int* out);
};

int RBX_Backpack::get_0x238(int* out) {
    *out = *(int*)((char*)this + 0xa8);
    return (int)out;
}
}
