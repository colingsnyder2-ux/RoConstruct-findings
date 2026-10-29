// roc 2009-06 0040d8e0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d8e0
//
// 0040d8e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040d8e4  85d2                 test edx, edx
// 0040d8e6  7508                 jne 0x40d8f0
// 0040d8e8  b803400080           mov eax, 0x80004003
// 0040d8ed  c20c00               ret 0xc
// 0040d8f0  8b442408             mov eax, dword ptr [esp + 8]
// 0040d8f4  c70200000000         mov dword ptr [edx], 0
// 0040d8fa  8b08                 mov ecx, dword ptr [eax]
// 0040d8fc  56                   push esi
// 0040d8fd  81f986b296b1         cmp ecx, 0xb196b286
// 0040d903  7521                 jne 0x40d926
// 0040d905  8b7004               mov esi, dword ptr [eax + 4]
// 0040d908  3b3520e18a00         cmp esi, dword ptr [0x8ae120]
// 0040d90e  7516                 jne 0x40d926
// 0040d910  8b7008               mov esi, dword ptr [eax + 8]
// 0040d913  3b3524e18a00         cmp esi, dword ptr [0x8ae124]
// 0040d919  750b                 jne 0x40d926
// 0040d91b  8b700c               mov esi, dword ptr [eax + 0xc]
// 0040d91e  3b3528e18a00         cmp esi, dword ptr [0x8ae128]
// 0040d924  7424                 je 0x40d94a
// 0040d926  85c9                 test ecx, ecx
// 0040d928  7517                 jne 0x40d941
// 0040d92a  394804               cmp dword ptr [eax + 4], ecx
// 0040d92d  7512                 jne 0x40d941
// 0040d92f  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040d936  7509                 jne 0x40d941
// 0040d938  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040d93f  7409                 je 0x40d94a
// 0040d941  b802400080           mov eax, 0x80004002
// 0040d946  5e                   pop esi
// 0040d947  c20c00               ret 0xc
// 0040d94a  8b442408             mov eax, dword ptr [esp + 8]
// 0040d94e  8902                 mov dword ptr [edx], eax
// 0040d950  8b08                 mov ecx, dword ptr [eax]
// 0040d952  8b5104               mov edx, dword ptr [ecx + 4]
// 0040d955  50                   push eax
// 0040d956  ffd2                 call edx
// 0040d958  33c0                 xor eax, eax
// 0040d95a  5e                   pop esi
// 0040d95b  c20c00               ret 0xc
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