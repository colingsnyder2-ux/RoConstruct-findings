// roc 2010-06 006a2730  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a2730
//
// 006a2730  f6415801             test byte ptr [ecx + 0x58], 1
// 006a2734  7421                 je 0x6a2757
// 006a2736  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 006a2739  85c9                 test ecx, ecx
// 006a273b  741a                 je 0x6a2757
// 006a273d  8b442404             mov eax, dword ptr [esp + 4]
// 006a2741  50                   push eax
// 006a2742  8d542408             lea edx, [esp + 8]
// 006a2746  52                   push edx
// 006a2747  ff1590a59e00         call dword ptr [0x9ea590]
// 006a274d  8d4c2404             lea ecx, [esp + 4]
// 006a2751  ff15b4a69e00         call dword ptr [0x9ea6b4]
// 006a2757  c20400               ret 4
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