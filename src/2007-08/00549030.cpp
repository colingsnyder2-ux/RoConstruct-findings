// from server: 88% by colin
// roc 2007-08 00549030  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549030
//
// 00549030  56                   push esi
// 00549031  8d71a8               lea esi, [ecx - 0x58]
// 00549034  8bce                 mov ecx, esi
// 00549036  ff155ce67700         call dword ptr [0x77e65c]
// 0054903c  f644240801           test byte ptr [esp + 8], 1
// 00549041  7409                 je 0x54904c
// 00549043  56                   push esi
// 00549044  e8196c0e00           call 0x62fc62
// 00549049  83c404               add esp, 4
// 0054904c  8bc6                 mov eax, esi
// 0054904e  5e                   pop esi
// 0054904f  c20400               ret 4

struct Inner {
    void destroy();
};

struct Outer {
    char pad[0x58];
    Inner inner;
    Outer* scalar_deleting_destructor(unsigned int flags);
};

extern "C" void __cdecl free_mem(void*);

Outer* Outer::scalar_deleting_destructor(unsigned int flags)
{
    Outer* self = (Outer*)((char*)this - 0x58);
    self->inner.destroy();
    if (flags & 1) {
        free_mem(self);
    }
    return self;
}
