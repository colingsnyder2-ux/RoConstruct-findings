// from server: 65% by colin
// roc 2007-08 0073901e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073901e
//
// 0073901e  8b542408             mov edx, dword ptr [esp + 8]
// 00739022  8d02                 lea eax, [edx]
// 00739024  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739027  33c8                 xor ecx, eax
// 00739029  e8f079efff           call 0x630a1e
// 0073902e  b800f18300           mov eax, 0x83f100
// 00739033  e9e079efff           jmp 0x630a18

struct CSpinButtonCtrl {
    void sub_0073901e(int, int);
};

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18();

void CSpinButtonCtrl::sub_0073901e(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    sub_630a18();
}
