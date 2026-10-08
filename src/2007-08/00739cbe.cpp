// from server: 64% by colin
// roc 2007-08 00739cbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739cbe
//
// 00739cbe  8b542408             mov edx, dword ptr [esp + 8]
// 00739cc2  8d02                 lea eax, [edx]
// 00739cc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739cc7  33c8                 xor ecx, eax
// 00739cc9  e8506defff           call 0x630a1e
// 00739cce  b8e8048400           mov eax, 0x8404e8
// 00739cd3  e9406defff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18();

int __cdecl sub_739cbe(int, int, int* a3)
{
    int* p = a3;
    sub_630a1e(*(p - 1) ^ (int)p);
    return (int)sub_630a18;
}
