// from server: 100% by king_originala
// roc 2008-06 004cb010  unit: RBX::Network::RoundRobinPhysicsSender  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb010
//
// 004cb010  6aff                 push -1
// 004cb012  68b1967c00           push 0x7c96b1
// 004cb017  64a100000000         mov eax, dword ptr fs:[0]
// 004cb01d  50                   push eax
// 004cb01e  64892500000000       mov dword ptr fs:[0], esp
// 004cb025  51                   push ecx
// 004cb026  56                   push esi
// 004cb027  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004cb02b  89742404             mov dword ptr [esp + 4], esi
// 004cb02f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cb037  85f6                 test esi, esi
// 004cb039  740c                 je 0x4cb047
// 004cb03b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cb03f  50                   push eax
// 004cb040  8bce                 mov ecx, esi
// 004cb042  e849edffff           call 0x4c9d90
// 004cb047  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cb04b  8bc6                 mov eax, esi
// 004cb04d  5e                   pop esi
// 004cb04e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb055  83c410               add esp, 0x10
// 004cb058  c20800               ret 8

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
