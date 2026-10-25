// from server: 100% by king_originala
// roc 2008-06 00562090  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00562090
//
// 00562090  56                   push esi
// 00562091  8d71b0               lea esi, [ecx - 0x50]
// 00562094  8bce                 mov ecx, esi
// 00562096  ff1540248000         call dword ptr [0x802440]
// 0056209c  f644240801           test byte ptr [esp + 8], 1
// 005620a1  7409                 je 0x5620ac
// 005620a3  56                   push esi
// 005620a4  e8d1e51300           call 0x6a067a
// 005620a9  83c404               add esp, 4
// 005620ac  8bc6                 mov eax, esi
// 005620ae  5e                   pop esi
// 005620af  c20400               ret 4

typedef void (__thiscall *DestroyFn)(void *);
extern DestroyFn destroyStream;
extern "C" void __cdecl deallocate(void *);

struct S {
    void *destroy(unsigned int flags);
};

void *S::destroy(unsigned int flags)
{
    void *base = reinterpret_cast<char *>(this) - 0x50;
    destroyStream(base);
    if (flags & 1)
        deallocate(base);
    return base;
}
