// from server: 26% by colin
// roc 2007-08 0048a740  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a740
//
// 0048a740  6aff                 push -1
// 0048a742  6841717400           push 0x747141
// 0048a747  64a100000000         mov eax, dword ptr fs:[0]
// 0048a74d  50                   push eax
// 0048a74e  51                   push ecx
// 0048a74f  56                   push esi
// 0048a750  57                   push edi
// 0048a751  a188518b00           mov eax, dword ptr [0x8b5188]
// 0048a756  33c4                 xor eax, esp
// 0048a758  50                   push eax
// 0048a759  8d442410             lea eax, [esp + 0x10]
// 0048a75d  64a300000000         mov dword ptr fs:[0], eax
// 0048a763  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048a767  89742420             mov dword ptr [esp + 0x20], esi
// 0048a76b  8974240c             mov dword ptr [esp + 0xc], esi
// 0048a76f  85f6                 test esi, esi
// 0048a771  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048a779  7412                 je 0x48a78d
// 0048a77b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048a77f  57                   push edi
// 0048a780  8bce                 mov ecx, esi
// 0048a782  e8b9f1ffff           call 0x489940
// 0048a787  8b470c               mov eax, dword ptr [edi + 0xc]
// 0048a78a  89460c               mov dword ptr [esi + 0xc], eax
// 0048a78d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048a791  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a798  59                   pop ecx
// 0048a799  5f                   pop edi
// 0048a79a  5e                   pop esi
// 0048a79b  83c410               add esp, 0x10
// 0048a79e  c3                   ret 

struct S {
    void f(void* a, void* b);
};

extern "C" void __stdcall sub_489940(void*, void*);

void S::f(void* a, void* b)
{
    if (a != 0) {
        sub_489940(a, b);
        *(int*)((char*)a + 0xc) = *(int*)((char*)b + 0xc);
    }
}
