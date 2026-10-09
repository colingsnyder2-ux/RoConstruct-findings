// from server: 35% by colin
// roc 2007-08 0046f570  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f570
//
// 0046f570  6aff                 push -1
// 0046f572  68c9e67300           push 0x73e6c9
// 0046f577  64a100000000         mov eax, dword ptr fs:[0]
// 0046f57d  50                   push eax
// 0046f57e  51                   push ecx
// 0046f57f  56                   push esi
// 0046f580  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046f585  33c4                 xor eax, esp
// 0046f587  50                   push eax
// 0046f588  8d44240c             lea eax, [esp + 0xc]
// 0046f58c  64a300000000         mov dword ptr fs:[0], eax
// 0046f592  8bf1                 mov esi, ecx
// 0046f594  89742408             mov dword ptr [esp + 8], esi
// 0046f598  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046f59c  50                   push eax
// 0046f59d  ff159ce67700         call dword ptr [0x77e69c]
// 0046f5a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f5a7  51                   push ecx
// 0046f5a8  8d4e1c               lea ecx, [esi + 0x1c]
// 0046f5ab  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046f5b3  ff159ce67700         call dword ptr [0x77e69c]
// 0046f5b9  8bc6                 mov eax, esi
// 0046f5bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046f5bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0046f5c6  59                   pop ecx
// 0046f5c7  5e                   pop esi
// 0046f5c8  83c410               add esp, 0x10
// 0046f5cb  c20800               ret 8

struct S_func_0046f570 {
    char pad0[0x1c];
    char field1c[0x10];
    char field2c[0x10];
    S_func_0046f570* func(const void* a, const void* b);
};

extern "C" void __stdcall G1_func_0077e69c(const void*, void*);

S_func_0046f570* S_func_0046f570::func(const void* a, const void* b)
{
    G1_func_0077e69c(a, field1c);
    G1_func_0077e69c(b, field2c);
    return this;
}
