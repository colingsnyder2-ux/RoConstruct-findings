// from server: 98% by colin
// roc 2007-08 00449820  unit: CRobloxModule  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00449820
//
// 00449820  53                   push ebx
// 00449821  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00449825  85db                 test ebx, ebx
// 00449827  7509                 jne 0x449832
// 00449829  b803400080           mov eax, 0x80004003
// 0044982e  5b                   pop ebx
// 0044982f  c20400               ret 4
// 00449832  56                   push esi
// 00449833  57                   push edi
// 00449834  33ff                 xor edi, edi
// 00449836  397928               cmp dword ptr [ecx + 0x28], edi
// 00449839  8d7128               lea esi, [ecx + 0x28]
// 0044983c  751a                 jne 0x449858
// 0044983e  56                   push esi
// 0044983f  683c067900           push 0x79063c
// 00449844  6a01                 push 1
// 00449846  57                   push edi
// 00449847  685c4e7c00           push 0x7c4e5c
// 0044984c  ff1518f07700         call dword ptr [0x77f018]
// 00449852  8bf8                 mov edi, eax
// 00449854  85ff                 test edi, edi
// 00449856  7c0e                 jl 0x449866
// 00449858  8b06                 mov eax, dword ptr [esi]
// 0044985a  8903                 mov dword ptr [ebx], eax
// 0044985c  8b36                 mov esi, dword ptr [esi]
// 0044985e  8b0e                 mov ecx, dword ptr [esi]
// 00449860  8b5104               mov edx, dword ptr [ecx + 4]
// 00449863  56                   push esi
// 00449864  ffd2                 call edx
// 00449866  8bc7                 mov eax, edi
// 00449868  5f                   pop edi
// 00449869  5e                   pop esi
// 0044986a  5b                   pop ebx
// 0044986b  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall CoCreateInstance(void*, void*, unsigned long, void*, void**);

struct CRobloxModule {
    char pad[0x28];
    void* m_pUnknown;
    long CreateInstance(void** ppv);
};

long CRobloxModule::CreateInstance(void** ppv)
{
    if (ppv == 0)
        return (long)0x80004003;

    long hr = 0;
    if (m_pUnknown == 0)
    {
        hr = CoCreateInstance((void*)0x7c4e5c, 0, 1, (void*)0x79063c, &m_pUnknown);
    }

    if (hr >= 0)
    {
        *ppv = m_pUnknown;
        void* p = m_pUnknown;
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(p);
    }
    return hr;
}
