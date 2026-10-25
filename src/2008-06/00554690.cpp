// from server: 100% by king_originala
// roc 2008-06 00554690  unit: RBX::RunService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554690
//
// 00554690  55                   push ebp
// 00554691  8bec                 mov ebp, esp
// 00554693  6aff                 push -1
// 00554695  68c1dc7c00           push 0x7cdcc1
// 0055469a  64a100000000         mov eax, dword ptr fs:[0]
// 005546a0  50                   push eax
// 005546a1  64892500000000       mov dword ptr fs:[0], esp
// 005546a8  83ec2c               sub esp, 0x2c
// 005546ab  53                   push ebx
// 005546ac  56                   push esi
// 005546ad  33c0                 xor eax, eax
// 005546af  57                   push edi
// 005546b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005546b3  8945fc               mov dword ptr [ebp - 4], eax
// 005546b6  3bc8                 cmp ecx, eax
// 005546b8  7406                 je 0x5546c0
// 005546ba  8d8190feffff         lea eax, [ecx - 0x170]
// 005546c0  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005546c3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005546c6  8b11                 mov edx, dword ptr [ecx]
// 005546c8  56                   push esi
// 005546c9  8b7508               mov esi, dword ptr [ebp + 8]
// 005546cc  56                   push esi
// 005546cd  50                   push eax
// 005546ce  8b02                 mov eax, dword ptr [edx]
// 005546d0  ffd0                 call eax

struct Callback {
    virtual void invoke(void *, void *, void *) = 0;
};

struct S {
    void f(void *, void *, Callback *);
};

void S::f(void *a, void *b, Callback *callback)
{
    volatile char scratch[40];
    try {
        void *owner = 0;
        if (this)
            owner = reinterpret_cast<char *>(this) - 0x170;
        callback->invoke(owner, a, b);
        __assume(0);
    }
    catch (...) {
        scratch[0] = 0;
    }
}
