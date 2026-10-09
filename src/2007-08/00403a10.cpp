// from server: 95% by colin
// roc 2007-08 00403a10  unit: ATL::CComClassFactory  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403a10
//
// 00403a10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00403a14  85c9                 test ecx, ecx
// 00403a16  b803400080           mov eax, 0x80004003
// 00403a1b  7443                 je 0x403a60
// 00403a1d  8b542408             mov edx, dword ptr [esp + 8]
// 00403a21  85d2                 test edx, edx
// 00403a23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00403a27  c70100000000         mov dword ptr [ecx], 0
// 00403a2d  7425                 je 0x403a54
// 00403a2f  833800               cmp dword ptr [eax], 0
// 00403a32  7518                 jne 0x403a4c
// 00403a34  83780400             cmp dword ptr [eax + 4], 0
// 00403a38  7512                 jne 0x403a4c
// 00403a3a  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 00403a41  7509                 jne 0x403a4c
// 00403a43  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 00403a4a  7408                 je 0x403a54
// 00403a4c  b810010480           mov eax, 0x80040110
// 00403a51  c21000               ret 0x10
// 00403a54  51                   push ecx
// 00403a55  50                   push eax
// 00403a56  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00403a5a  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00403a5d  52                   push edx
// 00403a5e  ffd1                 call ecx
// 00403a60  c21000               ret 0x10

struct CComClassFactory {
    long __stdcall CreateInstance(void* pUnkOuter, void* riid, void** ppv);
};

long __stdcall CComClassFactory::CreateInstance(void* pUnkOuter, void* riid, void** ppv)
{
    if (ppv == 0)
        return 0x80004003;
    *ppv = 0;
    if (pUnkOuter != 0)
    {
        if (*(int*)riid != 0 || *((int*)riid + 1) != 0 ||
            *((int*)riid + 2) != 0xc0 || *((int*)riid + 3) != 0x46000000)
            return 0x80040110;
    }
    return (*(long (__stdcall**)(void*, void*, void**))((char*)this + 0x24))(pUnkOuter, riid, ppv);
}
