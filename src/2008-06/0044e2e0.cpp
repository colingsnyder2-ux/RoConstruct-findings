// from server: 100% by tester
// roc 2008-06 0044e2e0  unit: CRobloxControlColorSelector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e2e0
//
// 0044e2e0  8b442408             mov eax, dword ptr [esp + 8]
// 0044e2e4  56                   push esi
// 0044e2e5  8bf1                 mov esi, ecx
// 0044e2e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044e2eb  50                   push eax
// 0044e2ec  51                   push ecx
// 0044e2ed  8bce                 mov ecx, esi
// 0044e2ef  e8ccfcffff           call 0x44dfc0
// 0044e2f4  83f8ff               cmp eax, -1
// 0044e2f7  740f                 je 0x44e308
// 0044e2f9  6a01                 push 1
// 0044e2fb  8bce                 mov ecx, esi
// 0044e2fd  898674010000         mov dword ptr [esi + 0x174], eax
// 0044e303  e8c8d52500           call 0x6ab8d0
// 0044e308  5e                   pop esi
// 0044e309  c20800               ret 8

struct CRobloxControlColorSelector
{
    char pad[0x174];
    int field_168;
    int sub_44BBD0(int, int);
    void sub_63A690(int);
    void sub_44BF20(int, int);
};

void CRobloxControlColorSelector::sub_44BF20(int a, int b)
{
    int r = sub_44BBD0(a, b);
    if (r != -1)
    {
        field_168 = r;
        sub_63A690(1);
    }
}
