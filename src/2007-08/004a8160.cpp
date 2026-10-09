// from server: 50% by colin
// roc 2007-08 004a8160  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8160
//
// 004a8160  83ec0c               sub esp, 0xc
// 004a8163  56                   push esi
// 004a8164  6a00                 push 0
// 004a8166  68a87d8800           push 0x887da8
// 004a816b  8bf1                 mov esi, ecx
// 004a816d  8b06                 mov eax, dword ptr [esi]
// 004a816f  6874718800           push 0x887174
// 004a8174  6a00                 push 0
// 004a8176  50                   push eax
// 004a8177  e8ba8b1800           call 0x630d36
// 004a817c  83c414               add esp, 0x14
// 004a817f  85c0                 test eax, eax
// 004a8181  751e                 jne 0x4a81a1
// 004a8183  68046e7800           push 0x786e04
// 004a8188  8d4c2408             lea ecx, [esp + 8]
// 004a818c  ff1510e77700         call dword ptr [0x77e710]
// 004a8192  680c1e8400           push 0x841e0c
// 004a8197  8d442408             lea eax, [esp + 8]
// 004a819b  50                   push eax
// 004a819c  e8fd891800           call 0x630b9e
// 004a81a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a81a5  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a81a8  8b10                 mov edx, dword ptr [eax]
// 004a81aa  8b5208               mov edx, dword ptr [edx + 8]
// 004a81ad  51                   push ecx
// 004a81ae  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a81b1  51                   push ecx
// 004a81b2  8bc8                 mov ecx, eax
// 004a81b4  ffd2                 call edx
// 004a81b6  5e                   pop esi
// 004a81b7  83c40c               add esp, 0xc
// 004a81ba  c20400               ret 4

struct ChangePropertyItem {
    void* m_pDescriptor;
    void* m_pReplicator;
    void ChangePropertyItemFunc(int);
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_630B9E(int, int);
extern "C" void* __stdcall sub_77E710(int);
extern "C" void __stdcall sub_77E710_bad_cast(int);

void ChangePropertyItem::ChangePropertyItemFunc(int a)
{
    int result = sub_630D36(*(int*)this, 0, 0x887174, 0x887da8, 0);
    if (result == 0)
    {
        int local;
        sub_77E710_bad_cast(0x786e04);
        sub_630B9E(0x841e0c, (int)&local);
    }
    int* p = (int*)result;
    int* q = (int*)p[0x18 / 4];
    int* vt = (int*)*q;
    typedef void (__thiscall *Fn)(void*, int, int);
    Fn fn = (Fn)vt[8 / 4];
    fn(q, *(int*)((char*)this + 4), a);
}
