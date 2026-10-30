// roc 2009-12 0072a810  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072a810
//
// 0072a810  f6415801             test byte ptr [ecx + 0x58], 1
// 0072a814  7421                 je 0x72a837
// 0072a816  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0072a819  85c9                 test ecx, ecx
// 0072a81b  741a                 je 0x72a837
// 0072a81d  8b442404             mov eax, dword ptr [esp + 4]
// 0072a821  50                   push eax
// 0072a822  8d542408             lea edx, [esp + 8]
// 0072a826  52                   push edx
// 0072a827  ff15f4b39800         call dword ptr [0x98b3f4]
// 0072a82d  8d4c2404             lea ecx, [esp + 4]
// 0072a831  ff15fcb49800         call dword ptr [0x98b4fc]
// 0072a837  c20400               ret 4
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