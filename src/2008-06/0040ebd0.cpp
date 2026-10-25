// from server: 100% by king_originala
// roc 2008-06 0040ebd0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ebd0
//
// 0040ebd0  83ec10               sub esp, 0x10
// 0040ebd3  53                   push ebx
// 0040ebd4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0040ebd8  56                   push esi
// 0040ebd9  85db                 test ebx, ebx
// 0040ebdb  7406                 je 0x40ebe3
// 0040ebdd  c70300000000         mov dword ptr [ebx], 0
// 0040ebe3  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040ebe7  85f6                 test esi, esi
// 0040ebe9  0f8491000000         je 0x40ec80
// 0040ebef  85db                 test ebx, ebx
// 0040ebf1  0f8489000000         je 0x40ec80
// 0040ebf7  57                   push edi
// 0040ebf8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040ebfc  8b07                 mov eax, dword ptr [edi]
// 0040ebfe  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040ec01  8d4c240c             lea ecx, [esp + 0xc]
// 0040ec05  51                   push ecx
// 0040ec06  57                   push edi
// 0040ec07  ffd2                 call edx
// 0040ec09  8b06                 mov eax, dword ptr [esi]
// 0040ec0b  8b00                 mov eax, dword ptr [eax]
// 0040ec0d  8d4c2428             lea ecx, [esp + 0x28]
// 0040ec11  51                   push ecx
// 0040ec12  8d542410             lea edx, [esp + 0x10]
// 0040ec16  52                   push edx
// 0040ec17  56                   push esi
// 0040ec18  ffd0                 call eax
// 0040ec1a  8bf0                 mov esi, eax
// 0040ec1c  85f6                 test esi, esi
// 0040ec1e  7c42                 jl 0x40ec62
// 0040ec20  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0040ec24  51                   push ecx
// 0040ec25  8d4f04               lea ecx, [edi + 4]
// 0040ec28  e863feffff           call 0x40ea90
// 0040ec2d  8903                 mov dword ptr [ebx], eax
// 0040ec2f  f7d8                 neg eax
// 0040ec31  1bc0                 sbb eax, eax
// 0040ec33  25fffdfb7f           and eax, 0x7ffbfdff
// 0040ec38  0501020480           add eax, 0x80040201
// 0040ec3d  8bf0                 mov esi, eax
// 0040ec3f  740c                 je 0x40ec4d
// 0040ec41  8b442428             mov eax, dword ptr [esp + 0x28]
// 0040ec45  8b10                 mov edx, dword ptr [eax]
// 0040ec47  50                   push eax
// 0040ec48  8b4208               mov eax, dword ptr [edx + 8]
// 0040ec4b  ffd0                 call eax
// 0040ec4d  85f6                 test esi, esi
// 0040ec4f  7d06                 jge 0x40ec57
// 0040ec51  c70300000000         mov dword ptr [ebx], 0
// 0040ec57  5f                   pop edi
// 0040ec58  8bc6                 mov eax, esi
// 0040ec5a  5e                   pop esi
// 0040ec5b  5b                   pop ebx
// 0040ec5c  83c410               add esp, 0x10
// 0040ec5f  c20c00               ret 0xc
// 0040ec62  81fe02400080         cmp esi, 0x80004002
// 0040ec68  75e3                 jne 0x40ec4d
// 0040ec6a  be02020480           mov esi, 0x80040202
// 0040ec6f  5f                   pop edi
// 0040ec70  8bc6                 mov eax, esi
// 0040ec72  5e                   pop esi
// 0040ec73  c70300000000         mov dword ptr [ebx], 0
// 0040ec79  5b                   pop ebx
// 0040ec7a  83c410               add esp, 0x10
// 0040ec7d  c20c00               ret 0xc
// 0040ec80  5e                   pop esi
// 0040ec81  b803400080           mov eax, 0x80004003
// 0040ec86  5b                   pop ebx
// 0040ec87  83c410               add esp, 0x10
// 0040ec8a  c20c00               ret 0xc

typedef long HRESULT;
typedef unsigned long DWORD;

struct IID {
    unsigned long a;
    unsigned short b;
    unsigned short c;
    unsigned char d[8];
};

struct Unknown {
    virtual HRESULT __stdcall QueryInterface(const IID& iid, Unknown** result) = 0;
    virtual DWORD __stdcall AddRef() = 0;
    virtual DWORD __stdcall Release() = 0;
    virtual HRESULT __stdcall GetConnectionInterface(IID* iid) = 0;
};

struct Entries {
    DWORD Add(Unknown* object);
};

struct S : Unknown {
    Entries entries;
    HRESULT __stdcall Advise(Unknown* sink, DWORD* cookie);
};

HRESULT __stdcall S::Advise(Unknown* sink, DWORD* cookie)
{
    if (cookie)
        *cookie = 0;

    if (!sink || !cookie)
        return (HRESULT)0x80004003UL;

    IID iid;
    GetConnectionInterface(&iid);

    Unknown* object;
    HRESULT result = sink->QueryInterface(iid, &object);

    if (result >= 0) {
        *cookie = entries.Add(object);
        result = *cookie ? 0 : (HRESULT)0x80040201UL;
        if (result != 0)
            object->Release();
    } else if (result == (HRESULT)0x80004002UL) {
        result = (HRESULT)0x80040202UL;
    }

    if (result < 0)
        *cookie = 0;

    return result;
}
