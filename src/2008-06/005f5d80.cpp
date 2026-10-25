// from server: 100% by king_originala
// roc 2008-06 005f5d80  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5d80
//
// 005f5d80  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 005f5d87  7424                 je 0x5f5dad
// 005f5d89  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 005f5d8f  85c9                 test ecx, ecx
// 005f5d91  741a                 je 0x5f5dad
// 005f5d93  8b442404             mov eax, dword ptr [esp + 4]
// 005f5d97  50                   push eax
// 005f5d98  8d542408             lea edx, [esp + 8]
// 005f5d9c  52                   push edx
// 005f5d9d  ff1568258000         call dword ptr [0x802568]
// 005f5da3  8d4c2404             lea ecx, [esp + 4]
// 005f5da7  ff1564258000         call dword ptr [0x802564]
// 005f5dad  c20400               ret 4

struct Stream;

extern void (__thiscall *imbue)(Stream*, void*, const void*);
extern void (__thiscall *destroyLocale)(void*);

struct S {
    char padding[160];
    Stream* stream;
    char reserved[12];
    unsigned char flags;

    void f(const void* locale);
};

void S::f(const void* locale)
{
    if ((flags & 1) && stream) {
        imbue(stream, &locale, locale);
        destroyLocale(&locale);
    }
}
