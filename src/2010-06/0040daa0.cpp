// roc 2010-06 0040daa0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040daa0
//
// 0040daa0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040daa4  85d2                 test edx, edx
// 0040daa6  7508                 jne 0x40dab0
// 0040daa8  b803400080           mov eax, 0x80004003
// 0040daad  c20c00               ret 0xc
// 0040dab0  8b442408             mov eax, dword ptr [esp + 8]
// 0040dab4  c70200000000         mov dword ptr [edx], 0
// 0040daba  8b08                 mov ecx, dword ptr [eax]
// 0040dabc  56                   push esi
// 0040dabd  81f986b296b1         cmp ecx, 0xb196b286
// 0040dac3  7521                 jne 0x40dae6
// 0040dac5  8b7004               mov esi, dword ptr [eax + 4]
// 0040dac8  3b356019a000         cmp esi, dword ptr [0xa01960]
// 0040dace  7516                 jne 0x40dae6
// 0040dad0  8b7008               mov esi, dword ptr [eax + 8]
// 0040dad3  3b356419a000         cmp esi, dword ptr [0xa01964]
// 0040dad9  750b                 jne 0x40dae6
// 0040dadb  8b700c               mov esi, dword ptr [eax + 0xc]
// 0040dade  3b356819a000         cmp esi, dword ptr [0xa01968]
// 0040dae4  7424                 je 0x40db0a
// 0040dae6  85c9                 test ecx, ecx
// 0040dae8  7517                 jne 0x40db01
// 0040daea  394804               cmp dword ptr [eax + 4], ecx
// 0040daed  7512                 jne 0x40db01
// 0040daef  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040daf6  7509                 jne 0x40db01
// 0040daf8  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040daff  7409                 je 0x40db0a
// 0040db01  b802400080           mov eax, 0x80004002
// 0040db06  5e                   pop esi
// 0040db07  c20c00               ret 0xc
// 0040db0a  8b442408             mov eax, dword ptr [esp + 8]
// 0040db0e  8902                 mov dword ptr [edx], eax
// 0040db10  8b08                 mov ecx, dword ptr [eax]
// 0040db12  8b5104               mov edx, dword ptr [ecx + 4]
// 0040db15  50                   push eax
// 0040db16  ffd2                 call edx
// 0040db18  33c0                 xor eax, eax
// 0040db1a  5e                   pop esi
// 0040db1b  c20c00               ret 0xc
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