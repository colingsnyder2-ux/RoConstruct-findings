// from server: 100% by colin
// roc 2007-08 00681020  unit: CXTPDrawHelpers  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00681020
//
// 00681020  56                   push esi
// 00681021  8b742408             mov esi, dword ptr [esp + 8]
// 00681025  85f6                 test esi, esi
// 00681027  7441                 je 0x68106a
// 00681029  837e2000             cmp dword ptr [esi + 0x20], 0
// 0068102d  743b                 je 0x68106a
// 0068102f  57                   push edi
// 00681030  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00681034  833f25               cmp dword ptr [edi], 0x25
// 00681037  7517                 jne 0x681050
// 00681039  8bce                 mov ecx, esi
// 0068103b  e8e2720b00           call 0x738322
// 00681040  a900004000           test eax, 0x400000
// 00681045  7409                 je 0x681050
// 00681047  c70727000000         mov dword ptr [edi], 0x27
// 0068104d  5f                   pop edi
// 0068104e  5e                   pop esi
// 0068104f  c3                   ret 
// 00681050  833f27               cmp dword ptr [edi], 0x27
// 00681053  7514                 jne 0x681069
// 00681055  8bce                 mov ecx, esi
// 00681057  e8c6720b00           call 0x738322
// 0068105c  a900004000           test eax, 0x400000
// 00681061  7406                 je 0x681069
// 00681063  c70725000000         mov dword ptr [edi], 0x25
// 00681069  5f                   pop edi
// 0068106a  5e                   pop esi
// 0068106b  c3                   ret 

struct CXTPDrawHelpers {
    int IsThemeActive();
};

int CXTPDrawHelpers::IsThemeActive()
{
    return 0;
}

extern "C" int __fastcall sub_738322(CXTPDrawHelpers* self);

void func_00681020(CXTPDrawHelpers* self, int* pValue)
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
