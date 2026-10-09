// from server: 68% by colin
// roc 2007-08 004a7f80  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7f80
//
// 004a7f80  83ec0c               sub esp, 0xc
// 004a7f83  56                   push esi
// 004a7f84  6a00                 push 0
// 004a7f86  68107d8800           push 0x887d10
// 004a7f8b  8bf1                 mov esi, ecx
// 004a7f8d  8b06                 mov eax, dword ptr [esi]
// 004a7f8f  6874718800           push 0x887174
// 004a7f94  6a00                 push 0
// 004a7f96  50                   push eax
// 004a7f97  e89a8d1800           call 0x630d36
// 004a7f9c  83c414               add esp, 0x14
// 004a7f9f  85c0                 test eax, eax
// 004a7fa1  751e                 jne 0x4a7fc1
// 004a7fa3  68046e7800           push 0x786e04
// 004a7fa8  8d4c2408             lea ecx, [esp + 8]
// 004a7fac  ff1510e77700         call dword ptr [0x77e710]
// 004a7fb2  680c1e8400           push 0x841e0c
// 004a7fb7  8d442408             lea eax, [esp + 8]
// 004a7fbb  50                   push eax
// 004a7fbc  e8dd8b1800           call 0x630b9e
// 004a7fc1  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a7fc4  8b4604               mov eax, dword ptr [esi + 4]
// 004a7fc7  8b11                 mov edx, dword ptr [ecx]
// 004a7fc9  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a7fcd  8b5204               mov edx, dword ptr [edx + 4]
// 004a7fd0  50                   push eax
// 004a7fd1  56                   push esi
// 004a7fd2  ffd2                 call edx
// 004a7fd4  8bc6                 mov eax, esi
// 004a7fd6  5e                   pop esi
// 004a7fd7  83c40c               add esp, 0xc
// 004a7fda  c20400               ret 4

struct RBX_Reflection_PropertyDescriptor;

struct RBX_Network_Replicator_ChangePropertyItem
{
    void* field0;
    void* field4;
    RBX_Reflection_PropertyDescriptor* getPropertyDescriptor();
    void* func4(void* arg);
};

extern "C" void* __cdecl sub_00630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __cdecl sub_00630b9e(void* a, void* b);
extern "C" void* __stdcall sub_0077e710(void* a);

void* RBX_Network_Replicator_ChangePropertyItem::func4(void* arg)
{
    void* result = sub_00630d36(field0, 0, (void*)0x887174, (void*)0x887d10, 0);
    if (result == 0)
    {
        void* tmp;
        sub_0077e710(&tmp);
        sub_00630b9e(&tmp, (void*)0x841e0c);
        result = tmp;
    }
    void* vtable = *(void**)result;
    void* fn = *(void**)((char*)vtable + 4);
    void* a = field4;
    void* b = arg;
    typedef void* (__thiscall *FnType)(void*, void*, void*);
    ((FnType)fn)(result, a, b);
    return arg;
}
