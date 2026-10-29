// roc 2010-06 0051f4f0  unit: CSHA1  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051f4f0
//
// 0051f4f0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0051f4f3  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0051f4f6  8b542404             mov edx, dword ptr [esp + 4]
// 0051f4fa  50                   push eax
// 0051f4fb  51                   push ecx
// 0051f4fc  52                   push edx
// 0051f4fd  e8be160000           call 0x520bc0
// 0051f502  83c40c               add esp, 0xc
// 0051f505  c20400               ret 4
// copied from an identical function in another client (function ?f@CSHA1@ns_ROCX000000@@QAEHH@Z)

namespace ns_ROCX000000 {
struct CSHA1
{
    int a[11];
    int f(int);
};

extern "C" int __cdecl sub_5722d0(int, int, int);

int CSHA1::f(int value)
{
    return sub_5722d0(value, a[10], a[8]);
}
}
