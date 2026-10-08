// from server: 88% by colin
// roc 2007-08 0040fd80  unit: CopyVerb  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040fd80
//
// 0040fd80  53                   push ebx
// 0040fd81  56                   push esi
// 0040fd82  8bb104010000         mov esi, dword ptr [ecx + 0x104]
// 0040fd88  8b5e04               mov ebx, dword ptr [esi + 4]
// 0040fd8b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0040fd8e  57                   push edi
// 0040fd8f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040fd93  c70700000000         mov dword ptr [edi], 0
// 0040fd99  7606                 jbe 0x40fda1
// 0040fd9b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0040fda1  8937                 mov dword ptr [edi], esi
// 0040fda3  895f04               mov dword ptr [edi + 4], ebx
// 0040fda6  8bc7                 mov eax, edi
// 0040fda8  5f                   pop edi
// 0040fda9  5e                   pop esi
// 0040fdaa  5b                   pop ebx
// 0040fdab  c20400               ret 4

extern "C" void __cdecl _invalid_parameter_noinfo();

struct VerbContainer {
    char pad[4];
    int* cur;
    int* end;
};

struct Verb {
    char pad[0x104];
    VerbContainer* container;
    void* getIterator(void* out);
};

void* Verb::getIterator(void* out)
{
    VerbContainer* c = container;
    int* cur = c->cur;
    int* end = c->end;
    *(int**)out = 0;
    if (cur > end)
        _invalid_parameter_noinfo();
    *(VerbContainer**)out = c;
    *(int**)((char*)out + 4) = cur;
    return out;
}
