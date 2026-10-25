// from server: 100% by tester
// roc 2008-06 0040e0d0  unit: CBrowserView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e0d0
//
// 0040e0d0  8bc1                 mov eax, ecx
// 0040e0d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040e0d6  0fb680c8020000       movzx eax, byte ptr [eax + 0x2c8]
// 0040e0dd  8b11                 mov edx, dword ptr [ecx]
// 0040e0df  8b12                 mov edx, dword ptr [edx]
// 0040e0e1  89442404             mov dword ptr [esp + 4], eax
// 0040e0e5  ffe2                 jmp edx

struct CBrowserView {
    char pad[0x2c8];
    unsigned char field_2b4;
    void invoke(void* arg);
};

void CBrowserView::invoke(void* arg) {
    unsigned char value = field_2b4;
    void** vtbl = *(void***)arg;
    void (__thiscall *fn)(void*, unsigned int) = (void (__thiscall *)(void*, unsigned int))vtbl[0];
    fn(arg, value);
}