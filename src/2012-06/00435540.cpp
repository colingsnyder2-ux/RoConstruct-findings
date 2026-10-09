// roc 2012-06 00435540  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435540
//
// 00435540  56                   push esi
// 00435541  8b742408             mov esi, dword ptr [esp + 8]
// 00435545  56                   push esi
// 00435546  e8e7d45400           call 0x982a32
// 0043554b  85c0                 test eax, eax
// 0043554d  7504                 jne 0x435553
// 0043554f  5e                   pop esi
// 00435550  c20400               ret 4
// 00435553  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 0043555a  b801000000           mov eax, 1
// 0043555f  5e                   pop esi
// 00435560  c20400               ret 4
// copied from an identical function in another client (function ?sub_42ecf0@CWrapperView@ns_ROCX000002@@QAEHPAX@Z)

namespace ns_ROCX000002 {
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
