// roc 2010-06 006a3de0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3de0
//
// 006a3de0  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 006a3de7  7424                 je 0x6a3e0d
// 006a3de9  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 006a3def  85c9                 test ecx, ecx
// 006a3df1  741a                 je 0x6a3e0d
// 006a3df3  8b442404             mov eax, dword ptr [esp + 4]
// 006a3df7  50                   push eax
// 006a3df8  8d542408             lea edx, [esp + 8]
// 006a3dfc  52                   push edx
// 006a3dfd  ff1590a59e00         call dword ptr [0x9ea590]
// 006a3e03  8d4c2404             lea ecx, [esp + 4]
// 006a3e07  ff15b4a69e00         call dword ptr [0x9ea6b4]
// 006a3e0d  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXABULocale@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Locale
{
    unsigned int value;
};

struct Stream;

extern void (__thiscall *pubimbue)(Stream*, Locale*, const Locale&);
extern void (__thiscall *destroy_locale)(Locale*);

struct S
{
    char padding[0x8c];
    Stream* stream;
    char reserved[12];
    unsigned char flags;

    void f(const Locale& locale);
};

void S::f(const Locale& locale)
{
    if (flags & 1)
    {
        Stream* p = stream;
        if (p)
        {
            Locale result;
            pubimbue(p, &result, locale);
            destroy_locale(&result);
        }
    }
}