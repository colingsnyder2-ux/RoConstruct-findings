// from server: 100% by king_originala
// roc 2008-06 005f5320  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5320
//
// 005f5320  f6819c00000001       test byte ptr [ecx + 0x9c], 1
// 005f5327  7424                 je 0x5f534d
// 005f5329  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 005f532f  85c9                 test ecx, ecx
// 005f5331  741a                 je 0x5f534d
// 005f5333  8b442404             mov eax, dword ptr [esp + 4]
// 005f5337  50                   push eax
// 005f5338  8d542408             lea edx, [esp + 8]
// 005f533c  52                   push edx
// 005f533d  ff1568258000         call dword ptr [0x802568]
// 005f5343  8d4c2404             lea ecx, [esp + 4]
// 005f5347  ff1564258000         call dword ptr [0x802564]
// 005f534d  c20400               ret 4

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
