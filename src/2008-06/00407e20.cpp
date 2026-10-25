// from server: 100% by king_originala
// roc 2008-06 00407e20  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407e20
//
// 00407e20  8b442404             mov eax, dword ptr [esp + 4]
// 00407e24  85c0                 test eax, eax
// 00407e26  7405                 je 0x407e2d
// 00407e28  8d50f4               lea edx, [eax - 0xc]
// 00407e2b  eb02                 jmp 0x407e2f
// 00407e2d  33d2                 xor edx, edx
// 00407e2f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00407e33  b803400080           mov eax, 0x80004003
// 00407e38  85c9                 test ecx, ecx
// 00407e3a  7420                 je 0x407e5c
// 00407e3c  8b4210               mov eax, dword ptr [edx + 0x10]
// 00407e3f  85c0                 test eax, eax
// 00407e41  740e                 je 0x407e51
// 00407e43  8b10                 mov edx, dword ptr [eax]
// 00407e45  894c240c             mov dword ptr [esp + 0xc], ecx
// 00407e49  89442404             mov dword ptr [esp + 4], eax
// 00407e4d  8b12                 mov edx, dword ptr [edx]
// 00407e4f  ffe2                 jmp edx
// 00407e51  c70100000000         mov dword ptr [ecx], 0
// 00407e57  b805400080           mov eax, 0x80004005
// 00407e5c  c20c00               ret 0xc

struct Interface
{
    virtual long __stdcall Query(void* id, void** result) = 0;
};

long __stdcall f(void* source, void* id, void** result)
{
    char* object = source ? (char*)source - 12 : 0;
    long status = (long)0x80004003;
    if (result)
    {
        Interface* inner = *(Interface**)(object + 16);
        if (inner)
            return inner->Query(id, result);
        *result = 0;
        status = (long)0x80004005;
    }
    return status;
}
