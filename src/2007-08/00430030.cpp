// from server: 37% by colin
// roc 2007-08 00430030  unit: RBX::VFillToolColor::?$Listener  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430030
//
// 00430030  6aff                 push -1
// 00430032  68fad87300           push 0x73d8fa
// 00430037  64a100000000         mov eax, dword ptr fs:[0]
// 0043003d  50                   push eax
// 0043003e  51                   push ecx
// 0043003f  56                   push esi
// 00430040  a188518b00           mov eax, dword ptr [0x8b5188]
// 00430045  33c4                 xor eax, esp
// 00430047  50                   push eax
// 00430048  8d44240c             lea eax, [esp + 0xc]
// 0043004c  64a300000000         mov dword ptr fs:[0], eax
// 00430052  68cc000000           push 0xcc
// 00430057  e89afe1f00           call 0x62fef6
// 0043005c  8bf0                 mov esi, eax
// 0043005e  83c404               add esp, 4
// 00430061  89742408             mov dword ptr [esp + 8], esi
// 00430065  33c0                 xor eax, eax
// 00430067  3bf0                 cmp esi, eax
// 00430069  89442414             mov dword ptr [esp + 0x14], eax
// 0043006d  740f                 je 0x43007e
// 0043006f  8bce                 mov ecx, esi
// 00430071  e82a2e2000           call 0x632ea0
// 00430076  c7061ca77800         mov dword ptr [esi], 0x78a71c
// 0043007c  8bc6                 mov eax, esi
// 0043007e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00430082  64890d00000000       mov dword ptr fs:[0], ecx
// 00430089  59                   pop ecx
// 0043008a  5e                   pop esi
// 0043008b  83c410               add esp, 0x10
// 0043008e  c3                   ret 

struct S_func_00430030 {
    void* m_vtable;
    int f();
};

extern "C" void* __cdecl sub_0062FEF6(unsigned int size);
extern "C" void __cdecl sub_00632EA0(void* p);

int S_func_00430030::f()
{
    S_func_00430030* p = (S_func_00430030*)sub_0062FEF6(0xcc);
    if (p != 0) {
        sub_00632EA0(p);
        p->m_vtable = (void*)0x78a71c;
    }
    return (int)p;
}
