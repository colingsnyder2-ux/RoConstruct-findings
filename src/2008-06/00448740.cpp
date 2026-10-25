// from server: 100% by king_originala
// roc 2008-06 00448740  unit: VCRenderSettings::?$EnumPropDescriptor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448740
//
// 00448740  8b542404             mov edx, dword ptr [esp + 4]
// 00448744  56                   push esi
// 00448745  57                   push edi
// 00448746  8bf9                 mov edi, ecx
// 00448748  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0044874b  8b01                 mov eax, dword ptr [ecx]
// 0044874d  8b4008               mov eax, dword ptr [eax + 8]
// 00448750  52                   push edx
// 00448751  ffd0                 call eax
// 00448753  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00448756  8bf0                 mov esi, eax
// 00448758  85f6                 test esi, esi
// 0044875a  7d07                 jge 0x448763
// 0044875c  5f                   pop edi
// 0044875d  33c0                 xor eax, eax
// 0044875f  5e                   pop esi
// 00448760  c20400               ret 4
// 00448763  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00448769  2b8fac000000         sub ecx, dword ptr [edi + 0xac]
// 0044876f  c1f902               sar ecx, 2
// 00448772  3bf1                 cmp esi, ecx
// 00448774  73e6                 jae 0x44875c
// 00448776  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 0044877c  2b97ac000000         sub edx, dword ptr [edi + 0xac]
// 00448782  c1fa02               sar edx, 2
// 00448785  3bf2                 cmp esi, edx
// 00448787  7206                 jb 0x44878f
// 00448789  ff1590288000         call dword ptr [0x802890]
// 0044878f  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 00448795  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00448798  5f                   pop edi
// 00448799  5e                   pop esi
// 0044879a  c20400               ret 4

extern "C" {
extern void (__cdecl *invalid_parameter_noinfo)();
}

struct IndexProvider {
    virtual void slot0();
    virtual void slot1();
    virtual int lookup(int value);
};

struct ValueTable {
    char padding[0xac];
    void** begin;
    void** volatile end;
};

struct Descriptor {
    char padding[0x1c];
    IndexProvider* provider;
    ValueTable* table;

    void* get(int value);
};

void* Descriptor::get(int value)
{
    int index = provider->lookup(value);
    ValueTable* values = table;

    if (index < 0)
        return 0;

    if ((unsigned int)index >= (unsigned int)(values->end - values->begin))
        return 0;

    if ((unsigned int)index >= (unsigned int)(values->end - values->begin))
        invalid_parameter_noinfo();

    return values->begin[index];
}
