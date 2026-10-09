// roc 2008-06 006f89c0  unit: CXTPDrawHelpers  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f89c0
//
// 006f89c0  56                   push esi
// 006f89c1  8b742408             mov esi, dword ptr [esp + 8]
// 006f89c5  85f6                 test esi, esi
// 006f89c7  7441                 je 0x6f8a0a
// 006f89c9  837e2000             cmp dword ptr [esi + 0x20], 0
// 006f89cd  743b                 je 0x6f8a0a
// 006f89cf  57                   push edi
// 006f89d0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f89d4  833f25               cmp dword ptr [edi], 0x25
// 006f89d7  7517                 jne 0x6f89f0
// 006f89d9  8bce                 mov ecx, esi
// 006f89db  e8b8350c00           call 0x7bbf98
// 006f89e0  a900004000           test eax, 0x400000
// 006f89e5  7409                 je 0x6f89f0
// 006f89e7  c70727000000         mov dword ptr [edi], 0x27
// 006f89ed  5f                   pop edi
// 006f89ee  5e                   pop esi
// 006f89ef  c3                   ret 
// 006f89f0  833f27               cmp dword ptr [edi], 0x27
// 006f89f3  7514                 jne 0x6f8a09
// 006f89f5  8bce                 mov ecx, esi
// 006f89f7  e89c350c00           call 0x7bbf98
// 006f89fc  a900004000           test eax, 0x400000
// 006f8a01  7406                 je 0x6f8a09
// 006f8a03  c70725000000         mov dword ptr [edi], 0x25
// 006f8a09  5f                   pop edi
// 006f8a0a  5e                   pop esi
// 006f8a0b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000015@ns_ROCX000015@@YAXPAUCXTPDrawHelpers@1@PAH@Z)

namespace ns_ROCX000015 {
struct CXTPDrawHelpers {
    int IsThemeActive();
};

int CXTPDrawHelpers::IsThemeActive()
{
    return 0;
}

extern "C" int __fastcall sub_738322(CXTPDrawHelpers* self);

void fn_ROCX000015(CXTPDrawHelpers* self, int* pValue)
{
    if (self == 0)
        return;
    if (*(int*)((char*)self + 0x20) == 0)
        return;
    if (*pValue == 0x25) {
        if (sub_738322(self) & 0x400000) {
            *pValue = 0x27;
            return;
        }
    }
    if (*pValue == 0x27) {
        if (sub_738322(self) & 0x400000) {
            *pValue = 0x25;
        }
    }
}
}
