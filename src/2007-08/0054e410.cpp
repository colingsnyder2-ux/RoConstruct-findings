// from server: 76% by colin
// roc 2007-08 0054e410  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e410
//
// 0054e410  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 0054e417  7424                 je 0x54e43d
// 0054e419  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0054e41f  85c9                 test ecx, ecx
// 0054e421  741a                 je 0x54e43d
// 0054e423  8b442404             mov eax, dword ptr [esp + 4]
// 0054e427  50                   push eax
// 0054e428  8d542408             lea edx, [esp + 8]
// 0054e42c  52                   push edx
// 0054e42d  ff15f8e47700         call dword ptr [0x77e4f8]
// 0054e433  8d4c2404             lea ecx, [esp + 4]
// 0054e437  ff15fce47700         call dword ptr [0x77e4fc]
// 0054e43d  c20400               ret 4

struct S {
    char pad[0xa0];
    void* field_a0;
    char pad2[0xc];
    unsigned char field_b0;
    void imbue(void* loc);
};

extern "C" void __stdcall locale_dtor(void* loc);
extern "C" void* __stdcall locale_ctor(void* loc, void* other);

void S::imbue(void* loc) {
    if ((field_b0 & 1) != 0 && field_a0 != 0) {
        char buf[4];
        locale_ctor(buf, loc);
        locale_dtor(buf);
    }
}
