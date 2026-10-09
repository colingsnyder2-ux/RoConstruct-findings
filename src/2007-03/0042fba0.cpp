// roc 2007-03 0042fba0  unit: seg_00420000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042fba0
//
// 0042fba0  56                   push esi
// 0042fba1  8b742408             mov esi, dword ptr [esp + 8]
// 0042fba5  56                   push esi
// 0042fba6  e82bed1e00           call 0x61e8d6
// 0042fbab  85c0                 test eax, eax
// 0042fbad  7504                 jne 0x42fbb3
// 0042fbaf  5e                   pop esi
// 0042fbb0  c20400               ret 4
// 0042fbb3  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 0042fbba  b801000000           mov eax, 1
// 0042fbbf  5e                   pop esi
// 0042fbc0  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX00000d@@QAEHPAX@Z)

namespace ns_ROCX00000d {
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
