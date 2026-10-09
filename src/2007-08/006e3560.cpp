// from server: 24% by colin
// roc 2007-08 006e3560  unit: CXTPDockingPaneTabbedContainer  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3560
//
// 006e3560  6aff                 push -1
// 006e3562  6818257400           push 0x742518
// 006e3567  64a100000000         mov eax, dword ptr fs:[0]
// 006e356d  50                   push eax
// 006e356e  51                   push ecx
// 006e356f  56                   push esi
// 006e3570  a188518b00           mov eax, dword ptr [0x8b5188]
// 006e3575  33c4                 xor eax, esp
// 006e3577  50                   push eax
// 006e3578  8d44240c             lea eax, [esp + 0xc]
// 006e357c  64a300000000         mov dword ptr fs:[0], eax
// 006e3582  8bf1                 mov esi, ecx
// 006e3584  89742408             mov dword ptr [esp + 8], esi
// 006e3588  c7061ca17d00         mov dword ptr [esi], 0x7da11c
// 006e358e  837e2000             cmp dword ptr [esi + 0x20], 0
// 006e3592  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006e359a  7405                 je 0x6e35a1
// 006e359c  e84bc7f4ff           call 0x62fcec
// 006e35a1  8bce                 mov ecx, esi
// 006e35a3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e35ab  e830d0f4ff           call 0x6305e0
// 006e35b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e35b4  64890d00000000       mov dword ptr fs:[0], ecx
// 006e35bb  59                   pop ecx
// 006e35bc  5e                   pop esi
// 006e35bd  83c410               add esp, 0x10
// 006e35c0  c3                   ret 

struct CXTPDockingPaneTabbedContainer
{
    void* vtable;
    char pad[0x1c];
    void* field_20;
    void Destroy();
    void BaseDestruct();
};

void CXTPDockingPaneTabbedContainer::Destroy()
{
    vtable = (void*)0x7da11c;
    if (field_20 != 0)
        BaseDestruct();
    BaseDestruct();
}
