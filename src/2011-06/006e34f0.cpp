// roc 2011-06 006e34f0  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e34f0
//
// 006e34f0  f6415801             test byte ptr [ecx + 0x58], 1
// 006e34f4  7421                 je 0x6e3517
// 006e34f6  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 006e34f9  85c9                 test ecx, ecx
// 006e34fb  741a                 je 0x6e3517
// 006e34fd  8b442404             mov eax, dword ptr [esp + 4]
// 006e3501  50                   push eax
// 006e3502  8d542408             lea edx, [esp + 8]
// 006e3506  52                   push edx
// 006e3507  ff151407a400         call dword ptr [0xa40714]
// 006e350d  8d4c2404             lea ecx, [esp + 4]
// 006e3511  ff158c05a400         call dword ptr [0xa4058c]
// 006e3517  c20400               ret 4
// copied from an identical function in another client (function ?imbue@S@@QAEXPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *pubimbue)(void*, void*, const void*);
extern void (__thiscall *locale_destructor)(void*);

struct S {
    char padding0[0x48];
    void* buffer;
    char padding1[0x0C];
    unsigned char flags;

    void imbue(const void* locale);
};

void S::imbue(const void* locale)
{
    if ((flags & 1) && buffer) {
        pubimbue(buffer, &locale, locale);
        locale_destructor(&locale);
    }
}