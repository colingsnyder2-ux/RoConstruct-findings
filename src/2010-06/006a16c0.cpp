// roc 2010-06 006a16c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a16c0
//
// 006a16c0  f6415401             test byte ptr [ecx + 0x54], 1
// 006a16c4  7421                 je 0x6a16e7
// 006a16c6  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006a16c9  85c9                 test ecx, ecx
// 006a16cb  741a                 je 0x6a16e7
// 006a16cd  8b442404             mov eax, dword ptr [esp + 4]
// 006a16d1  50                   push eax
// 006a16d2  8d542408             lea edx, [esp + 8]
// 006a16d6  52                   push edx
// 006a16d7  ff1590a59e00         call dword ptr [0x9ea590]
// 006a16dd  8d4c2404             lea ecx, [esp + 4]
// 006a16e1  ff15b4a69e00         call dword ptr [0x9ea6b4]
// 006a16e7  c20400               ret 4
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