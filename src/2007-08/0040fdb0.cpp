// from server: 87% by colin
// roc 2007-08 0040fdb0  unit: CopyVerb  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040fdb0
//
// 0040fdb0  53                   push ebx
// 0040fdb1  56                   push esi
// 0040fdb2  8bb104010000         mov esi, dword ptr [ecx + 0x104]
// 0040fdb8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0040fdbb  395e04               cmp dword ptr [esi + 4], ebx
// 0040fdbe  57                   push edi
// 0040fdbf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040fdc3  c70700000000         mov dword ptr [edi], 0
// 0040fdc9  7606                 jbe 0x40fdd1
// 0040fdcb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0040fdd1  8937                 mov dword ptr [edi], esi
// 0040fdd3  895f04               mov dword ptr [edi + 4], ebx
// 0040fdd6  8bc7                 mov eax, edi
// 0040fdd8  5f                   pop edi
// 0040fdd9  5e                   pop esi
// 0040fdda  5b                   pop ebx
// 0040fddb  c20400               ret 4

struct VerbContainer {
    char pad[4];
    void* field4;
    void* field8;
};

struct CopyVerb {
    char pad[0x104];
    VerbContainer* container;
    void* getSelection(void* out);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* CopyVerb::getSelection(void* out)
{
    VerbContainer* c = this->container;
    void* end = c->field8;
    *(void**)out = 0;
    if (c->field4 > end) {
        _invalid_parameter_noinfo();
    }
    *(void**)out = c;
    *(void**)((char*)out + 4) = end;
    return out;
}
