// from server: 37% by colin
// roc 2007-08 00409bf0  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409bf0
//
// 00409bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00409bf4  85c0                 test eax, eax
// 00409bf6  7405                 je 0x409bfd
// 00409bf8  8d50e4               lea edx, [eax - 0x1c]
// 00409bfb  eb02                 jmp 0x409bff
// 00409bfd  33d2                 xor edx, edx
// 00409bff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00409c03  85c9                 test ecx, ecx
// 00409c05  b803400080           mov eax, 0x80004003
// 00409c0a  7420                 je 0x409c2c
// 00409c0c  8b4220               mov eax, dword ptr [edx + 0x20]
// 00409c0f  85c0                 test eax, eax
// 00409c11  740e                 je 0x409c21
// 00409c13  8b10                 mov edx, dword ptr [eax]
// 00409c15  894c240c             mov dword ptr [esp + 0xc], ecx
// 00409c19  89442404             mov dword ptr [esp + 4], eax
// 00409c1d  8b12                 mov edx, dword ptr [edx]
// 00409c1f  ffe2                 jmp edx
// 00409c21  c70100000000         mov dword ptr [ecx], 0
// 00409c27  b805400080           mov eax, 0x80004005
// 00409c2c  c20c00               ret 0xc

struct VCApp_CComObject
{
    int QueryInterface(void* pUnk, void** ppv, int extra);
};

int VCApp_CComObject::QueryInterface(void* pUnk, void** ppv, int extra)
{
    VCApp_CComObject* pThis = 0;
    if (pUnk)
        pThis = (VCApp_CComObject*)((char*)pUnk - 0x1c);

    if (!ppv)
        return (int)0x80004003;

    int obj = *(int*)((char*)pThis + 0x20);
    if (!obj)
    {
        *ppv = 0;
        return (int)0x80004005;
    }

    int* vtbl = *(int**)obj;
    int (*fn)(void*, void*) = (int (*)(void*, void*))vtbl[0];
    return fn((void*)obj, (void*)ppv);
}
