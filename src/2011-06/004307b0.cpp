// roc 2011-06 004307b0  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004307b0
//
// 004307b0  56                   push esi
// 004307b1  8b742408             mov esi, dword ptr [esp + 8]
// 004307b5  56                   push esi
// 004307b6  e8f7a13d00           call 0x80a9b2
// 004307bb  85c0                 test eax, eax
// 004307bd  7504                 jne 0x4307c3
// 004307bf  5e                   pop esi
// 004307c0  c20400               ret 4
// 004307c3  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 004307ca  b801000000           mov eax, 1
// 004307cf  5e                   pop esi
// 004307d0  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX000004@@QAEHPAX@Z)

namespace ns_ROCX000004 {
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
