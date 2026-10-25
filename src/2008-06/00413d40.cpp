// from server: 100% by king_originala
// roc 2008-06 00413d40  unit: CopyVerb  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413d40
//
// 00413d40  53                   push ebx
// 00413d41  56                   push esi
// 00413d42  8bb154010000         mov esi, dword ptr [ecx + 0x154]
// 00413d48  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00413d4b  57                   push edi
// 00413d4c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00413d50  c70700000000         mov dword ptr [edi], 0
// 00413d56  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00413d59  7606                 jbe 0x413d61
// 00413d5b  ff1590288000         call dword ptr [0x802890]
// 00413d61  8b06                 mov eax, dword ptr [esi]
// 00413d63  8907                 mov dword ptr [edi], eax
// 00413d65  895f04               mov dword ptr [edi + 4], ebx
// 00413d68  8bc7                 mov eax, edi
// 00413d6a  5f                   pop edi
// 00413d6b  5e                   pop esi
// 00413d6c  5b                   pop ebx
// 00413d6d  c20400               ret 4

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Range {
    void* data;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int last;
};

struct Result {
    void* data;
    unsigned int position;
};

struct CopyVerb {
    char reserved[0x154];
    Range* range;
    Result* f(Result* result);
};

Result* CopyVerb::f(Result* result) {
    Range* p = range;
    unsigned int last = p->last;
    result->data = 0;
    if (p->first > last)
        _invalid_parameter_noinfo();
    result->data = p->data;
    result->position = last;
    return result;
}
