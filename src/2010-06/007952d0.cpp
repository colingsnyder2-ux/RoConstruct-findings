// from server: 100% by tester
// roc 2010-06 007952d0  unit: RBX::IndexBox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007952d0
//
// 007952d0  8b09                 mov ecx, dword ptr [ecx]
// 007952d2  51                   push ecx
// 007952d3  ff1508a29e00         call dword ptr [0x9ea208]
// 007952d9  85c0                 test eax, eax
// 007952db  7505                 jne 0x7952e2
// 007952dd  e9aeffffff           jmp 0x795290
// 007952e2  c3                   ret 

extern "C" __declspec(dllimport) int __stdcall SetEvent(void*);

struct S {
    void* field0;
    void f();
};

void S::f() {
    void* h = field0;
    if (SetEvent(h) == 0) {
        extern void g();
        g();
    }
}
