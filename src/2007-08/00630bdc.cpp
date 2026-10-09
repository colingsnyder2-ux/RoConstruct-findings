// from server: 32% by colin
// roc 2007-08 00630bdc  unit: std::bad_alloc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00630bdc
//
// 00630bdc  6a10                 push 0x10
// 00630bde  68d09a8600           push 0x869ad0
// 00630be3  e8380a0000           call 0x631620
// 00630be8  33c0                 xor eax, eax
// 00630bea  8945e0               mov dword ptr [ebp - 0x20], eax
// 00630bed  8945fc               mov dword ptr [ebp - 4], eax
// 00630bf0  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00630bf3  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00630bf6  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00630bf9  7d13                 jge 0x630c0e
// 00630bfb  8b7508               mov esi, dword ptr [ebp + 8]
// 00630bfe  8bce                 mov ecx, esi
// 00630c00  ff5514               call dword ptr [ebp + 0x14]
// 00630c03  03750c               add esi, dword ptr [ebp + 0xc]
// 00630c06  897508               mov dword ptr [ebp + 8], esi
// 00630c09  ff45e4               inc dword ptr [ebp - 0x1c]
// 00630c0c  ebe5                 jmp 0x630bf3
// 00630c0e  c745e001000000       mov dword ptr [ebp - 0x20], 1
// 00630c15  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 00630c1c  e808000000           call 0x630c29
// 00630c21  e83f0a0000           call 0x631665
// 00630c26  c21400               ret 0x14

struct S {
    void f(int a, int b, int c, int d, int e);
};

extern "C" void __cdecl sub_631620(int);
extern "C" void __cdecl sub_631665();
extern "C" void __cdecl sub_630c29();

void S::f(int a, int b, int c, int d, int e)
{
    sub_631620(0x10);
    int i = 0;
    while (i >= e) {
        (*(void (__cdecl **)(int))(d))(a);
        a += b;
        i++;
    }
    sub_630c29();
    sub_631665();
}
