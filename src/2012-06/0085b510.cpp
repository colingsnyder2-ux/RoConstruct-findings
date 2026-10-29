// roc 2012-06 0085b510  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085b510
//
// 0085b510  f6415801             test byte ptr [ecx + 0x58], 1
// 0085b514  7421                 je 0x85b537
// 0085b516  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0085b519  85c9                 test ecx, ecx
// 0085b51b  741a                 je 0x85b537
// 0085b51d  8b442404             mov eax, dword ptr [esp + 4]
// 0085b521  50                   push eax
// 0085b522  8d542408             lea edx, [esp + 8]
// 0085b526  52                   push edx
// 0085b527  ff150424b200         call dword ptr [0xb22404]
// 0085b52d  8d4c2404             lea ecx, [esp + 4]
// 0085b531  ff150426b200         call dword ptr [0xb22604]
// 0085b537  c20400               ret 4
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