// roc 2009-06 00406910  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406910
//
// 00406910  8b442404             mov eax, dword ptr [esp + 4]
// 00406914  85c0                 test eax, eax
// 00406916  7405                 je 0x40691d
// 00406918  8d50f4               lea edx, [eax - 0xc]
// 0040691b  eb02                 jmp 0x40691f
// 0040691d  33d2                 xor edx, edx
// 0040691f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00406923  b803400080           mov eax, 0x80004003
// 00406928  85c9                 test ecx, ecx
// 0040692a  7420                 je 0x40694c
// 0040692c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040692f  85c0                 test eax, eax
// 00406931  740e                 je 0x406941
// 00406933  8b10                 mov edx, dword ptr [eax]
// 00406935  894c240c             mov dword ptr [esp + 0xc], ecx
// 00406939  89442404             mov dword ptr [esp + 4], eax
// 0040693d  8b12                 mov edx, dword ptr [edx]
// 0040693f  ffe2                 jmp edx
// 00406941  c70100000000         mov dword ptr [ecx], 0
// 00406947  b805400080           mov eax, 0x80004005
// 0040694c  c20c00               ret 0xc
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