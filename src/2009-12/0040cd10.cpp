// roc 2009-12 0040cd10  unit: CIDEBrowserView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040cd10
//
// 0040cd10  8bc1                 mov eax, ecx
// 0040cd12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040cd16  0fb680ac020000       movzx eax, byte ptr [eax + 0x2ac]
// 0040cd1d  8b11                 mov edx, dword ptr [ecx]
// 0040cd1f  8b12                 mov edx, dword ptr [edx]
// 0040cd21  89442404             mov dword ptr [esp + 4], eax
// 0040cd25  ffe2                 jmp edx
// copied from an identical function in another client (function ?invoke@CBrowserView@ns_ROCX000004@@QAEXPAX@Z)

namespace ns_ROCX000004 {
// from server: 100% by tester
struct CBrowserView {
    char pad[0x2ac];
    unsigned char field_2b4;
    void invoke(void* arg);
};

void CBrowserView::invoke(void* arg) {
    unsigned char value = field_2b4;
    void** vtbl = *(void***)arg;
    void (__thiscall *fn)(void*, unsigned int) = (void (__thiscall *)(void*, unsigned int))vtbl[0];
    fn(arg, value);
}
}
