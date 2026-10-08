// from server: 57% by colin
// roc 2007-08 0073b48e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b48e
//
// 0073b48e  8b542408             mov edx, dword ptr [esp + 8]
// 0073b492  8d02                 lea eax, [edx]
// 0073b494  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b497  33c8                 xor ecx, eax
// 0073b499  e88055efff           call 0x630a1e
// 0073b49e  b88c218400           mov eax, 0x84218c
// 0073b4a3  e97055efff           jmp 0x630a18

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18(int);

struct CSpinButtonCtrl {
    void sub_0073b48e(int a1);
};

void CSpinButtonCtrl::sub_0073b48e(int a1)
{
    int *p = (int *)(a1 + 4);
    int v = *(p - 1);
    v ^= (int)p;
    sub_00630a1e(v);
    sub_00630a18(0x84218c);
}
