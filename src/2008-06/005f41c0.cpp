// from server: 100% by king_originala
// roc 2008-06 005f41c0  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f41c0
//
// 005f41c0  f6415801             test byte ptr [ecx + 0x58], 1
// 005f41c4  7421                 je 0x5f41e7
// 005f41c6  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 005f41c9  85c9                 test ecx, ecx
// 005f41cb  741a                 je 0x5f41e7
// 005f41cd  8b442404             mov eax, dword ptr [esp + 4]
// 005f41d1  50                   push eax
// 005f41d2  8d542408             lea edx, [esp + 8]
// 005f41d6  52                   push edx
// 005f41d7  ff1568258000         call dword ptr [0x802568]
// 005f41dd  8d4c2404             lea ecx, [esp + 4]
// 005f41e1  ff1564258000         call dword ptr [0x802564]
// 005f41e7  c20400               ret 4

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
