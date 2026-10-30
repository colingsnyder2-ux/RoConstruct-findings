// roc 2009-12 0041e650  unit: CSelectionTreeCtrl  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041e650
//
// 0041e650  56                   push esi
// 0041e651  8bf1                 mov esi, ecx
// 0041e653  8b06                 mov eax, dword ptr [esi]
// 0041e655  85c0                 test eax, eax
// 0041e657  7418                 je 0x41e671
// 0041e659  8b00                 mov eax, dword ptr [eax]
// 0041e65b  8d4e08               lea ecx, [esi + 8]
// 0041e65e  85c0                 test eax, eax
// 0041e660  7409                 je 0x41e66b
// 0041e662  6a02                 push 2
// 0041e664  51                   push ecx
// 0041e665  51                   push ecx
// 0041e666  ffd0                 call eax
// 0041e668  83c40c               add esp, 0xc
// 0041e66b  c70600000000         mov dword ptr [esi], 0
// 0041e671  5e                   pop esi
// 0041e672  c3                   ret 
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
