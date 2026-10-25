// from server: 100% by king_originala
// roc 2008-06 004483e0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004483e0
//
// 004483e0  51                   push ecx
// 004483e1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004483e5  56                   push esi
// 004483e6  8bf1                 mov esi, ecx
// 004483e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004483eb  8b01                 mov eax, dword ptr [ecx]
// 004483ed  8b4008               mov eax, dword ptr [eax + 8]
// 004483f0  57                   push edi
// 004483f1  52                   push edx
// 004483f2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004483fa  ffd0                 call eax
// 004483fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00448400  8d4c2414             lea ecx, [esp + 0x14]
// 00448404  51                   push ecx
// 00448405  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00448408  57                   push edi
// 00448409  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044840d  e84effffff           call 0x448360
// 00448412  8bc7                 mov eax, edi
// 00448414  5f                   pop edi
// 00448415  5e                   pop esi
// 00448416  59                   pop ecx
// 00448417  c20800               ret 8

struct Converter {
    void __thiscall convert(void* output, int* value);
};

struct Descriptor {
    char padding[0x1c];
    void* source;
    Converter* converter;

    void* convert(void* output, int value);
};

void* Descriptor::convert(void* output, int value)
{
    volatile int temporary = 0;
    int* table = *reinterpret_cast<int**>(source);
    value = reinterpret_cast<int (__thiscall*)(void*, int)>(table[2])(source, value);
    converter->convert(output, &value);
    return output;
}
