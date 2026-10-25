// from server: 100% by colin
// roc 2008-06 0040eb50  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040eb50
//
// 0040eb50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040eb54  85d2                 test edx, edx
// 0040eb56  7508                 jne 0x40eb60
// 0040eb58  b803400080           mov eax, 0x80004003
// 0040eb5d  c20c00               ret 0xc
// 0040eb60  8b442408             mov eax, dword ptr [esp + 8]
// 0040eb64  c70200000000         mov dword ptr [edx], 0
// 0040eb6a  8b08                 mov ecx, dword ptr [eax]
// 0040eb6c  56                   push esi
// 0040eb6d  81f986b296b1         cmp ecx, 0xb196b286
// 0040eb73  7521                 jne 0x40eb96
// 0040eb75  8b7004               mov esi, dword ptr [eax + 4]
// 0040eb78  3b35f4d38000         cmp esi, dword ptr [0x80d3f4]
// 0040eb7e  7516                 jne 0x40eb96
// 0040eb80  8b7008               mov esi, dword ptr [eax + 8]
// 0040eb83  3b35f8d38000         cmp esi, dword ptr [0x80d3f8]
// 0040eb89  750b                 jne 0x40eb96
// 0040eb8b  8b700c               mov esi, dword ptr [eax + 0xc]
// 0040eb8e  3b35fcd38000         cmp esi, dword ptr [0x80d3fc]
// 0040eb94  7424                 je 0x40ebba
// 0040eb96  85c9                 test ecx, ecx
// 0040eb98  7517                 jne 0x40ebb1
// 0040eb9a  394804               cmp dword ptr [eax + 4], ecx
// 0040eb9d  7512                 jne 0x40ebb1
// 0040eb9f  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040eba6  7509                 jne 0x40ebb1
// 0040eba8  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040ebaf  7409                 je 0x40ebba
// 0040ebb1  b802400080           mov eax, 0x80004002
// 0040ebb6  5e                   pop esi
// 0040ebb7  c20c00               ret 0xc
// 0040ebba  8b442408             mov eax, dword ptr [esp + 8]
// 0040ebbe  8902                 mov dword ptr [edx], eax
// 0040ebc0  8b08                 mov ecx, dword ptr [eax]
// 0040ebc2  8b5104               mov edx, dword ptr [ecx + 4]
// 0040ebc5  50                   push eax
// 0040ebc6  ffd2                 call edx
// 0040ebc8  33c0                 xor eax, eax
// 0040ebca  5e                   pop esi
// 0040ebcb  c20c00               ret 0xc

struct IUnknown {
    virtual long __stdcall QueryInterface(const void *riid, void **ppvObject);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
};

extern "C" const unsigned char g_iid1[16];
extern "C" const unsigned char g_iid2[16];

extern "C" long __stdcall Proxy_QueryInterface(void *self, const void *riid, void **ppvObject)
{
    if (ppvObject == 0)
        return (long)0x80004003UL;

    *ppvObject = 0;

    const unsigned int *guid = (const unsigned int *)riid;
    const unsigned int *g1 = (const unsigned int *)g_iid1;
    const unsigned int *g2 = (const unsigned int *)g_iid2;

    bool match = false;
    if (guid[0] == 0xb196b286 && guid[1] == g1[0] && guid[2] == g1[1] && guid[3] == g1[2])
        match = true;
    else if (guid[0] == 0 && guid[1] == 0 && guid[2] == 0xc0 && guid[3] == 0x46000000)
        match = true;

    if (!match)
        return (long)0x80004002UL;

    *ppvObject = self;
    IUnknown *unk = (IUnknown *)self;
    unk->AddRef();
    return 0;
}
