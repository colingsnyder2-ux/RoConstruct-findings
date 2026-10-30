// roc 2012-06 0047e860  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::?$error_info_injector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047e860
//
// 0047e860  56                   push esi
// 0047e861  8bf1                 mov esi, ecx
// 0047e863  8b06                 mov eax, dword ptr [esi]
// 0047e865  85c0                 test eax, eax
// 0047e867  7418                 je 0x47e881
// 0047e869  8b00                 mov eax, dword ptr [eax]
// 0047e86b  8d4e08               lea ecx, [esi + 8]
// 0047e86e  85c0                 test eax, eax
// 0047e870  7409                 je 0x47e87b
// 0047e872  6a02                 push 2
// 0047e874  51                   push ecx
// 0047e875  51                   push ecx
// 0047e876  ffd0                 call eax
// 0047e878  83c40c               add esp, 0xc
// 0047e87b  c70600000000         mov dword ptr [esi], 0
// 0047e881  5e                   pop esi
// 0047e882  c3                   ret 
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