// from server: 38% by colin
// roc 2007-08 00413ad0  unit: boost::any::H::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413ad0
//
// 00413ad0  6aff                 push -1
// 00413ad2  68188c7400           push 0x748c18
// 00413ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00413add  50                   push eax
// 00413ade  51                   push ecx
// 00413adf  56                   push esi
// 00413ae0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00413ae5  33c4                 xor eax, esp
// 00413ae7  50                   push eax
// 00413ae8  8d44240c             lea eax, [esp + 0xc]
// 00413aec  64a300000000         mov dword ptr fs:[0], eax
// 00413af2  8bf1                 mov esi, ecx
// 00413af4  89742408             mov dword ptr [esp + 8], esi
// 00413af8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00413afc  50                   push eax
// 00413afd  8d4e04               lea ecx, [esi + 4]
// 00413b00  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00413b08  c706a8717800         mov dword ptr [esi], 0x7871a8
// 00413b0e  ff159ce67700         call dword ptr [0x77e69c]
// 00413b14  8bc6                 mov eax, esi
// 00413b16  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00413b1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00413b21  59                   pop ecx
// 00413b22  5e                   pop esi
// 00413b23  83c410               add esp, 0x10
// 00413b26  c20400               ret 4

struct Holder {
    void* vtable;
    char pad[4];
    void* str;
    Holder(const void* other);
};

extern "C" void* __stdcall sub_77E69C(void*, const void*);

Holder::Holder(const void* other)
{
    vtable = (void*)0x7871A8;
    str = 0;
    sub_77E69C((char*)this + 4, other);
}
