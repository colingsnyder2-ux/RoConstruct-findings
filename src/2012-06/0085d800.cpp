// roc 2012-06 0085d800  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d800
//
// 0085d800  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 0085d807  7424                 je 0x85d82d
// 0085d809  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0085d80f  85c9                 test ecx, ecx
// 0085d811  741a                 je 0x85d82d
// 0085d813  8b442404             mov eax, dword ptr [esp + 4]
// 0085d817  50                   push eax
// 0085d818  8d542408             lea edx, [esp + 8]
// 0085d81c  52                   push edx
// 0085d81d  ff150424b200         call dword ptr [0xb22404]
// 0085d823  8d4c2404             lea ecx, [esp + 4]
// 0085d827  ff150426b200         call dword ptr [0xb22604]
// 0085d82d  c20400               ret 4
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