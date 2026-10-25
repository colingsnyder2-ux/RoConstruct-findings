// from server: 100% by colin
// roc 2008-06 0059a350  unit: RBX::PartInstance  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a350
//
// 0059a350  55                   push ebp
// 0059a351  8bec                 mov ebp, esp
// 0059a353  6aff                 push -1
// 0059a355  6871257d00           push 0x7d2571
// 0059a35a  64a100000000         mov eax, dword ptr fs:[0]
// 0059a360  50                   push eax
// 0059a361  64892500000000       mov dword ptr fs:[0], esp
// 0059a368  83ec30               sub esp, 0x30
// 0059a36b  53                   push ebx
// 0059a36c  56                   push esi
// 0059a36d  33c0                 xor eax, eax
// 0059a36f  57                   push edi
// 0059a370  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059a373  8945fc               mov dword ptr [ebp - 4], eax
// 0059a376  3bc8                 cmp ecx, eax
// 0059a378  7406                 je 0x59a380
// 0059a37a  8d8160feffff         lea eax, [ecx - 0x1a0]
// 0059a380  8a5508               mov dl, byte ptr [ebp + 8]
// 0059a383  51                   push ecx
// 0059a384  8bcc                 mov ecx, esp
// 0059a386  8811                 mov byte ptr [ecx], dl
// 0059a388  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0059a38b  8b11                 mov edx, dword ptr [ecx]
// 0059a38d  8965ec               mov dword ptr [ebp - 0x14], esp
// 0059a390  50                   push eax
// 0059a391  8b02                 mov eax, dword ptr [edx]
// 0059a393  ffd0                 call eax

struct Flag {
    bool value;
    Flag(const Flag &other) : value(other.value) {}
};

struct Callback {
    virtual void invoke(void *, Flag) = 0;
};

struct S {
    char unused;
    __declspec(noreturn) void f(Flag, Callback *);
};

void S::f(Flag flag, Callback *callback)
{
    volatile char scratch[40];
    try {
        void *object = 0;
        if (this)
            object = reinterpret_cast<char *>(this) - 0x1a0;
        callback->invoke(object, flag);
        __assume(0);
    }
    catch (...) {
        scratch[0] = 0;
    }
}