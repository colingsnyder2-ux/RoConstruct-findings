// from server: 100% by tester
// roc 2008-06 0040ea10  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ea10
//
// 0040ea10  8b442408             mov eax, dword ptr [esp + 8]
// 0040ea14  85c0                 test eax, eax
// 0040ea16  7508                 jne 0x40ea20
// 0040ea18  b803400080           mov eax, 0x80004003
// 0040ea1d  c20800               ret 8
// 0040ea20  8b0da8d38000         mov ecx, dword ptr [0x80d3a8]
// 0040ea26  8908                 mov dword ptr [eax], ecx
// 0040ea28  8b15acd38000         mov edx, dword ptr [0x80d3ac]
// 0040ea2e  895004               mov dword ptr [eax + 4], edx
// 0040ea31  8b0db0d38000         mov ecx, dword ptr [0x80d3b0]
// 0040ea37  894808               mov dword ptr [eax + 8], ecx
// 0040ea3a  8b15b4d38000         mov edx, dword ptr [0x80d3b4]
// 0040ea40  89500c               mov dword ptr [eax + 0xc], edx
// 0040ea43  33c0                 xor eax, eax
// 0040ea45  c20800               ret 8

struct S_00401b70 {
    long __stdcall f(void* p);
};

long __stdcall S_00401b70::f(void* p)
{
    if (p == 0)
        return (long)0x80004003;
    *(unsigned long*)((char*)p + 0) = *(unsigned long*)0x784c04;
    *(unsigned long*)((char*)p + 4) = *(unsigned long*)0x784c08;
    *(unsigned long*)((char*)p + 8) = *(unsigned long*)0x784c0c;
    *(unsigned long*)((char*)p + 12) = *(unsigned long*)0x784c10;
    return 0;
}
