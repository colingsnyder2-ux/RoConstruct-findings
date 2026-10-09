// roc 2008-06 0042eb90  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eb90
//
// 0042eb90  56                   push esi
// 0042eb91  8b742408             mov esi, dword ptr [esp + 8]
// 0042eb95  56                   push esi
// 0042eb96  e867232700           call 0x6a0f02
// 0042eb9b  85c0                 test eax, eax
// 0042eb9d  7504                 jne 0x42eba3
// 0042eb9f  5e                   pop esi
// 0042eba0  c20400               ret 4
// 0042eba3  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 0042ebaa  b801000000           mov eax, 1
// 0042ebaf  5e                   pop esi
// 0042ebb0  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX000001@@QAEHPAX@Z)

namespace ns_ROCX000001 {
extern "C" int __stdcall sub_630442(void*);

struct CWrapperView {
    int sub_42ecf0(void*);
};

int CWrapperView::sub_42ecf0(void* arg) {
    if (sub_630442(arg) == 0) {
        return 0;
    }
    *(unsigned int*)((char*)arg + 0x2c) &= 0xfffffdff;
    return 1;
}
}
