// from server: 100% by colin
// roc 2007-08 00556970  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00556970
//
// 00556970  56                   push esi
// 00556971  57                   push edi
// 00556972  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00556976  8b07                 mov eax, dword ptr [edi]
// 00556978  8bf1                 mov esi, ecx
// 0055697a  3b86ec000000         cmp eax, dword ptr [esi + 0xec]
// 00556980  7505                 jne 0x556987
// 00556982  e879ffffff           call 0x556900
// 00556987  57                   push edi
// 00556988  8bce                 mov ecx, esi
// 0055698a  e871b1feff           call 0x541b00
// 0055698f  5f                   pop edi
// 00556990  5e                   pop esi
// 00556991  c20400               ret 4

struct ChatEnter {
    char pad0[0xec];
    int m_field_ec;
    void sub_556900();
    void sub_541B00(int*);
    void f(int* p);
};

void ChatEnter::f(int* p)
{
    if (*p == m_field_ec)
        sub_556900();
    sub_541B00(p);
}
