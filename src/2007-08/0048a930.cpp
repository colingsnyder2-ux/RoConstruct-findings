// from server: 33% by colin
// roc 2007-08 0048a930  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a930
//
// 0048a930  6aff                 push -1
// 0048a932  68d8a47400           push 0x74a4d8
// 0048a937  64a100000000         mov eax, dword ptr fs:[0]
// 0048a93d  50                   push eax
// 0048a93e  51                   push ecx
// 0048a93f  56                   push esi
// 0048a940  a188518b00           mov eax, dword ptr [0x8b5188]
// 0048a945  33c4                 xor eax, esp
// 0048a947  50                   push eax
// 0048a948  8d44240c             lea eax, [esp + 0xc]
// 0048a94c  64a300000000         mov dword ptr fs:[0], eax
// 0048a952  8bf1                 mov esi, ecx
// 0048a954  89742408             mov dword ptr [esp + 8], esi
// 0048a958  33c9                 xor ecx, ecx
// 0048a95a  3bf1                 cmp esi, ecx
// 0048a95c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0048a960  7403                 je 0x48a965
// 0048a962  8d4e10               lea ecx, [esi + 0x10]
// 0048a965  e8d6900000           call 0x493a40
// 0048a96a  8bce                 mov ecx, esi
// 0048a96c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048a974  e8a7560e00           call 0x570020
// 0048a979  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048a97d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a984  59                   pop ecx
// 0048a985  5e                   pop esi
// 0048a986  83c410               add esp, 0x10
// 0048a989  c3                   ret 

struct S {
    char pad[0x10];
    int field10;
    int f();
};

extern "C" void __stdcall sub_493A40(int);
extern "C" void __stdcall sub_570020(int);

int S::f()
{
    int *p = 0;
    if (this == 0)
        p = &this->field10;
    sub_493A40((int)p);
    sub_570020((int)this);
    return 0;
}
