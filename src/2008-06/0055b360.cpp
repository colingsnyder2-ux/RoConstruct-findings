// from server: 100% by king_originala
// roc 2008-06 0055b360  unit: RBX::VInstance::?$NonFactoryProduct  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055b360
//
// 0055b360  57                   push edi
// 0055b361  8bf9                 mov edi, ecx
// 0055b363  e8b8faf2ff           call 0x48ae20
// 0055b368  85c0                 test eax, eax
// 0055b36a  7448                 je 0x55b3b4
// 0055b36c  53                   push ebx
// 0055b36d  55                   push ebp
// 0055b36e  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0055b374  56                   push esi
// 0055b375  eb09                 jmp 0x55b380
// 0055b377  8da42400000000       lea esp, [esp]
// 0055b37e  8bff                 mov edi, edi
// 0055b380  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 0055b386  8b4610               mov eax, dword ptr [esi + 0x10]
// 0055b389  2b460c               sub eax, dword ptr [esi + 0xc]
// 0055b38c  8b9f04010000         mov ebx, dword ptr [edi + 0x104]
// 0055b392  c1f803               sar eax, 3
// 0055b395  85c0                 test eax, eax
// 0055b397  7702                 ja 0x55b39b
// 0055b399  ffd5                 call ebp
// 0055b39b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0055b39e  8b09                 mov ecx, dword ptr [ecx]
// 0055b3a0  53                   push ebx
// 0055b3a1  e84af5ffff           call 0x55a8f0
// 0055b3a6  8bcf                 mov ecx, edi
// 0055b3a8  e873faf2ff           call 0x48ae20
// 0055b3ad  85c0                 test eax, eax
// 0055b3af  75cf                 jne 0x55b380
// 0055b3b1  5e                   pop esi
// 0055b3b2  5d                   pop ebp
// 0055b3b3  5b                   pop ebx
// 0055b3b4  5f                   pop edi
// 0055b3b5  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Object {
    void process(void *);
};

struct Entry {
    Object *object;
    unsigned int value;
};

struct Container {
    char padding[12];
    Entry *first;
    Entry *last;
};

struct S {
    char padding[0x104];
    void *argument;
    Container *container;

    unsigned int size();
    void processAll();
};

void S::processAll()
{
    if (size()) {
        void (__cdecl *handler)() = invalid_parameter_noinfo;
        do {
            Container *c = container;
            void *arg = argument;
            if (static_cast<unsigned int>(c->last - c->first) <= 0)
                handler();
            c->first->object->process(arg);
        } while (size());
    }
}
