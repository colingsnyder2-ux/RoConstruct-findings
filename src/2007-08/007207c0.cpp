// from server: 90% by colin
// roc 2007-08 007207c0  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007207c0
//
// 007207c0  56                   push esi
// 007207c1  8bf1                 mov esi, ecx
// 007207c3  8b4604               mov eax, dword ptr [esi + 4]
// 007207c6  85c0                 test eax, eax
// 007207c8  c706ac227e00         mov dword ptr [esi], 0x7e22ac
// 007207ce  7414                 je 0x7207e4
// 007207d0  50                   push eax
// 007207d1  ff15bced7700         call dword ptr [0x77edbc]
// 007207d7  85c0                 test eax, eax
// 007207d9  7409                 je 0x7207e4
// 007207db  6a00                 push 0
// 007207dd  8bce                 mov ecx, esi
// 007207df  e88cffffff           call 0x720770
// 007207e4  5e                   pop esi
// 007207e5  c3                   ret 

extern "C" int __stdcall IsWindow(void*);

struct CXTShadowHook {
    void* vtable;
    void* field4;
    void destroy();
    void sub_720770(int);
};

void CXTShadowHook::destroy() {
    void* p = field4;
    vtable = (void*)0x7e22ac;
    if (p != 0) {
        if (IsWindow(p) != 0) {
            sub_720770(0);
        }
    }
}
