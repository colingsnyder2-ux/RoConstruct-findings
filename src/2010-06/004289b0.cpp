// roc 2010-06 004289b0  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004289b0
//
// 004289b0  56                   push esi
// 004289b1  8b742408             mov esi, dword ptr [esp + 8]
// 004289b5  56                   push esi
// 004289b6  e839f93700           call 0x7a82f4
// 004289bb  85c0                 test eax, eax
// 004289bd  7504                 jne 0x4289c3
// 004289bf  5e                   pop esi
// 004289c0  c20400               ret 4
// 004289c3  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 004289ca  b801000000           mov eax, 1
// 004289cf  5e                   pop esi
// 004289d0  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX00000b@@QAEHPAX@Z)

namespace ns_ROCX00000b {
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
