// from server: 64% by colin
// roc 2007-08 004a80a0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a80a0
//
// 004a80a0  83ec0c               sub esp, 0xc
// 004a80a3  56                   push esi
// 004a80a4  6a00                 push 0
// 004a80a6  68f07d8800           push 0x887df0
// 004a80ab  8bf1                 mov esi, ecx
// 004a80ad  8b06                 mov eax, dword ptr [esi]
// 004a80af  6874718800           push 0x887174
// 004a80b4  6a00                 push 0
// 004a80b6  50                   push eax
// 004a80b7  e87a8c1800           call 0x630d36
// 004a80bc  83c414               add esp, 0x14
// 004a80bf  85c0                 test eax, eax
// 004a80c1  751e                 jne 0x4a80e1
// 004a80c3  68046e7800           push 0x786e04
// 004a80c8  8d4c2408             lea ecx, [esp + 8]
// 004a80cc  ff1510e77700         call dword ptr [0x77e710]
// 004a80d2  680c1e8400           push 0x841e0c
// 004a80d7  8d442408             lea eax, [esp + 8]
// 004a80db  50                   push eax
// 004a80dc  e8bd8a1800           call 0x630b9e
// 004a80e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a80e5  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a80e8  8b10                 mov edx, dword ptr [eax]
// 004a80ea  8b5208               mov edx, dword ptr [edx + 8]
// 004a80ed  51                   push ecx
// 004a80ee  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a80f1  51                   push ecx
// 004a80f2  8bc8                 mov ecx, eax
// 004a80f4  ffd2                 call edx
// 004a80f6  5e                   pop esi
// 004a80f7  83c40c               add esp, 0xc
// 004a80fa  c20400               ret 4

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void Process(void* arg);
};

extern "C" void* __cdecl sub_630D36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);
extern "C" void* __stdcall sub_77E710(void*);

void ChangePropertyItem::Process(void* arg)
{
    void* p = sub_630D36(field0, 0, (void*)0x887174, (void*)0x887DF0, 0);
    if (p == 0) {
        void* tmp;
        sub_77E710(&tmp);
        sub_630B9E((void*)0x841E0C, &tmp);
    }
    void* obj = *(void**)((char*)p + 0x18);
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[2];
    fn(obj, arg);
}
