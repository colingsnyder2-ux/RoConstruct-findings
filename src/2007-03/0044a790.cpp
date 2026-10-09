// roc 2007-03 0044a790  unit: seg_00440000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a790
//
// 0044a790  8b442408             mov eax, dword ptr [esp + 8]
// 0044a794  56                   push esi
// 0044a795  8bf1                 mov esi, ecx
// 0044a797  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a79b  50                   push eax
// 0044a79c  51                   push ecx
// 0044a79d  8bce                 mov ecx, esi
// 0044a79f  e89cfcffff           call 0x44a440
// 0044a7a4  83f8ff               cmp eax, -1
// 0044a7a7  740f                 je 0x44a7b8
// 0044a7a9  6a01                 push 1
// 0044a7ab  8bce                 mov ecx, esi
// 0044a7ad  898668010000         mov dword ptr [esi + 0x168], eax
// 0044a7b3  e8f8531e00           call 0x62fbb0
// 0044a7b8  5e                   pop esi
// 0044a7b9  c20800               ret 8
// copied from an identical function in another client (function ?sub_44BF20@CRobloxControlColorSelector@ns_ROCX000021@@QAEXHH@Z)

namespace ns_ROCX000021 {
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
}
