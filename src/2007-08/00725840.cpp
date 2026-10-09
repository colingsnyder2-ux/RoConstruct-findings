// from server: 45% by colin
// roc 2007-08 00725840  unit: boost::thread_resource_error  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725840
//
// 00725840  6aff                 push -1
// 00725842  6899407400           push 0x744099
// 00725847  64a100000000         mov eax, dword ptr fs:[0]
// 0072584d  50                   push eax
// 0072584e  83ec44               sub esp, 0x44
// 00725851  a188518b00           mov eax, dword ptr [0x8b5188]
// 00725856  33c4                 xor eax, esp
// 00725858  50                   push eax
// 00725859  8d442448             lea eax, [esp + 0x48]
// 0072585d  64a300000000         mov dword ptr fs:[0], eax
// 00725863  6808657800           push 0x786508
// 00725868  8d4c2408             lea ecx, [esp + 8]
// 0072586c  ff1598e67700         call dword ptr [0x77e698]
// 00725872  8d442404             lea eax, [esp + 4]
// 00725876  50                   push eax
// 00725877  8d4c2424             lea ecx, [esp + 0x24]
// 0072587b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00725883  e838cccdff           call 0x4024c0
// 00725888  6878f78300           push 0x83f778
// 0072588d  8d4c2424             lea ecx, [esp + 0x24]
// 00725891  51                   push ecx
// 00725892  c74424286c4e7800     mov dword ptr [esp + 0x28], 0x784e6c
// 0072589a  e8ffb2f0ff           call 0x630b9e

extern "C" {
    int __stdcall sub_4024C0(int);
    int __stdcall sub_630B9E(int, int);
    int __stdcall sub_77E698(int, int);
}

struct S {
    void f();
};

void S::f()
{
    char buf[0x44];
    int local;
    int v;

    sub_77E698((int)buf, 0x786508);
    local = 0;
    sub_4024C0((int)&v);
    *(int*)(buf + 0x20) = 0x784E6C;
    sub_630B9E((int)buf, 0x83F778);
}
