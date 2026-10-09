// from server: 70% by colin
// roc 2007-08 004a7fe0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7fe0
//
// 004a7fe0  83ec0c               sub esp, 0xc
// 004a7fe3  56                   push esi
// 004a7fe4  6a00                 push 0
// 004a7fe6  68b0118900           push 0x8911b0
// 004a7feb  8bf1                 mov esi, ecx
// 004a7fed  8b06                 mov eax, dword ptr [esi]
// 004a7fef  6874718800           push 0x887174
// 004a7ff4  6a00                 push 0
// 004a7ff6  50                   push eax
// 004a7ff7  e83a8d1800           call 0x630d36
// 004a7ffc  83c414               add esp, 0x14
// 004a7fff  85c0                 test eax, eax
// 004a8001  751e                 jne 0x4a8021
// 004a8003  68046e7800           push 0x786e04
// 004a8008  8d4c2408             lea ecx, [esp + 8]
// 004a800c  ff1510e77700         call dword ptr [0x77e710]
// 004a8012  680c1e8400           push 0x841e0c
// 004a8017  8d442408             lea eax, [esp + 8]
// 004a801b  50                   push eax
// 004a801c  e87d8b1800           call 0x630b9e
// 004a8021  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8024  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a8028  51                   push ecx
// 004a8029  56                   push esi
// 004a802a  8bc8                 mov ecx, eax
// 004a802c  e8bffaffff           call 0x4a7af0
// 004a8031  8bc6                 mov eax, esi
// 004a8033  5e                   pop esi
// 004a8034  83c40c               add esp, 0xc
// 004a8037  c20400               ret 4

struct Reflection_PropertyDescriptor;
struct Reflection_ClassDescriptor;

struct Reflection_PropertyDescriptor {
    void* m_vtable;
};

struct Reflection_ClassDescriptor {
    void* m_vtable;
};

struct S_func_004a7fe0 {
    void* m_vtable;
    int m_unknown4;
    int f(int arg);
};

extern "C" int __cdecl sub_00630d36(void* a, int b, void* c, void* d, int e);
extern "C" void* __cdecl sub_00630b9e(void* a, void* b);
extern "C" void __cdecl sub_004a7af0(void* a, int b, void* c);
extern "C" void __stdcall sub_0077e710(void* a);

int S_func_004a7fe0::f(int arg)
{
    int result = sub_00630d36(m_vtable, 0, (void*)0x887174, (void*)0x8911b0, 0);
    if (result == 0) {
        char buf[4];
        sub_0077e710(buf);
        result = (int)sub_00630b9e(buf, (void*)0x841e0c);
    }
    sub_004a7af0((void*)result, m_unknown4, (void*)arg);
    return arg;
}
