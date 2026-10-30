// roc 2009-12 00725910  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725910
//
// 00725910  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 00725917  7424                 je 0x72593d
// 00725919  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 0072591f  85c9                 test ecx, ecx
// 00725921  741a                 je 0x72593d
// 00725923  8b442404             mov eax, dword ptr [esp + 4]
// 00725927  50                   push eax
// 00725928  8d542408             lea edx, [esp + 8]
// 0072592c  52                   push edx
// 0072592d  ff15f4b39800         call dword ptr [0x98b3f4]
// 00725933  8d4c2404             lea ecx, [esp + 4]
// 00725937  ff15fcb49800         call dword ptr [0x98b4fc]
// 0072593d  c20400               ret 4
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