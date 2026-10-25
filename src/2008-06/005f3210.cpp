// from server: 100% by king_originala
// roc 2008-06 005f3210  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3210
//
// 005f3210  f6415401             test byte ptr [ecx + 0x54], 1
// 005f3214  7421                 je 0x5f3237
// 005f3216  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 005f3219  85c9                 test ecx, ecx
// 005f321b  741a                 je 0x5f3237
// 005f321d  8b442404             mov eax, dword ptr [esp + 4]
// 005f3221  50                   push eax
// 005f3222  8d542408             lea edx, [esp + 8]
// 005f3226  52                   push edx
// 005f3227  ff1568258000         call dword ptr [0x802568]
// 005f322d  8d4c2404             lea ecx, [esp + 4]
// 005f3231  ff1564258000         call dword ptr [0x802564]
// 005f3237  c20400               ret 4

typedef void (__thiscall *ImbueFunction)(void *, void *, const void *);
typedef void (__thiscall *DestroyFunction)(void *);

extern ImbueFunction imbue;
extern DestroyFunction destroy;

struct S {
    unsigned char padding0[0x44];
    void *stream;
    unsigned char padding1[0x0C];
    unsigned char flags;

    void f(const void *locale);
};

void S::f(const void *locale)
{
    if ((flags & 1) && stream) {
        imbue(stream, &locale, locale);
        destroy(&locale);
    }
}
