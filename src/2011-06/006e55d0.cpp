// roc 2011-06 006e55d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e55d0
//
// 006e55d0  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 006e55d7  7424                 je 0x6e55fd
// 006e55d9  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006e55df  85c9                 test ecx, ecx
// 006e55e1  741a                 je 0x6e55fd
// 006e55e3  8b442404             mov eax, dword ptr [esp + 4]
// 006e55e7  50                   push eax
// 006e55e8  8d542408             lea edx, [esp + 8]
// 006e55ec  52                   push edx
// 006e55ed  ff151407a400         call dword ptr [0xa40714]
// 006e55f3  8d4c2404             lea ecx, [esp + 4]
// 006e55f7  ff158c05a400         call dword ptr [0xa4058c]
// 006e55fd  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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