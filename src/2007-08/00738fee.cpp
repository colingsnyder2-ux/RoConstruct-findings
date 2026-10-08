// from server: 61% by colin
// roc 2007-08 00738fee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738fee
//
// 00738fee  8b542408             mov edx, dword ptr [esp + 8]
// 00738ff2  8d02                 lea eax, [edx]
// 00738ff4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00738ff7  33c8                 xor ecx, eax
// 00738ff9  e8207aefff           call 0x630a1e
// 00738ffe  b8d4f08300           mov eax, 0x83f0d4
// 00739003  e9107aefff           jmp 0x630a18

struct CSpinButtonCtrl
{
    void OnNcDestroy(int a1);
};

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18();

void CSpinButtonCtrl::OnNcDestroy(int a1)
{
    int* p = (int*)a1;
    int v = *(int*)((char*)p - 4);
    sub_630a1e(v ^ (int)p);
    sub_630a18();
}
