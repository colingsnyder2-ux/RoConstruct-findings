// from server: 100% by tester
// roc 2008-06 006e8c20  unit: CPatchedControlComboBox  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8c20
//
// 006e8c20  8b442408             mov eax, dword ptr [esp + 8]
// 006e8c24  85c0                 test eax, eax
// 006e8c26  7512                 jne 0x6e8c3a
// 006e8c28  56                   push esi
// 006e8c29  8b742408             mov esi, dword ptr [esp + 8]
// 006e8c2d  50                   push eax
// 006e8c2e  56                   push esi
// 006e8c2f  e81cffffff           call 0x6e8b50
// 006e8c34  8bc6                 mov eax, esi
// 006e8c36  5e                   pop esi
// 006e8c37  c20800               ret 8
// 006e8c3a  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e8c3d  56                   push esi
// 006e8c3e  8b742408             mov esi, dword ptr [esp + 8]
// 006e8c42  50                   push eax
// 006e8c43  56                   push esi
// 006e8c44  e807ffffff           call 0x6e8b50
// 006e8c49  8bc6                 mov eax, esi
// 006e8c4b  5e                   pop esi
// 006e8c4c  c20800               ret 8

struct CPropertyGridItemBrickColor {
    char pad[0x20];
    int m_value;
};

extern "C" int __stdcall sub_671c80(int, int);

int __stdcall sub_671d50(int a, int b)
{
    int v;
    if (b == 0)
        v = 0;
    else
        v = ((CPropertyGridItemBrickColor*)b)->m_value;
    sub_671c80(a, v);
    return a;
}
