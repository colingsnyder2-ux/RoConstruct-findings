// from server: 26% by colin
// roc 2007-08 005c58d0  unit: lua_exception  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c58d0
//
// 005c58d0  55                   push ebp
// 005c58d1  8bec                 mov ebp, esp
// 005c58d3  6aff                 push -1
// 005c58d5  6880997500           push 0x759980
// 005c58da  64a100000000         mov eax, dword ptr fs:[0]
// 005c58e0  50                   push eax
// 005c58e1  64892500000000       mov dword ptr fs:[0], esp
// 005c58e8  83ec1c               sub esp, 0x1c
// 005c58eb  53                   push ebx
// 005c58ec  56                   push esi
// 005c58ed  8b7508               mov esi, dword ptr [ebp + 8]
// 005c58f0  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 005c58f3  33c0                 xor eax, eax
// 005c58f5  57                   push edi
// 005c58f6  8945e0               mov dword ptr [ebp - 0x20], eax
// 005c58f9  8945fc               mov dword ptr [ebp - 4], eax
// 005c58fc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c58ff  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c5902  50                   push eax
// 005c5903  8d55d8               lea edx, [ebp - 0x28]
// 005c5906  56                   push esi
// 005c5907  894dd8               mov dword ptr [ebp - 0x28], ecx
// 005c590a  895670               mov dword ptr [esi + 0x70], edx
// 005c590d  ff550c               call dword ptr [ebp + 0xc]
// 005c5910  83c408               add esp, 8
// 005c5913  eb66                 jmp 0x5c597b

struct lua_exception {
    void func_005c58d0(int a, int b, int c);
};

void lua_exception::func_005c58d0(int a, int b, int c)
{
    int *p = (int *)this;
    int old = p[0x1c];
    p[0x1c] = (int)&a;
    ((void (__cdecl *)(int *, int))b)(p, c);
    p[0x1c] = old;
}
