// from server: 82% by colin
// roc 2007-08 006a3640  unit: CXTPHookManager::CHookSink  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3640
//
// 006a3640  56                   push esi
// 006a3641  57                   push edi
// 006a3642  6a01                 push 1
// 006a3644  8bf1                 mov esi, ecx
// 006a3646  e8e5feffff           call 0x6a3530
// 006a364b  6a01                 push 1
// 006a364d  8bce                 mov ecx, esi
// 006a364f  e82cffffff           call 0x6a3580
// 006a3654  e8a9c8f8ff           call 0x62ff02
// 006a3659  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a365d  894610               mov dword ptr [esi + 0x10], eax
// 006a3660  6a00                 push 0
// 006a3662  83c614               add esi, 0x14
// 006a3665  57                   push edi
// 006a3666  8bce                 mov ecx, esi
// 006a3668  e863f7ffff           call 0x6a2dd0
// 006a366d  85c0                 test eax, eax
// 006a366f  7508                 jne 0x6a3679
// 006a3671  57                   push edi
// 006a3672  8bce                 mov ecx, esi
// 006a3674  e8f7100400           call 0x6e4770
// 006a3679  5f                   pop edi
// 006a367a  5e                   pop esi
// 006a367b  c20400               ret 4

extern "C" int __cdecl sub_62FF02();

struct CHookSink {
    void sub_6A3530(int);
    void sub_6A3580(int);
    int sub_6A2DD0(int, int);
    void sub_6E4770(int);
    void construct(int);
    char pad[0x10];
    int field_10;
    char pad2[4];
};

void CHookSink::construct(int arg)
{
    sub_6A3530(1);
    sub_6A3580(1);
    field_10 = sub_62FF02();
    if (sub_6A2DD0(0, arg) == 0)
        sub_6E4770(arg);
}
