// roc 2009-06 0040daa0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040daa0
//
// 0040daa0  8b442408             mov eax, dword ptr [esp + 8]
// 0040daa4  56                   push esi
// 0040daa5  85c0                 test eax, eax
// 0040daa7  7427                 je 0x40dad0
// 0040daa9  8b30                 mov esi, dword ptr [eax]
// 0040daab  85f6                 test esi, esi
// 0040daad  7421                 je 0x40dad0
// 0040daaf  8b542408             mov edx, dword ptr [esp + 8]
// 0040dab3  8b0a                 mov ecx, dword ptr [edx]
// 0040dab5  8b5204               mov edx, dword ptr [edx + 4]
// 0040dab8  8d1491               lea edx, [ecx + edx*4]
// 0040dabb  b801000000           mov eax, 1
// 0040dac0  3bca                 cmp ecx, edx
// 0040dac2  730c                 jae 0x40dad0
// 0040dac4  3931                 cmp dword ptr [ecx], esi
// 0040dac6  740a                 je 0x40dad2
// 0040dac8  83c104               add ecx, 4
// 0040dacb  40                   inc eax
// 0040dacc  3bca                 cmp ecx, edx
// 0040dace  72f4                 jb 0x40dac4
// 0040dad0  33c0                 xor eax, eax
// 0040dad2  5e                   pop esi
// 0040dad3  c20800               ret 8
// copied from an identical function in another client (function ?f@@YGKPAUS@@PBK@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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