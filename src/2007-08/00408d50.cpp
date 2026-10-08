// from server: 96% by colin
// roc 2007-08 00408d50  unit: VCApp::?$CProxy_IAppEvents  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408d50
//
// 00408d50  8b442408             mov eax, dword ptr [esp + 8]
// 00408d54  85c0                 test eax, eax
// 00408d56  7508                 jne 0x408d60
// 00408d58  b803400080           mov eax, 0x80004003
// 00408d5d  c20800               ret 8
// 00408d60  8b0da8527800         mov ecx, dword ptr [0x7852a8]
// 00408d66  8908                 mov dword ptr [eax], ecx
// 00408d68  8b15ac527800         mov edx, dword ptr [0x7852ac]
// 00408d6e  895004               mov dword ptr [eax + 4], edx
// 00408d71  8b0db0527800         mov ecx, dword ptr [0x7852b0]
// 00408d77  894808               mov dword ptr [eax + 8], ecx
// 00408d7a  8b15b4527800         mov edx, dword ptr [0x7852b4]
// 00408d80  89500c               mov dword ptr [eax + 0xc], edx
// 00408d83  33c0                 xor eax, eax
// 00408d85  c20800               ret 8

struct VCApp_CProxy_IAppEvents
{
    long __stdcall Invoke(void*, long);
};

long __stdcall VCApp_CProxy_IAppEvents::Invoke(void* pv, long)
{
    if (pv == 0)
        return (long)0x80004003;
    *(long*)((char*)pv + 0) = *(long*)0x7852a8;
    *(long*)((char*)pv + 4) = *(long*)0x7852ac;
    *(long*)((char*)pv + 8) = *(long*)0x7852b0;
    *(long*)((char*)pv + 12) = *(long*)0x7852b4;
    return 0;
}
