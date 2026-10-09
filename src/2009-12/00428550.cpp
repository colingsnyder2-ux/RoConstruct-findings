// roc 2009-12 00428550  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428550
//
// 00428550  56                   push esi
// 00428551  8b742408             mov esi, dword ptr [esp + 8]
// 00428555  56                   push esi
// 00428556  e859bc3c00           call 0x7f41b4
// 0042855b  85c0                 test eax, eax
// 0042855d  7504                 jne 0x428563
// 0042855f  5e                   pop esi
// 00428560  c20400               ret 4
// 00428563  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 0042856a  b801000000           mov eax, 1
// 0042856f  5e                   pop esi
// 00428570  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX00000f@@QAEHPAX@Z)

namespace ns_ROCX00000f {
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
