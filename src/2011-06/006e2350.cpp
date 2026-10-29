// roc 2011-06 006e2350  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2350
//
// 006e2350  f6415401             test byte ptr [ecx + 0x54], 1
// 006e2354  7421                 je 0x6e2377
// 006e2356  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006e2359  85c9                 test ecx, ecx
// 006e235b  741a                 je 0x6e2377
// 006e235d  8b442404             mov eax, dword ptr [esp + 4]
// 006e2361  50                   push eax
// 006e2362  8d542408             lea edx, [esp + 8]
// 006e2366  52                   push edx
// 006e2367  ff151407a400         call dword ptr [0xa40714]
// 006e236d  8d4c2404             lea ecx, [esp + 4]
// 006e2371  ff158c05a400         call dword ptr [0xa4058c]
// 006e2377  c20400               ret 4
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