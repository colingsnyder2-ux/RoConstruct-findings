// from server: 69% by colin
// roc 2007-08 00739c8e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739c8e
//
// 00739c8e  8b542408             mov edx, dword ptr [esp + 8]
// 00739c92  8d02                 lea eax, [edx]
// 00739c94  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739c97  33c8                 xor ecx, eax
// 00739c99  e8806defff           call 0x630a1e
// 00739c9e  b8bc048400           mov eax, 0x8404bc
// 00739ca3  e9706defff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

void __cdecl func_00739c8e(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    sub_630a18();
}
