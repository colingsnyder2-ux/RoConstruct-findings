// roc 2007-03 0066cd50  unit: seg_00660000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066cd50
//
// 0066cd50  56                   push esi
// 0066cd51  8b742408             mov esi, dword ptr [esp + 8]
// 0066cd55  85f6                 test esi, esi
// 0066cd57  7441                 je 0x66cd9a
// 0066cd59  837e2000             cmp dword ptr [esi + 0x20], 0
// 0066cd5d  743b                 je 0x66cd9a
// 0066cd5f  57                   push edi
// 0066cd60  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066cd64  833f25               cmp dword ptr [edi], 0x25
// 0066cd67  7517                 jne 0x66cd80
// 0066cd69  8bce                 mov ecx, esi
// 0066cd6b  e816dd0c00           call 0x73aa86
// 0066cd70  a900004000           test eax, 0x400000
// 0066cd75  7409                 je 0x66cd80
// 0066cd77  c70727000000         mov dword ptr [edi], 0x27
// 0066cd7d  5f                   pop edi
// 0066cd7e  5e                   pop esi
// 0066cd7f  c3                   ret 
// 0066cd80  833f27               cmp dword ptr [edi], 0x27
// 0066cd83  7514                 jne 0x66cd99
// 0066cd85  8bce                 mov ecx, esi
// 0066cd87  e8fadc0c00           call 0x73aa86
// 0066cd8c  a900004000           test eax, 0x400000
// 0066cd91  7406                 je 0x66cd99
// 0066cd93  c70725000000         mov dword ptr [edi], 0x25
// 0066cd99  5f                   pop edi
// 0066cd9a  5e                   pop esi
// 0066cd9b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000b@ns_ROCX00000b@@YAXPAUCXTPDrawHelpers@1@PAH@Z)

namespace ns_ROCX00000b {
struct CXTPDrawHelpers {
    int IsThemeActive();
};

int CXTPDrawHelpers::IsThemeActive()
{
    return 0;
}

extern "C" int __fastcall sub_738322(CXTPDrawHelpers* self);

void fn_ROCX00000b(CXTPDrawHelpers* self, int* pValue)
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
