// from server: 93% by colin
// roc 2007-08 0049d600  unit: RBX::Network::Server  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d600
//
// 0049d600  56                   push esi
// 0049d601  8bf1                 mov esi, ecx
// 0049d603  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0049d609  85c0                 test eax, eax
// 0049d60b  7435                 je 0x49d642
// 0049d60d  53                   push ebx
// 0049d60e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0049d614  57                   push edi
// 0049d615  8b7808               mov edi, dword ptr [eax + 8]
// 0049d618  397804               cmp dword ptr [eax + 4], edi
// 0049d61b  7602                 jbe 0x49d61f
// 0049d61d  ffd3                 call ebx
// 0049d61f  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0049d625  8b7004               mov esi, dword ptr [eax + 4]
// 0049d628  3b7008               cmp esi, dword ptr [eax + 8]
// 0049d62b  7602                 jbe 0x49d62f
// 0049d62d  ffd3                 call ebx
// 0049d62f  6800c64900           push 0x49c600
// 0049d634  57                   push edi
// 0049d635  56                   push esi
// 0049d636  e8e5f2ffff           call 0x49c920
// 0049d63b  83c40c               add esp, 0xc
// 0049d63e  5f                   pop edi
// 0049d63f  5b                   pop ebx
// 0049d640  5e                   pop esi
// 0049d641  c3                   ret 
// 0049d642  33c0                 xor eax, eax
// 0049d644  5e                   pop esi
// 0049d645  c3                   ret 

struct T_func_0049d600 {
    void m();
};

extern "C" void __stdcall func_0049c920(int, int, int);
extern "C" void __stdcall func_0049c600();
extern void* G_func_0077e6d8;

void T_func_0049d600::m()
{
    int* p = *(int**)((char*)this + 0xc0);
    if (p == 0)
        return;
    void (*fn)() = *(void(**)())&G_func_0077e6d8;
    int a = p[2];
    if ((unsigned)p[1] > (unsigned)a)
        fn();
    p = *(int**)((char*)this + 0xc0);
    int b = p[1];
    if ((unsigned)b > (unsigned)p[2])
        fn();
    func_0049c920(b, a, (int)&func_0049c600);
}
