// from server: 100% by atomic.potato
// roc 2011-06 005633b0  unit: G3D::Random  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005633b0
//
// 005633b0  56                   push esi
// 005633b1  8bf1                 mov esi, ecx
// 005633b3  8b4608               mov eax, dword ptr [esi + 8]
// 005633b6  50                   push eax
// 005633b7  c706d457a800         mov dword ptr [esi], 0xa857d4
// 005633bd  e8426f2a00           call 0x80a304
// 005633c2  83c404               add esp, 4
// 005633c5  c7460800000000       mov dword ptr [esi + 8], 0
// 005633cc  5e                   pop esi
// 005633cd  c3                   ret 

struct S {
    void* vtbl;
    void* field4;
    void* ptr;
    void f();
};

extern "C" void __cdecl sub_80a304(void* p);

void S::f() {
    this->vtbl = (void*)0xa857d4;
    sub_80a304(this->ptr);
    this->ptr = 0;
}
