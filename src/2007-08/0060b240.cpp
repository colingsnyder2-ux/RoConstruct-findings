// from server: 66% by colin
// roc 2007-08 0060b240  unit: CXTCaptionButtonTheme  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b240
//
// 0060b240  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060b244  8b4108               mov eax, dword ptr [ecx + 8]
// 0060b247  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0060b24a  8b5064               mov edx, dword ptr [eax + 0x64]
// 0060b24d  56                   push esi
// 0060b24e  8b7164               mov esi, dword ptr [ecx + 0x64]
// 0060b251  395608               cmp dword ptr [esi + 8], edx
// 0060b254  740d                 je 0x60b263
// 0060b256  33c0                 xor eax, eax
// 0060b258  397208               cmp dword ptr [edx + 8], esi
// 0060b25b  0f95c0               setne al
// 0060b25e  83e801               sub eax, 1
// 0060b261  23c1                 and eax, ecx
// 0060b263  5e                   pop esi
// 0060b264  c3                   ret 

struct CXTCaptionButtonTheme {
    char pad[8];
    void* field_8;
    void* field_c;
    void* Get();
};

void* CXTCaptionButtonTheme::Get() {
    void* a = *(void**)((char*)field_8 + 0x64);
    void* b = *(void**)((char*)field_c + 0x64);
    if (*(void**)((char*)b + 8) == a)
        return this;
    int r = (*(void**)((char*)a + 8) != b) ? 1 : 0;
    r = r - 1;
    return (void*)((unsigned)r & (unsigned)this);
}
