// from server: 100% by colin
// roc 2008-06 004c8b20  unit: RBX::Network::DirectPhysicsReceiver  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c8b20
//
// 004c8b20  6aff                 push -1
// 004c8b22  68b1967c00           push 0x7c96b1
// 004c8b27  64a100000000         mov eax, dword ptr fs:[0]
// 004c8b2d  50                   push eax
// 004c8b2e  64892500000000       mov dword ptr fs:[0], esp
// 004c8b35  51                   push ecx
// 004c8b36  56                   push esi
// 004c8b37  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c8b3b  89742404             mov dword ptr [esp + 4], esi
// 004c8b3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c8b47  85f6                 test esi, esi
// 004c8b49  740c                 je 0x4c8b57
// 004c8b4b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c8b4f  50                   push eax
// 004c8b50  8bce                 mov ecx, esi
// 004c8b52  e879f2ffff           call 0x4c7dd0
// 004c8b57  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c8b5b  8bc6                 mov eax, esi
// 004c8b5d  5e                   pop esi
// 004c8b5e  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8b65  83c410               add esp, 0x10
// 004c8b68  c20800               ret 8

inline void* operator new(unsigned int, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct S
{
    S(void*);
};

S* __stdcall sub_4CB010(void* argument, void* storage)
{
    new (storage) S(argument);
    return static_cast<S*>(storage);
}
