// roc 2010-06 00406460  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406460
//
// 00406460  8b442404             mov eax, dword ptr [esp + 4]
// 00406464  85c0                 test eax, eax
// 00406466  7405                 je 0x40646d
// 00406468  8d50f4               lea edx, [eax - 0xc]
// 0040646b  eb02                 jmp 0x40646f
// 0040646d  33d2                 xor edx, edx
// 0040646f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00406473  b803400080           mov eax, 0x80004003
// 00406478  85c9                 test ecx, ecx
// 0040647a  7420                 je 0x40649c
// 0040647c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040647f  85c0                 test eax, eax
// 00406481  740e                 je 0x406491
// 00406483  8b10                 mov edx, dword ptr [eax]
// 00406485  894c240c             mov dword ptr [esp + 0xc], ecx
// 00406489  89442404             mov dword ptr [esp + 4], eax
// 0040648d  8b12                 mov edx, dword ptr [edx]
// 0040648f  ffe2                 jmp edx
// 00406491  c70100000000         mov dword ptr [ecx], 0
// 00406497  b805400080           mov eax, 0x80004005
// 0040649c  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@@YGJPAX0PAPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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