// from server: 65% by colin
// roc 2007-08 0073c44e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c44e
//
// 0073c44e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c452  8d02                 lea eax, [edx]
// 0073c454  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c457  33c8                 xor ecx, eax
// 0073c459  e8c045efff           call 0x630a1e
// 0073c45e  b8e8338400           mov eax, 0x8433e8
// 0073c463  e9b045efff           jmp 0x630a18

struct S_0073c44e {
    void f(int a1);
};

extern "C" void __cdecl sub_00630a1e(void *, void *);
extern "C" void __cdecl sub_00630a18(void *);

void S_0073c44e::f(int a1)
{
    int *p = (int *)(a1 - 4);
    int v = *p ^ a1;
    sub_00630a1e((void *)v, (void *)a1);
    sub_00630a18((void *)0x8433e8);
}
