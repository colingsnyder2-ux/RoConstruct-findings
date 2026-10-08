// from server: 100% by colin
// roc 2007-08 0044bf20  unit: CRobloxControlColorSelector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044bf20
//
// 0044bf20  8b442408             mov eax, dword ptr [esp + 8]
// 0044bf24  56                   push esi
// 0044bf25  8bf1                 mov esi, ecx
// 0044bf27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044bf2b  50                   push eax
// 0044bf2c  51                   push ecx
// 0044bf2d  8bce                 mov ecx, esi
// 0044bf2f  e89cfcffff           call 0x44bbd0
// 0044bf34  83f8ff               cmp eax, -1
// 0044bf37  740f                 je 0x44bf48
// 0044bf39  6a01                 push 1
// 0044bf3b  8bce                 mov ecx, esi
// 0044bf3d  898668010000         mov dword ptr [esi + 0x168], eax
// 0044bf43  e848e71e00           call 0x63a690
// 0044bf48  5e                   pop esi
// 0044bf49  c20800               ret 8

struct CRobloxControlColorSelector
{
    char pad[0x168];
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
