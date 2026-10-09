// roc 2007-03 0065cf90  unit: seg_00650000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065cf90
//
// 0065cf90  56                   push esi
// 0065cf91  8bf1                 mov esi, ecx
// 0065cf93  83c8ff               or eax, 0xffffffff
// 0065cf96  398640010000         cmp dword ptr [esi + 0x140], eax
// 0065cf9c  7414                 je 0x65cfb2
// 0065cf9e  6a00                 push 0
// 0065cfa0  898640010000         mov dword ptr [esi + 0x140], eax
// 0065cfa6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0065cfa9  6a00                 push 0
// 0065cfab  50                   push eax
// 0065cfac  ff1554ee7700         call dword ptr [0x77ee54]
// 0065cfb2  8bce                 mov ecx, esi
// 0065cfb4  e81917fcff           call 0x61e6d2
// 0065cfb9  5e                   pop esi
// 0065cfba  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPPropertyGrid@ns_ROCX00001c@@QAEXH@Z)

namespace ns_ROCX00001c {
extern "C" __declspec(dllimport) int __stdcall InvalidateRect(void*, const void*, int);

struct CXTPPropertyGrid
{
    char pad[0x20];
    void* field20;
    char pad2[0x140 - 0x24];
    int field140;
    void sub_63023e();
    void func(int);
};

void CXTPPropertyGrid::func(int a)
{
    if (field140 != -1)
    {
        field140 = -1;
        InvalidateRect(field20, 0, 0);
    }
    sub_63023e();
}
}
