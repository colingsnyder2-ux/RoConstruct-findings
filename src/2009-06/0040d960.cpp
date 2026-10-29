// roc 2009-06 0040d960  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d960
//
// 0040d960  83ec10               sub esp, 0x10
// 0040d963  53                   push ebx
// 0040d964  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0040d968  56                   push esi
// 0040d969  85db                 test ebx, ebx
// 0040d96b  7406                 je 0x40d973
// 0040d96d  c70300000000         mov dword ptr [ebx], 0
// 0040d973  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040d977  85f6                 test esi, esi
// 0040d979  0f8491000000         je 0x40da10
// 0040d97f  85db                 test ebx, ebx
// 0040d981  0f8489000000         je 0x40da10
// 0040d987  57                   push edi
// 0040d988  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040d98c  8b07                 mov eax, dword ptr [edi]
// 0040d98e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040d991  8d4c240c             lea ecx, [esp + 0xc]
// 0040d995  51                   push ecx
// 0040d996  57                   push edi
// 0040d997  ffd2                 call edx
// 0040d999  8b06                 mov eax, dword ptr [esi]
// 0040d99b  8b00                 mov eax, dword ptr [eax]
// 0040d99d  8d4c2428             lea ecx, [esp + 0x28]
// 0040d9a1  51                   push ecx
// 0040d9a2  8d542410             lea edx, [esp + 0x10]
// 0040d9a6  52                   push edx
// 0040d9a7  56                   push esi
// 0040d9a8  ffd0                 call eax
// 0040d9aa  8bf0                 mov esi, eax
// 0040d9ac  85f6                 test esi, esi
// 0040d9ae  7c42                 jl 0x40d9f2
// 0040d9b0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0040d9b4  51                   push ecx
// 0040d9b5  8d4f04               lea ecx, [edi + 4]
// 0040d9b8  e863feffff           call 0x40d820
// 0040d9bd  8903                 mov dword ptr [ebx], eax
// 0040d9bf  f7d8                 neg eax
// 0040d9c1  1bc0                 sbb eax, eax
// 0040d9c3  25fffdfb7f           and eax, 0x7ffbfdff
// 0040d9c8  0501020480           add eax, 0x80040201
// 0040d9cd  8bf0                 mov esi, eax
// 0040d9cf  740c                 je 0x40d9dd
// 0040d9d1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0040d9d5  8b10                 mov edx, dword ptr [eax]
// 0040d9d7  50                   push eax
// 0040d9d8  8b4208               mov eax, dword ptr [edx + 8]
// 0040d9db  ffd0                 call eax
// 0040d9dd  85f6                 test esi, esi
// 0040d9df  7d06                 jge 0x40d9e7
// 0040d9e1  c70300000000         mov dword ptr [ebx], 0
// 0040d9e7  5f                   pop edi
// 0040d9e8  8bc6                 mov eax, esi
// 0040d9ea  5e                   pop esi
// 0040d9eb  5b                   pop ebx
// 0040d9ec  83c410               add esp, 0x10
// 0040d9ef  c20c00               ret 0xc
// 0040d9f2  81fe02400080         cmp esi, 0x80004002
// 0040d9f8  75e3                 jne 0x40d9dd
// 0040d9fa  be02020480           mov esi, 0x80040202
// 0040d9ff  5f                   pop edi
// 0040da00  8bc6                 mov eax, esi
// 0040da02  5e                   pop esi
// 0040da03  c70300000000         mov dword ptr [ebx], 0
// 0040da09  5b                   pop ebx
// 0040da0a  83c410               add esp, 0x10
// 0040da0d  c20c00               ret 0xc
// 0040da10  5e                   pop esi
// 0040da11  b803400080           mov eax, 0x80004003
// 0040da16  5b                   pop ebx
// 0040da17  83c410               add esp, 0x10
// 0040da1a  c20c00               ret 0xc
// copied from an identical function in another client (function ?Advise@S@@QAGJPAUUnknown@@PAK@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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