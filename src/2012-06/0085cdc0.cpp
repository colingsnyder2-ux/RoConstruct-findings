// roc 2012-06 0085cdc0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085cdc0
//
// 0085cdc0  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 0085cdc7  7424                 je 0x85cded
// 0085cdc9  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 0085cdcf  85c9                 test ecx, ecx
// 0085cdd1  741a                 je 0x85cded
// 0085cdd3  8b442404             mov eax, dword ptr [esp + 4]
// 0085cdd7  50                   push eax
// 0085cdd8  8d542408             lea edx, [esp + 8]
// 0085cddc  52                   push edx
// 0085cddd  ff150424b200         call dword ptr [0xb22404]
// 0085cde3  8d4c2404             lea ecx, [esp + 4]
// 0085cde7  ff150426b200         call dword ptr [0xb22604]
// 0085cded  c20400               ret 4
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