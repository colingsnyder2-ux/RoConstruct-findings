// roc 2009-12 0040d640  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d640
//
// 0040d640  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040d644  85d2                 test edx, edx
// 0040d646  7508                 jne 0x40d650
// 0040d648  b803400080           mov eax, 0x80004003
// 0040d64d  c20c00               ret 0xc
// 0040d650  8b442408             mov eax, dword ptr [esp + 8]
// 0040d654  c70200000000         mov dword ptr [edx], 0
// 0040d65a  8b08                 mov ecx, dword ptr [eax]
// 0040d65c  56                   push esi
// 0040d65d  81f986b296b1         cmp ecx, 0xb196b286
// 0040d663  7521                 jne 0x40d686
// 0040d665  8b7004               mov esi, dword ptr [eax + 4]
// 0040d668  3b35f00c9a00         cmp esi, dword ptr [0x9a0cf0]
// 0040d66e  7516                 jne 0x40d686
// 0040d670  8b7008               mov esi, dword ptr [eax + 8]
// 0040d673  3b35f40c9a00         cmp esi, dword ptr [0x9a0cf4]
// 0040d679  750b                 jne 0x40d686
// 0040d67b  8b700c               mov esi, dword ptr [eax + 0xc]
// 0040d67e  3b35f80c9a00         cmp esi, dword ptr [0x9a0cf8]
// 0040d684  7424                 je 0x40d6aa
// 0040d686  85c9                 test ecx, ecx
// 0040d688  7517                 jne 0x40d6a1
// 0040d68a  394804               cmp dword ptr [eax + 4], ecx
// 0040d68d  7512                 jne 0x40d6a1
// 0040d68f  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040d696  7509                 jne 0x40d6a1
// 0040d698  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040d69f  7409                 je 0x40d6aa
// 0040d6a1  b802400080           mov eax, 0x80004002
// 0040d6a6  5e                   pop esi
// 0040d6a7  c20c00               ret 0xc
// 0040d6aa  8b442408             mov eax, dword ptr [esp + 8]
// 0040d6ae  8902                 mov dword ptr [edx], eax
// 0040d6b0  8b08                 mov ecx, dword ptr [eax]
// 0040d6b2  8b5104               mov edx, dword ptr [ecx + 4]
// 0040d6b5  50                   push eax
// 0040d6b6  ffd2                 call edx
// 0040d6b8  33c0                 xor eax, eax
// 0040d6ba  5e                   pop esi
// 0040d6bb  c20c00               ret 0xc
// copied from an identical function in another client (function _Proxy_QueryInterface@12)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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