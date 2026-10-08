// from server: 69% by colin
// roc 2007-08 0073c31e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c31e
//
// 0073c31e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c322  8d02                 lea eax, [edx]
// 0073c324  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c327  33c8                 xor ecx, eax
// 0073c329  e8f046efff           call 0x630a1e
// 0073c32e  b8ac318400           mov eax, 0x8431ac
// 0073c333  e9e046efff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

void __cdecl func_0073c31e(int a, int b)
{
    int* p = (int*)b;
    sub_630a1e(*((int*)b - 1) ^ (int)p);
    sub_630a18();
}
