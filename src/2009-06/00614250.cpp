// roc 2009-06 00614250  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614250
//
// 00614250  f6415401             test byte ptr [ecx + 0x54], 1
// 00614254  7421                 je 0x614277
// 00614256  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 00614259  85c9                 test ecx, ecx
// 0061425b  741a                 je 0x614277
// 0061425d  8b442404             mov eax, dword ptr [esp + 4]
// 00614261  50                   push eax
// 00614262  8d542408             lea edx, [esp + 8]
// 00614266  52                   push edx
// 00614267  ff152ce68900         call dword ptr [0x89e62c]
// 0061426d  8d4c2404             lea ecx, [esp + 4]
// 00614271  ff1598e58900         call dword ptr [0x89e598]
// 00614277  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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