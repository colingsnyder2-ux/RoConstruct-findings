// from server: 65% by colin
// roc 2007-08 0073c41e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c41e
//
// 0073c41e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c422  8d02                 lea eax, [edx]
// 0073c424  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c427  33c8                 xor ecx, eax
// 0073c429  e8f045efff           call 0x630a1e
// 0073c42e  b8bc338400           mov eax, 0x8433bc
// 0073c433  e9e045efff           jmp 0x630a18

struct S_0073c41e {
    void f(int a1, int a2);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_0073c41e::f(int a1, int a2)
{
    int v = *(int *)(a2 - 4) ^ a2;
    sub_00630a1e(v);
    sub_00630a18();
}
