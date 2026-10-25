// from server: 100% by king_originala
// roc 2008-06 0040ed10  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ed10
//
// 0040ed10  8b442408             mov eax, dword ptr [esp + 8]
// 0040ed14  56                   push esi
// 0040ed15  85c0                 test eax, eax
// 0040ed17  7427                 je 0x40ed40
// 0040ed19  8b30                 mov esi, dword ptr [eax]
// 0040ed1b  85f6                 test esi, esi
// 0040ed1d  7421                 je 0x40ed40
// 0040ed1f  8b542408             mov edx, dword ptr [esp + 8]
// 0040ed23  8b0a                 mov ecx, dword ptr [edx]
// 0040ed25  8b5204               mov edx, dword ptr [edx + 4]
// 0040ed28  8d1491               lea edx, [ecx + edx*4]
// 0040ed2b  b801000000           mov eax, 1
// 0040ed30  3bca                 cmp ecx, edx
// 0040ed32  730c                 jae 0x40ed40
// 0040ed34  3931                 cmp dword ptr [ecx], esi
// 0040ed36  740a                 je 0x40ed42
// 0040ed38  83c104               add ecx, 4
// 0040ed3b  40                   inc eax
// 0040ed3c  3bca                 cmp ecx, edx
// 0040ed3e  72f4                 jb 0x40ed34
// 0040ed40  33c0                 xor eax, eax
// 0040ed42  5e                   pop esi
// 0040ed43  c20800               ret 8

struct S {
    unsigned long* data;
    unsigned long count;
};

unsigned long __stdcall f(S* container, const unsigned long* value)
{
    if (value && *value) {
        unsigned long target = *value;
        unsigned long index = 1;
        unsigned long* current = container->data;
        unsigned long* end = current + container->count;
        while (current < end) {
            if (*current == target)
                return index;
            ++current;
            ++index;
        }
    }
    return 0;
}
