// from server: 100% by colin
// roc 2007-08 005bb0f0  unit: RBX::VModelInstance::?$FactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb0f0
//
// 005bb0f0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 005bb0f6  6a00                 push 0
// 005bb0f8  68c08f8900           push 0x898fc0
// 005bb0fd  684c1f8800           push 0x881f4c
// 005bb102  6a00                 push 0
// 005bb104  50                   push eax
// 005bb105  e82c5c0700           call 0x630d36
// 005bb10a  83c414               add esp, 0x14
// 005bb10d  85c0                 test eax, eax
// 005bb10f  7409                 je 0x5bb11a
// 005bb111  8b10                 mov edx, dword ptr [eax]
// 005bb113  8bc8                 mov ecx, eax
// 005bb115  8b4254               mov eax, dword ptr [edx + 0x54]
// 005bb118  ffe0                 jmp eax
// 005bb11a  c3                   ret 

struct RBX_VModelInstance {
    char pad[0xbc];
    void* field_bc;
    void FactoryProduct();
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);

void RBX_VModelInstance::FactoryProduct()
{
    void* p = sub_630d36(field_bc, 0, (void*)0x881f4c, (void*)0x898fc0, 0);
    if (p) {
        void** vt = *(void***)p;
        void* fn = vt[0x54 / 4];
        typedef void (__thiscall *Fn)(void*);
        ((Fn)fn)(p);
    }
}
