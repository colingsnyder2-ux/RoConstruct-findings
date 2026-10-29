// roc 2009-12 0041d3f0  unit: CRobloxTreeCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041d3f0
//
// 0041d3f0  33c0                 xor eax, eax
// 0041d3f2  3881e8000000         cmp byte ptr [ecx + 0xe8], al
// 0041d3f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041d3fc  0f95c0               setne al
// 0041d3ff  8901                 mov dword ptr [ecx], eax
// 0041d401  c20800               ret 8
// copied from an identical function in another client (function ?getFlagTo@CRobloxTreeCtrl@ns_ROCX000003@@QBEXHPAH@Z)

namespace ns_ROCX000003 {
// from server: 100% by why2
struct CRobloxTreeCtrl {
    void getFlagTo(int unused, int* out) const;
};

void CRobloxTreeCtrl::getFlagTo(int unused, int* out) const {
    *out = *(const unsigned char*)((const char*)this + 0xe8) != 0;
}
}
