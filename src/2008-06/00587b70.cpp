// from server: 58% by colin
// roc 2008-06 00587b70  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587b70
//
// 00587b70  51                   push ecx
// 00587b71  57                   push edi
// 00587b72  8bf9                 mov edi, ecx
// 00587b74  80bf6501000000       cmp byte ptr [edi + 0x165], 0
// 00587b7b  7507                 jne 0x587b84
// 00587b7d  32c0                 xor al, al
// 00587b7f  5f                   pop edi
// 00587b80  59                   pop ecx
// 00587b81  c20800               ret 8
// 00587b84  837c241000           cmp dword ptr [esp + 0x10], 0
// 00587b89  53                   push ebx
// 00587b8a  55                   push ebp
// 00587b8b  8baf60010000         mov ebp, dword ptr [edi + 0x160]
// 00587b91  56                   push esi
// 00587b92  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00587b98  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00587ba0  7e51                 jle 0x587bf3
// 00587ba2  8b874c010000         mov eax, dword ptr [edi + 0x14c]
// 00587ba8  8b18                 mov ebx, dword ptr [eax]
// 00587baa  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00587bb0  85f6                 test esi, esi
// 00587bb2  7404                 je 0x587bb8
// 00587bb4  3bf0                 cmp esi, eax
// 00587bb6  7406                 je 0x587bbe
// 00587bb8  ff1590288000         call dword ptr [0x802890]
// 00587bbe  3beb                 cmp ebp, ebx
// 00587bc0  7479                 je 0x587c3b
// 00587bc2  85f6                 test esi, esi
// 00587bc4  7506                 jne 0x587bcc
// 00587bc6  ff1590288000         call dword ptr [0x802890]
// 00587bcc  8b6d04               mov ebp, dword ptr [ebp + 4]
// 00587bcf  85f6                 test esi, esi
// 00587bd1  7404                 je 0x587bd7
// 00587bd3  8b06                 mov eax, dword ptr [esi]
// 00587bd5  eb02                 jmp 0x587bd9
// 00587bd7  33c0                 xor eax, eax
// 00587bd9  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 00587bdc  7506                 jne 0x587be4
// 00587bde  ff1590288000         call dword ptr [0x802890]
// 00587be4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00587be8  40                   inc eax
// 00587be9  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00587bed  89442410             mov dword ptr [esp + 0x10], eax
// 00587bf1  7caf                 jl 0x587ba2
// 00587bf3  8b9f4c010000         mov ebx, dword ptr [edi + 0x14c]
// 00587bf9  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00587bff  85f6                 test esi, esi
// 00587c01  7404                 je 0x587c07
// 00587c03  3bf0                 cmp esi, eax
// 00587c05  7406                 je 0x587c0d
// 00587c07  ff1590288000         call dword ptr [0x802890]
// 00587c0d  3beb                 cmp ebp, ebx
// 00587c0f  742a                 je 0x587c3b
// 00587c11  8b8f4c010000         mov ecx, dword ptr [edi + 0x14c]
// 00587c17  8b19                 mov ebx, dword ptr [ecx]
// 00587c19  8bbf38010000         mov edi, dword ptr [edi + 0x138]
// 00587c1f  85f6                 test esi, esi
// 00587c21  7404                 je 0x587c27
// 00587c23  3bf7                 cmp esi, edi
// 00587c25  740a                 je 0x587c31
// 00587c27  8b3d90288000         mov edi, dword ptr [0x802890]
// 00587c2d  ffd7                 call edi
// 00587c2f  eb06                 jmp 0x587c37
// 00587c31  8b3d90288000         mov edi, dword ptr [0x802890]
// 00587c37  3beb                 cmp ebp, ebx
// 00587c39  750a                 jne 0x587c45
// 00587c3b  5e                   pop esi
// 00587c3c  5d                   pop ebp
// 00587c3d  5b                   pop ebx
// 00587c3e  32c0                 xor al, al
// 00587c40  5f                   pop edi
// 00587c41  59                   pop ecx
// 00587c42  c20800               ret 8
// 00587c45  85f6                 test esi, esi
// 00587c47  7524                 jne 0x587c6d
// 00587c49  ffd7                 call edi
// 00587c4b  3b6e14               cmp ebp, dword ptr [esi + 0x14]
// 00587c4e  7502                 jne 0x587c52
// 00587c50  ffd7                 call edi
// 00587c52  8b5508               mov edx, dword ptr [ebp + 8]
// 00587c55  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00587c59  83c224               add edx, 0x24
// 00587c5c  52                   push edx
// 00587c5d  ff150c248000         call dword ptr [0x80240c]
// 00587c63  5e                   pop esi
// 00587c64  5d                   pop ebp
// 00587c65  5b                   pop ebx
// 00587c66  b001                 mov al, 1
// 00587c68  5f                   pop edi
// 00587c69  59                   pop ecx
// 00587c6a  c20800               ret 8
// 00587c6d  8b36                 mov esi, dword ptr [esi]
// 00587c6f  ebda                 jmp 0x587c4b

struct VChangeHistoryService {
    char pad[0x138];
    void* field_138;
    char pad2[0x14c - 0x13c];
    void* field_14c;
    char pad3[0x15c - 0x150];
    void* field_15c;
    void* field_160;
    char pad4[0x165 - 0x164];
    unsigned char field_165;
    bool func(void* a, int b);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall sub_80240c(void*);
extern "C" void* __stdcall sub_802890();

bool VChangeHistoryService::func(void* a, int b)
{
    if (field_165 == 0)
        return false;

    void* ebp = field_160;
    void* esi = field_15c;
    int count = 0;

    if (b > 0)
    {
        do
        {
            void* ebx = *(void**)field_14c;
            void* eax = field_138;
            if (esi != 0 && esi == eax)
            {
            }
            else
            {
                sub_802890();
            }
            if (ebp == ebx)
                return false;
            if (esi == 0)
                sub_802890();
            ebp = *(void**)((char*)ebp + 4);
            if (esi != 0)
                eax = *(void**)esi;
            else
                eax = 0;
            if (ebp == *(void**)((char*)eax + 0x14))
                sub_802890();
            count++;
        } while (count < b);
    }

    void* ebx = *(void**)field_14c;
    void* eax = field_138;
    if (esi != 0 && esi == eax)
    {
    }
    else
    {
        sub_802890();
    }
    if (ebp == ebx)
        return false;

    void* ecx = *(void**)field_14c;
    ebx = *(void**)ecx;
    void* edi = field_138;
    if (esi != 0 && esi == edi)
    {
    }
    else
    {
        sub_802890();
    }
    if (ebp == ebx)
        return false;

    if (esi == 0)
    {
        sub_802890();
        if (ebp == *(void**)((char*)esi + 0x14))
            sub_802890();
    }
    else
    {
        esi = *(void**)esi;
        if (ebp == *(void**)((char*)esi + 0x14))
            sub_802890();
    }

    void* edx = *(void**)((char*)ebp + 8);
    void* arg = a;
    edx = (char*)edx + 0x24;
    sub_80240c(edx);
    return true;
}
