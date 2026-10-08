// from server: 100% by colin
// roc 2007-08 0040b220  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b220
//
// 0040b220  8b442408             mov eax, dword ptr [esp + 8]
// 0040b224  85c0                 test eax, eax
// 0040b226  7508                 jne 0x40b230
// 0040b228  b803400080           mov eax, 0x80004003
// 0040b22d  c20800               ret 8
// 0040b230  8b0d7c597800         mov ecx, dword ptr [0x78597c]
// 0040b236  8908                 mov dword ptr [eax], ecx
// 0040b238  8b1580597800         mov edx, dword ptr [0x785980]
// 0040b23e  895004               mov dword ptr [eax + 4], edx
// 0040b241  8b0d84597800         mov ecx, dword ptr [0x785984]
// 0040b247  894808               mov dword ptr [eax + 8], ecx
// 0040b24a  8b1588597800         mov edx, dword ptr [0x785988]
// 0040b250  89500c               mov dword ptr [eax + 0xc], edx
// 0040b253  33c0                 xor eax, eax
// 0040b255  c20800               ret 8

struct VCBrowserViewExternal_CProxy_IBrowserViewExternalEvents
{
    long __stdcall GetTypeInfoCount(unsigned int* pctinfo);
};

long __stdcall VCBrowserViewExternal_CProxy_IBrowserViewExternalEvents::GetTypeInfoCount(unsigned int* pctinfo)
{
    if (pctinfo == 0)
        return 0x80004003;
    *pctinfo = *(unsigned int*)0x78597c;
    *(unsigned int*)((char*)pctinfo + 4) = *(unsigned int*)0x785980;
    *(unsigned int*)((char*)pctinfo + 8) = *(unsigned int*)0x785984;
    *(unsigned int*)((char*)pctinfo + 12) = *(unsigned int*)0x785988;
    return 0;
}
