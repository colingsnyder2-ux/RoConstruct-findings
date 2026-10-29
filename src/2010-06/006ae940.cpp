// roc 2010-06 006ae940  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ae940
//
// 006ae940  56                   push esi
// 006ae941  8bf1                 mov esi, ecx
// 006ae943  8b06                 mov eax, dword ptr [esi]
// 006ae945  85c0                 test eax, eax
// 006ae947  7418                 je 0x6ae961
// 006ae949  8b00                 mov eax, dword ptr [eax]
// 006ae94b  8d4e08               lea ecx, [esi + 8]
// 006ae94e  85c0                 test eax, eax
// 006ae950  7409                 je 0x6ae95b
// 006ae952  6a02                 push 2
// 006ae954  51                   push ecx
// 006ae955  51                   push ecx
// 006ae956  ffd0                 call eax
// 006ae958  83c40c               add esp, 0xc
// 006ae95b  c70600000000         mov dword ptr [esi], 0
// 006ae961  5e                   pop esi
// 006ae962  c3                   ret 
// copied from an identical function in another client (function ?destroy@UTupleHolder@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
// from server: 100% by atomic.potato
struct UTupleHolder {
    void* ptr;
    char pad[4];
    void destroy();
};

void UTupleHolder::destroy() {
    void* p = ptr;
    if (p != 0) {
        void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))p;
        void* arg = (void*)((char*)this + 8);
        if (fn != 0) {
            fn(arg, arg, (void*)2);
        }
        ptr = 0;
    }
}
}