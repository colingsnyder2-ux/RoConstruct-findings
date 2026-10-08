// from server: 81% by colin
// roc 2007-08 0054f5d0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f5d0
//
// 0054f5d0  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 0054f5d7  7424                 je 0x54f5fd
// 0054f5d9  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 0054f5df  85c9                 test ecx, ecx
// 0054f5e1  741a                 je 0x54f5fd
// 0054f5e3  8b442404             mov eax, dword ptr [esp + 4]
// 0054f5e7  50                   push eax
// 0054f5e8  8d542408             lea edx, [esp + 8]
// 0054f5ec  52                   push edx
// 0054f5ed  ff15f8e47700         call dword ptr [0x77e4f8]
// 0054f5f3  8d4c2404             lea ecx, [esp + 4]
// 0054f5f7  ff15fce47700         call dword ptr [0x77e4fc]
// 0054f5fd  c20400               ret 4

struct stream_buffer_base {
    char pad[0x8c];
    void* ptr_8c;
    char pad2[0x9c - 0x8c - 4];
    unsigned char flags_9c;
};

extern "C" {
    void* __stdcall pubimbue_impl(void* self, void* result, const void* loc);
    void __stdcall locale_dtor(void* loc);
}

struct S : stream_buffer_base {
    void setLocale(const void* loc);
};

void S::setLocale(const void* loc) {
    if ((flags_9c & 1) != 0 && ptr_8c != 0) {
        char buf[4];
        pubimbue_impl(ptr_8c, buf, loc);
        locale_dtor(buf);
    }
}
