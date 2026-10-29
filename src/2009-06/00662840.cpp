// roc 2009-06 00662840  unit: DxUserInput  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662840
//
// 00662840  d901                 fld dword ptr [ecx]
// 00662842  56                   push esi
// 00662843  8b742408             mov esi, dword ptr [esp + 8]
// 00662847  d81e                 fcomp dword ptr [esi]
// 00662849  dfe0                 fnstsw ax
// 0066284b  f6c441               test ah, 0x41
// 0066284e  8bc6                 mov eax, esi
// 00662850  7402                 je 0x662854
// 00662852  8bc1                 mov eax, ecx
// 00662854  d900                 fld dword ptr [eax]
// 00662856  8d5104               lea edx, [ecx + 4]
// 00662859  d919                 fstp dword ptr [ecx]
// 0066285b  57                   push edi
// 0066285c  d902                 fld dword ptr [edx]
// 0066285e  8d7e04               lea edi, [esi + 4]
// 00662861  d81f                 fcomp dword ptr [edi]
// 00662863  dfe0                 fnstsw ax
// 00662865  f6c441               test ah, 0x41
// 00662868  7402                 je 0x66286c
// 0066286a  8bfa                 mov edi, edx
// 0066286c  d907                 fld dword ptr [edi]
// 0066286e  8d7e08               lea edi, [esi + 8]
// 00662871  d91a                 fstp dword ptr [edx]
// 00662873  8d5108               lea edx, [ecx + 8]
// 00662876  d907                 fld dword ptr [edi]
// 00662878  d81a                 fcomp dword ptr [edx]
// 0066287a  dfe0                 fnstsw ax
// 0066287c  f6c441               test ah, 0x41
// 0066287f  7402                 je 0x662883
// 00662881  8bfa                 mov edi, edx
// 00662883  d907                 fld dword ptr [edi]
// 00662885  5f                   pop edi
// 00662886  d91a                 fstp dword ptr [edx]
// 00662888  d9460c               fld dword ptr [esi + 0xc]
// 0066288b  d8590c               fcomp dword ptr [ecx + 0xc]
// 0066288e  dfe0                 fnstsw ax
// 00662890  f6c441               test ah, 0x41
// 00662893  750a                 jne 0x66289f
// 00662895  d9460c               fld dword ptr [esi + 0xc]
// 00662898  5e                   pop esi
// 00662899  d9590c               fstp dword ptr [ecx + 0xc]
// 0066289c  c20400               ret 4
// 0066289f  d9410c               fld dword ptr [ecx + 0xc]
// 006628a2  5e                   pop esi
// 006628a3  d9590c               fstp dword ptr [ecx + 0xc]
// 006628a6  c20400               ret 4
// copied from an identical function in another client (function ?f@DxUserInput@@QAEXABU1@@Z)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
inline const float& minimum(const float& a, const float& b)
{
    return b < a ? b : a;
}

inline const float& maximum(const float& a, const float& b)
{
    return a < b ? b : a;
}

struct DxUserInput
{
    float x0;
    float y0;
    float x1;
    float y1;

    void f(const DxUserInput& other);
};

void DxUserInput::f(const DxUserInput& other)
{
    x0 = minimum(x0, other.x0);
    y0 = minimum(y0, other.y0);
    x1 = maximum(x1, other.x1);
    y1 = maximum(y1, other.y1);
}