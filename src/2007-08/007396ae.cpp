// from server: 61% by colin
// roc 2007-08 007396ae  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007396ae
//
// 007396ae  8b542408             mov edx, dword ptr [esp + 8]
// 007396b2  8d02                 lea eax, [edx]
// 007396b4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007396b7  33c8                 xor ecx, eax
// 007396b9  e86073efff           call 0x630a1e
// 007396be  b8e0fc8300           mov eax, 0x83fce0
// 007396c3  e95073efff           jmp 0x630a18

struct S_007396ae {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_007396ae::f(int a1)
{
    int v = *(int *)(a1 - 4) ^ a1;
    sub_00630a1e(v);
    sub_00630a18();
}
