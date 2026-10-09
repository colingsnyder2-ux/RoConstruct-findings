// from server: 28% by colin
// roc 2007-08 00424ab0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424ab0
//
// 00424ab0  6aff                 push -1
// 00424ab2  6808b07300           push 0x73b008
// 00424ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00424abd  50                   push eax
// 00424abe  51                   push ecx
// 00424abf  56                   push esi
// 00424ac0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00424ac5  33c4                 xor eax, esp
// 00424ac7  50                   push eax
// 00424ac8  8d44240c             lea eax, [esp + 0xc]
// 00424acc  64a300000000         mov dword ptr fs:[0], eax
// 00424ad2  8bf1                 mov esi, ecx
// 00424ad4  89742408             mov dword ptr [esp + 8], esi
// 00424ad8  8d8eec000000         lea ecx, [esi + 0xec]
// 00424ade  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00424ae6  ff15ace67700         call dword ptr [0x77e6ac]
// 00424aec  8bce                 mov ecx, esi
// 00424aee  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00424af6  e8b5b71100           call 0x5402b0
// 00424afb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00424aff  64890d00000000       mov dword ptr fs:[0], ecx
// 00424b06  59                   pop ecx
// 00424b07  5e                   pop esi
// 00424b08  83c410               add esp, 0x10
// 00424b0b  c3                   ret 

struct S {
    char pad[0xec];
    void* field_ec;
    void destroy();
};

extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __cdecl sub_5402b0(void*);

void S::destroy()
{
    sub_77e6ac(&field_ec);
    sub_5402b0(this);
}
