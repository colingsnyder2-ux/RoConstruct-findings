// roc 2012-06 0085a8b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a8b0
//
// 0085a8b0  f6415401             test byte ptr [ecx + 0x54], 1
// 0085a8b4  7421                 je 0x85a8d7
// 0085a8b6  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0085a8b9  85c9                 test ecx, ecx
// 0085a8bb  741a                 je 0x85a8d7
// 0085a8bd  8b442404             mov eax, dword ptr [esp + 4]
// 0085a8c1  50                   push eax
// 0085a8c2  8d542408             lea edx, [esp + 8]
// 0085a8c6  52                   push edx
// 0085a8c7  ff150424b200         call dword ptr [0xb22404]
// 0085a8cd  8d4c2404             lea ecx, [esp + 4]
// 0085a8d1  ff150426b200         call dword ptr [0xb22604]
// 0085a8d7  c20400               ret 4
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