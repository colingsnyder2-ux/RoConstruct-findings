// from server: 69% by colin
// roc 2007-08 00739fbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739fbe
//
// 00739fbe  8b542408             mov edx, dword ptr [esp + 8]
// 00739fc2  8d02                 lea eax, [edx]
// 00739fc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739fc7  33c8                 xor ecx, eax
// 00739fc9  e8506aefff           call 0x630a1e
// 00739fce  b86c098400           mov eax, 0x84096c
// 00739fd3  e9406aefff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

void __cdecl func_00739fbe(int, int* p)
{
    int v = *(p - 1);
    sub_630a1e(v ^ (int)p);
    sub_630a18();
}
