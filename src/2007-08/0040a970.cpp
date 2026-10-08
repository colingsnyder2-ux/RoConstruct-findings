// from server: 100% by colin
// roc 2007-08 0040a970  unit: CBrowserView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a970
//
// 0040a970  8bc1                 mov eax, ecx
// 0040a972  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040a976  0fb680b4020000       movzx eax, byte ptr [eax + 0x2b4]
// 0040a97d  8b11                 mov edx, dword ptr [ecx]
// 0040a97f  8b12                 mov edx, dword ptr [edx]
// 0040a981  89442404             mov dword ptr [esp + 4], eax
// 0040a985  ffe2                 jmp edx

struct CBrowserView {
    char pad[0x2b4];
    unsigned char field_2b4;
    void invoke(void* arg);
};

void CBrowserView::invoke(void* arg) {
    unsigned char value = field_2b4;
    void** vtbl = *(void***)arg;
    void (__thiscall *fn)(void*, unsigned int) = (void (__thiscall *)(void*, unsigned int))vtbl[0];
    fn(arg, value);
}
