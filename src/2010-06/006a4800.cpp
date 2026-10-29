// roc 2010-06 006a4800  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4800
//
// 006a4800  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 006a4807  7424                 je 0x6a482d
// 006a4809  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006a480f  85c9                 test ecx, ecx
// 006a4811  741a                 je 0x6a482d
// 006a4813  8b442404             mov eax, dword ptr [esp + 4]
// 006a4817  50                   push eax
// 006a4818  8d542408             lea edx, [esp + 8]
// 006a481c  52                   push edx
// 006a481d  ff1590a59e00         call dword ptr [0x9ea590]
// 006a4823  8d4c2404             lea ecx, [esp + 4]
// 006a4827  ff15b4a69e00         call dword ptr [0x9ea6b4]
// 006a482d  c20400               ret 4
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