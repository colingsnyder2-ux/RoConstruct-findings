// from server: 100% by colin
// roc 2007-08 0045da50  unit: HH::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045da50
//
// 0045da50  56                   push esi
// 0045da51  8bf1                 mov esi, ecx
// 0045da53  8b4604               mov eax, dword ptr [esi + 4]
// 0045da56  85c0                 test eax, eax
// 0045da58  c706c0417900         mov dword ptr [esi], 0x7941c0
// 0045da5e  7409                 je 0x45da69
// 0045da60  50                   push eax
// 0045da61  e8c0241d00           call 0x62ff26
// 0045da66  83c404               add esp, 4
// 0045da69  f644240801           test byte ptr [esp + 8], 1
// 0045da6e  7409                 je 0x45da79
// 0045da70  56                   push esi
// 0045da71  e8ec211d00           call 0x62fc62
// 0045da76  83c404               add esp, 4
// 0045da79  8bc6                 mov eax, esi
// 0045da7b  5e                   pop esi
// 0045da7c  c20400               ret 4

extern "C" void __cdecl func_0062ff26(void*);
extern "C" void __cdecl func_0062fc62(void*);

struct HH_CArray
{
    void* vtable;
    void* data;
    HH_CArray* destroy(unsigned int flags);
};

HH_CArray* HH_CArray::destroy(unsigned int flags)
{
    vtable = (void*)0x7941c0;
    if (data)
    {
        func_0062ff26(data);
    }
    if (flags & 1)
    {
        func_0062fc62(this);
    }
    return this;
}
