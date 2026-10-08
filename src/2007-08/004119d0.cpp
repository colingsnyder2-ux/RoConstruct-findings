// from server: 100% by colin
// roc 2007-08 004119d0  unit: boost::bad_any_cast  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004119d0
//
// 004119d0  56                   push esi
// 004119d1  8bf1                 mov esi, ecx
// 004119d3  8b06                 mov eax, dword ptr [esi]
// 004119d5  85c0                 test eax, eax
// 004119d7  741e                 je 0x4119f7
// 004119d9  50                   push eax
// 004119da  ff15e4e97700         call dword ptr [0x77e9e4]
// 004119e0  85c0                 test eax, eax
// 004119e2  7c13                 jl 0x4119f7
// 004119e4  8b06                 mov eax, dword ptr [esi]
// 004119e6  50                   push eax
// 004119e7  ff15f0e97700         call dword ptr [0x77e9f0]
// 004119ed  85c0                 test eax, eax
// 004119ef  7c06                 jl 0x4119f7
// 004119f1  c70600000000         mov dword ptr [esi], 0
// 004119f7  5e                   pop esi
// 004119f8  c3                   ret 

extern "C" {
    long (__stdcall *SafeArrayDestroy)(void*);
    long (__stdcall *SafeArrayUnlock)(void*);
}

struct S {
    void* p;
    void f();
};

void S::f() {
    if (p != 0) {
        if (SafeArrayDestroy(p) >= 0) {
            if (SafeArrayUnlock(p) >= 0) {
                p = 0;
            }
        }
    }
}
