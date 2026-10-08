// from server: 61% by colin
// roc 2007-08 0073babe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073babe
//
// 0073babe  8b542408             mov edx, dword ptr [esp + 8]
// 0073bac2  8d02                 lea eax, [edx]
// 0073bac4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073bac7  33c8                 xor ecx, eax
// 0073bac9  e8504fefff           call 0x630a1e
// 0073bace  b8e0288400           mov eax, 0x8428e0
// 0073bad3  e9404fefff           jmp 0x630a18

struct S_0073babe {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_0073babe::f(int a1)
{
    int v = a1;
    sub_00630a1e(v ^ *(int *)(a1 - 4));
    sub_00630a18();
}
