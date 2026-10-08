// from server: 61% by colin
// roc 2007-08 0073a63e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073a63e
//
// 0073a63e  8b542408             mov edx, dword ptr [esp + 8]
// 0073a642  8d02                 lea eax, [edx]
// 0073a644  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073a647  33c8                 xor ecx, eax
// 0073a649  e8d063efff           call 0x630a1e
// 0073a64e  b858118400           mov eax, 0x841158
// 0073a653  e9c063efff           jmp 0x630a18

struct CSpinButtonCtrl {
    void sub_0073a63e(int);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void CSpinButtonCtrl::sub_0073a63e(int a1)
{
    int v = *(int*)(a1 - 4) ^ a1;
    sub_00630a1e(v);
    sub_00630a18();
}
