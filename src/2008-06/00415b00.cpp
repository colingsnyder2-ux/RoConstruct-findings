// from server: 100% by king_originala
// roc 2008-06 00415b00  unit: CopyVerb  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415b00
//
// 00415b00  51                   push ecx
// 00415b01  56                   push esi
// 00415b02  8bf1                 mov esi, ecx
// 00415b04  8b06                 mov eax, dword ptr [esi]
// 00415b06  85c0                 test eax, eax
// 00415b08  750a                 jne 0x415b14
// 00415b0a  6805400080           push 0x80004005
// 00415b0f  e8ecb4feff           call 0x401000
// 00415b14  8d4c2404             lea ecx, [esp + 4]
// 00415b18  51                   push ecx
// 00415b19  6a01                 push 1
// 00415b1b  50                   push eax
// 00415b1c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00415b24  ff1518298000         call dword ptr [0x802918]
// 00415b2a  85c0                 test eax, eax
// 00415b2c  7d06                 jge 0x415b34
// 00415b2e  50                   push eax
// 00415b2f  e8ccb4feff           call 0x401000
// 00415b34  55                   push ebp
// 00415b35  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00415b39  57                   push edi
// 00415b3a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00415b3e  3bfd                 cmp edi, ebp
// 00415b40  7c3b                 jl 0x415b7d
// 00415b42  8b06                 mov eax, dword ptr [esi]
// 00415b44  8d542414             lea edx, [esp + 0x14]
// 00415b48  52                   push edx
// 00415b49  6a01                 push 1
// 00415b4b  50                   push eax
// 00415b4c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00415b54  ff1514298000         call dword ptr [0x802914]
// 00415b5a  85c0                 test eax, eax
// 00415b5c  7d06                 jge 0x415b64
// 00415b5e  50                   push eax
// 00415b5f  e89cb4feff           call 0x401000
// 00415b64  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00415b68  7f13                 jg 0x415b7d
// 00415b6a  8b0e                 mov ecx, dword ptr [esi]
// 00415b6c  8bc7                 mov eax, edi
// 00415b6e  2bc5                 sub eax, ebp
// 00415b70  5f                   pop edi
// 00415b71  c1e004               shl eax, 4
// 00415b74  03410c               add eax, dword ptr [ecx + 0xc]
// 00415b77  5d                   pop ebp
// 00415b78  5e                   pop esi
// 00415b79  59                   pop ecx
// 00415b7a  c20400               ret 4
// 00415b7d  6857000780           push 0x80070057
// 00415b82  e879b4feff           call 0x401000

typedef long HRESULT;

struct Element {
    char data[16];
};

struct SafeArray {
    char padding[12];
    Element* data;
};

extern "C" HRESULT (__stdcall *SafeArrayGetLBound)(SafeArray*, unsigned int, long*);
extern "C" HRESULT (__stdcall *SafeArrayGetUBound)(SafeArray*, unsigned int, long*);

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(HRESULT);
}

struct CopyVerb {
    SafeArray* array;
    Element* f(long index);
};

Element* CopyVerb::f(long index)
{
    if (!array)
        ATL::AtlThrowImpl((HRESULT)0x80004005);

    long lowerBound;
    {
        long lower = 0;
        HRESULT hr = SafeArrayGetLBound(array, 1, &lower);
        if (hr < 0)
            ATL::AtlThrowImpl(hr);
        lowerBound = lower;
    }

    if (index >= lowerBound) {
        long upper = 0;
        HRESULT hr = SafeArrayGetUBound(array, 1, &upper);
        if (hr < 0)
            ATL::AtlThrowImpl(hr);

        if (index <= upper)
            return array->data + (index - lowerBound);
    }

    ATL::AtlThrowImpl((HRESULT)0x80070057);
    return 0;
}
