// roc 2011-06 006e4c10  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4c10
//
// 006e4c10  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 006e4c17  7424                 je 0x6e4c3d
// 006e4c19  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 006e4c1f  85c9                 test ecx, ecx
// 006e4c21  741a                 je 0x6e4c3d
// 006e4c23  8b442404             mov eax, dword ptr [esp + 4]
// 006e4c27  50                   push eax
// 006e4c28  8d542408             lea edx, [esp + 8]
// 006e4c2c  52                   push edx
// 006e4c2d  ff151407a400         call dword ptr [0xa40714]
// 006e4c33  8d4c2404             lea ecx, [esp + 4]
// 006e4c37  ff158c05a400         call dword ptr [0xa4058c]
// 006e4c3d  c20400               ret 4
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