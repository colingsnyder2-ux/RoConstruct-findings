// from server: 100% by tester
// roc 2011-06 004a1030  unit: RBX::DS::CVideoStream  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a1030
//
// 004a1030  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a1034  85c9                 test ecx, ecx
// 004a1036  7508                 jne 0x4a1040
// 004a1038  b803400080           mov eax, 0x80004003
// 004a103d  c20800               ret 8
// 004a1040  8b442404             mov eax, dword ptr [esp + 4]
// 004a1044  8b400c               mov eax, dword ptr [eax + 0xc]
// 004a1047  8901                 mov dword ptr [ecx], eax
// 004a1049  85c0                 test eax, eax
// 004a104b  740d                 je 0x4a105a
// 004a104d  8b08                 mov ecx, dword ptr [eax]
// 004a104f  8b5104               mov edx, dword ptr [ecx + 4]
// 004a1052  50                   push eax
// 004a1053  ffd2                 call edx
// 004a1055  33c0                 xor eax, eax
// 004a1057  c20800               ret 8
// 004a105a  b809020480           mov eax, 0x80040209
// 004a105f  c20800               ret 8

typedef long HRESULT;

struct CVideoStream
{
    HRESULT f(void *source, void **result);
};

struct Interface
{
    void **vtable;
};

typedef void (__stdcall *ReleaseFunction)(Interface *);

HRESULT CVideoStream::f(void *source, void **result)
{
    if (result == 0)
        return (HRESULT)0x80004003;

    Interface *value = *(Interface **)((char *)source + 12);
    *result = value;

    if (value != 0)
    {
        ReleaseFunction release = (ReleaseFunction)value->vtable[1];
        release(value);
        return 0;
    }

    return (HRESULT)0x80040209;
}
