// from server: 100% by tester
// roc 2011-06 00412860  unit: CIDEBrowserView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412860
//
// 00412860  8bc1                 mov eax, ecx
// 00412862  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00412866  0fb680ac020000       movzx eax, byte ptr [eax + 0x2ac]
// 0041286d  8b11                 mov edx, dword ptr [ecx]
// 0041286f  8b12                 mov edx, dword ptr [edx]
// 00412871  89442404             mov dword ptr [esp + 4], eax
// 00412875  ffe2                 jmp edx

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