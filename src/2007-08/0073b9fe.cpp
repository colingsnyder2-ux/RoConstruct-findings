// from server: 61% by colin
// roc 2007-08 0073b9fe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b9fe
//
// 0073b9fe  8b542408             mov edx, dword ptr [esp + 8]
// 0073ba02  8d02                 lea eax, [edx]
// 0073ba04  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ba07  33c8                 xor ecx, eax
// 0073ba09  e81050efff           call 0x630a1e
// 0073ba0e  b830288400           mov eax, 0x842830
// 0073ba13  e90050efff           jmp 0x630a18

struct S_0073b9fe {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_0073b9fe::f(int a1)
{
    int v = *(int *)(a1 - 4) ^ a1;
    sub_00630a1e(v);
    sub_00630a18();
}
