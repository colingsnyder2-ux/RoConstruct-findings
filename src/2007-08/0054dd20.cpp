// from server: 71% by colin
// roc 2007-08 0054dd20  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054dd20
//
// 0054dd20  f6415c01             test byte ptr [ecx + 0x5c], 1
// 0054dd24  7421                 je 0x54dd47
// 0054dd26  8b494c               mov ecx, dword ptr [ecx + 0x4c]
// 0054dd29  85c9                 test ecx, ecx
// 0054dd2b  741a                 je 0x54dd47
// 0054dd2d  8b442404             mov eax, dword ptr [esp + 4]
// 0054dd31  50                   push eax
// 0054dd32  8d542408             lea edx, [esp + 8]
// 0054dd36  52                   push edx
// 0054dd37  ff15f8e47700         call dword ptr [0x77e4f8]
// 0054dd3d  8d4c2404             lea ecx, [esp + 4]
// 0054dd41  ff15fce47700         call dword ptr [0x77e4fc]
// 0054dd47  c20400               ret 4

struct S {
    char pad[0x4c];
    void* field_4c;
    char pad2[0xc];
    unsigned char field_5c;
    void f(void*);
};

extern "C" void* __stdcall pubimbue_impl(void*, void*);
extern "C" void __stdcall locale_dtor(void*);

void S::f(void* arg) {
    if ((field_5c & 1) != 0) {
        void* p = field_4c;
        if (p != 0) {
            void* loc = pubimbue_impl(p, arg);
            locale_dtor(loc);
        }
    }
}
