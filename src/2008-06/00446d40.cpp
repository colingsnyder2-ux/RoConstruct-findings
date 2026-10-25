// from server: 100% by king_originala
// roc 2008-06 00446d40  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446d40
//
// 00446d40  8b442404             mov eax, dword ptr [esp + 4]
// 00446d44  56                   push esi
// 00446d45  57                   push edi
// 00446d46  8b38                 mov edi, dword ptr [eax]
// 00446d48  8bf1                 mov esi, ecx
// 00446d4a  85ff                 test edi, edi
// 00446d4c  7d07                 jge 0x446d55
// 00446d4e  5f                   pop edi
// 00446d4f  33c0                 xor eax, eax
// 00446d51  5e                   pop esi
// 00446d52  c20400               ret 4
// 00446d55  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00446d5b  2b8eac000000         sub ecx, dword ptr [esi + 0xac]
// 00446d61  c1f902               sar ecx, 2
// 00446d64  3bf9                 cmp edi, ecx
// 00446d66  73e6                 jae 0x446d4e
// 00446d68  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00446d6e  2b96ac000000         sub edx, dword ptr [esi + 0xac]
// 00446d74  c1fa02               sar edx, 2
// 00446d77  3bfa                 cmp edi, edx
// 00446d79  7206                 jb 0x446d81
// 00446d7b  ff1590288000         call dword ptr [0x802890]
// 00446d81  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446d87  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00446d8a  5f                   pop edi
// 00446d8b  5e                   pop esi
// 00446d8c  c20400               ret 4

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct S {
    unsigned char padding[172];
    void **first;
    void **volatile last;

    void *get(const int &index);
};

void *S::get(const int &index)
{
    int i = index;
    if (i < 0)
        return 0;

    if (static_cast<unsigned int>(i) >=
        static_cast<unsigned int>(last - first))
        return 0;

    if (static_cast<unsigned int>(i) >=
        static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    return first[i];
}
