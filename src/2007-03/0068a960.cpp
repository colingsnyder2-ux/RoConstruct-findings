// roc 2007-03 0068a960  unit: seg_00680000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068a960
//
// 0068a960  56                   push esi
// 0068a961  8bf1                 mov esi, ecx
// 0068a963  e8a8b3ffff           call 0x685d10
// 0068a968  8bc8                 mov ecx, eax
// 0068a96a  e801c3ffff           call 0x686c70
// 0068a96f  68d0000000           push 0xd0
// 0068a974  6a00                 push 0
// 0068a976  56                   push esi
// 0068a977  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 0068a97d  e89a46f9ff           call 0x61f01c
// 0068a982  83c40c               add esp, 0xc
// 0068a985  6874fb7c00           push 0x7cfb74
// 0068a98a  ff1548d27700         call dword ptr [0x77d248]
// 0068a990  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0068a996  8bc6                 mov eax, esi
// 0068a998  5e                   pop esi
// 0068a999  c3                   ret 
// copied from an identical function in another client (function ?construct@CXTPPropertyGridItemEnum@ns_ROCX000004@@QAEPAXXZ)

namespace ns_ROCX000004 {
extern "C" __declspec(dllimport) void *__stdcall LoadLibraryA(const char *);

struct CXTPPropertyGridItemEnum {
    void *construct();
};

extern void *__fastcall sub_671140(void *);
extern void *__fastcall sub_672130(void *);
extern void __cdecl sub_630B8C(void *, int, int);

void *CXTPPropertyGridItemEnum::construct()
{
    void *p = sub_671140(this);
    void *q = sub_672130(p);
    *(void **)((char *)this + 0xd4) = q;
    sub_630B8C(this, 0, 0xd0);
    *(void **)((char *)this + 0xd0) = LoadLibraryA("UxTheme.dll");
    return this;
}
}
