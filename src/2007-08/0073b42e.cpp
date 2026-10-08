// from server: 61% by colin
// roc 2007-08 0073b42e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b42e
//
// 0073b42e  8b542408             mov edx, dword ptr [esp + 8]
// 0073b432  8d02                 lea eax, [edx]
// 0073b434  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b437  33c8                 xor ecx, eax
// 0073b439  e8e055efff           call 0x630a1e
// 0073b43e  b834218400           mov eax, 0x842134
// 0073b443  e9d055efff           jmp 0x630a18

struct S_0073b42e {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18(void);

void S_0073b42e::f(int a1)
{
    int v = a1;
    sub_00630a1e(v ^ *(int *)(a1 - 4));
    sub_00630a18();
}
