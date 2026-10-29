// roc 2009-12 007233d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007233d0
//
// 007233d0  f6415401             test byte ptr [ecx + 0x54], 1
// 007233d4  7421                 je 0x7233f7
// 007233d6  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 007233d9  85c9                 test ecx, ecx
// 007233db  741a                 je 0x7233f7
// 007233dd  8b442404             mov eax, dword ptr [esp + 4]
// 007233e1  50                   push eax
// 007233e2  8d542408             lea edx, [esp + 8]
// 007233e6  52                   push edx
// 007233e7  ff15f4b39800         call dword ptr [0x98b3f4]
// 007233ed  8d4c2404             lea ecx, [esp + 4]
// 007233f1  ff15fcb49800         call dword ptr [0x98b4fc]
// 007233f7  c20400               ret 4
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