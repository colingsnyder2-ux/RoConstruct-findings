// from server: 60% by tester
// roc 2008-06 006b98c0  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b98c0
//
// 006b98c0  51                   push ecx
// 006b98c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b98c5  56                   push esi
// 006b98c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b98ca  68400c8100           push 0x810c40
// 006b98cf  50                   push eax
// 006b98d0  56                   push esi
// 006b98d1  c644241089           mov byte ptr [esp + 0x10], 0x89
// 006b98d6  c644241150           mov byte ptr [esp + 0x11], 0x50
// 006b98db  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 006b98e0  c644241347           mov byte ptr [esp + 0x13], 0x47
// 006b98e5  ff1590218000         call dword ptr [0x802190]
// 006b98eb  85c0                 test eax, eax
// 006b98ed  7503                 jne 0x6b98f2
// 006b98ef  5e                   pop esi
// 006b98f0  59                   pop ecx
// 006b98f1  c3                   ret 
// 006b98f2  57                   push edi
// 006b98f3  50                   push eax
// 006b98f4  56                   push esi
// 006b98f5  ff15a8218000         call dword ptr [0x8021a8]
// 006b98fb  8bf8                 mov edi, eax
// 006b98fd  85ff                 test edi, edi
// 006b98ff  7504                 jne 0x6b9905
// 006b9901  5f                   pop edi
// 006b9902  5e                   pop esi
// 006b9903  59                   pop ecx
// 006b9904  c3                   ret 
// 006b9905  57                   push edi
// 006b9906  ff1510228000         call dword ptr [0x802210]
// 006b990c  8b08                 mov ecx, dword ptr [eax]
// 006b990e  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 006b9912  7426                 je 0x6b993a
// 006b9914  0fb6f1               movzx esi, cl
// 006b9917  81ee89000000         sub esi, 0x89
// 006b991d  752f                 jne 0x6b994e
// 006b991f  0fb67001             movzx esi, byte ptr [eax + 1]
// 006b9923  83ee50               sub esi, 0x50
// 006b9926  7526                 jne 0x6b994e
// 006b9928  0fb67002             movzx esi, byte ptr [eax + 2]
// 006b992c  83ee4e               sub esi, 0x4e
// 006b992f  751d                 jne 0x6b994e
// 006b9931  0fb67003             movzx esi, byte ptr [eax + 3]
// 006b9935  83ee47               sub esi, 0x47
// 006b9938  7514                 jne 0x6b994e
// 006b993a  57                   push edi
// 006b993b  33f6                 xor esi, esi
// 006b993d  ff150c228000         call dword ptr [0x80220c]
// 006b9943  33c0                 xor eax, eax
// 006b9945  85f6                 test esi, esi
// 006b9947  5f                   pop edi
// 006b9948  0f94c0               sete al
// 006b994b  5e                   pop esi
// 006b994c  59                   pop ecx
// 006b994d  c3                   ret 
// 006b994e  c1fe1f               sar esi, 0x1f
// 006b9951  57                   push edi
// 006b9952  83ce01               or esi, 1
// 006b9955  ff150c228000         call dword ptr [0x80220c]
// 006b995b  33c0                 xor eax, eax
// 006b995d  85f6                 test esi, esi
// 006b995f  5f                   pop edi
// 006b9960  0f94c0               sete al
// 006b9963  5e                   pop esi
// 006b9964  59                   pop ecx
// 006b9965  c3                   ret 

extern "C" {
    __declspec(dllimport) void* __stdcall FindResourceA(void*, const char*, const char*);
    __declspec(dllimport) void* __stdcall LoadResource(void*, void*);
    __declspec(dllimport) void* __stdcall LockResource(void*);
    __declspec(dllimport) int __stdcall FreeResource(void*);
}

struct CXTPCommandBar {
};

int __cdecl GetResourceHandle(void* hModule, const char* name, int type)
{
    char buf[4];
    buf[0] = (char)0x89;
    buf[1] = (char)0x50;
    buf[2] = (char)0x4e;
    buf[3] = (char)0x47;

    void* hRes = FindResourceA(hModule, name, buf);
    if (hRes == 0)
        return 0;

    void* hData = LoadResource(hModule, hRes);
    if (hData == 0)
        return 0;

    void* pData = LockResource(hData);
    int result;
    if (*(int*)pData == type)
    {
        FreeResource(hData);
        result = 1;
    }
    else
    {
        unsigned char* p = (unsigned char*)pData;
        int diff = p[0] - 0x89;
        if (diff != 0)
        {
            FreeResource(hData);
            result = 0;
        }
        else
        {
            diff = p[1] - 0x50;
            if (diff != 0)
            {
                FreeResource(hData);
                result = 0;
            }
            else
            {
                diff = p[2] - 0x4e;
                if (diff != 0)
                {
                    FreeResource(hData);
                    result = 0;
                }
                else
                {
                    diff = p[3] - 0x47;
                    if (diff != 0)
                    {
                        FreeResource(hData);
                        result = 0;
                    }
                    else
                    {
                        FreeResource(hData);
                        result = 1;
                    }
                }
            }
        }
    }
    return result;
}
