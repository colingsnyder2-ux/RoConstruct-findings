// from server: 100% by colin
// roc 2007-08 00671d50  unit: CPropertyGridItemBrickColor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671d50
//
// 00671d50  8b442408             mov eax, dword ptr [esp + 8]
// 00671d54  85c0                 test eax, eax
// 00671d56  7512                 jne 0x671d6a
// 00671d58  56                   push esi
// 00671d59  8b742408             mov esi, dword ptr [esp + 8]
// 00671d5d  50                   push eax
// 00671d5e  56                   push esi
// 00671d5f  e81cffffff           call 0x671c80
// 00671d64  8bc6                 mov eax, esi
// 00671d66  5e                   pop esi
// 00671d67  c20800               ret 8
// 00671d6a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00671d6d  56                   push esi
// 00671d6e  8b742408             mov esi, dword ptr [esp + 8]
// 00671d72  50                   push eax
// 00671d73  56                   push esi
// 00671d74  e807ffffff           call 0x671c80
// 00671d79  8bc6                 mov eax, esi
// 00671d7b  5e                   pop esi
// 00671d7c  c20800               ret 8

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
