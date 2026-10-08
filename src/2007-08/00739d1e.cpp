// from server: 61% by colin
// roc 2007-08 00739d1e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739d1e
//
// 00739d1e  8b542408             mov edx, dword ptr [esp + 8]
// 00739d22  8d02                 lea eax, [edx]
// 00739d24  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739d27  33c8                 xor ecx, eax
// 00739d29  e8f06cefff           call 0x630a1e
// 00739d2e  b840058400           mov eax, 0x840540
// 00739d33  e9e06cefff           jmp 0x630a18

struct S_00739d1e {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_00739d1e::f(int a1)
{
    int v = *(int *)(a1 - 4) ^ a1;
    sub_00630a1e(v);
    sub_00630a18();
}
