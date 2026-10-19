// from server: 94% by colin
// from server: 81% by king_originala
// roc 2008-06 005e9800  unit: RBX::PhysicsService  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9800
//
// 005e9800  55                   push ebp
// 005e9801  8bec                 mov ebp, esp
// 005e9803  6aff                 push -1
// 005e9805  68e1697d00           push 0x7d69e1
// 005e980a  64a100000000         mov eax, dword ptr fs:[0]
// 005e9810  50                   push eax
// 005e9811  64892500000000       mov dword ptr fs:[0], esp
// 005e9818  83ec2c               sub esp, 0x2c
// 005e981b  53                   push ebx
// 005e981c  56                   push esi
// 005e981d  33c0                 xor eax, eax
// 005e981f  57                   push edi
// 005e9820  8965f0               mov dword ptr [ebp - 0x10], esp
// 005e9823  8945fc               mov dword ptr [ebp - 4], eax
// 005e9826  3bc8                 cmp ecx, eax
// 005e9828  7403                 je 0x5e982d
// 005e982a  8d41a0               lea eax, [ecx - 0x60]
// 005e982d  8b7508               mov esi, dword ptr [ebp + 8]
// 005e9830  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005e9833  8b11                 mov edx, dword ptr [ecx]
// 005e9835  56                   push esi
// 005e9836  50                   push eax
// 005e9837  8b02                 mov eax, dword ptr [edx]
// 005e9839  ffd0                 call eax

struct Callback {
    virtual void invoke(void *, int) = 0;
};

struct S {
    void f(int value, Callback *callback);
};

void S::f(int value, Callback *callback)
{
    try {
        void *object = 0;
        if (this)
            object = reinterpret_cast<char *>(this) - 96;
        callback->invoke(object, value);
        __assume(0);
    }
    catch (...) {
        volatile char storage[40];
        storage[0] = 0;
        throw;
    }
}
