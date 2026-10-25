// from server: 100% by colin
// roc 2008-06 005e5660  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5660
//
// 005e5660  6aff                 push -1
// 005e5662  683b467d00           push 0x7d463b
// 005e5667  64a100000000         mov eax, dword ptr fs:[0]
// 005e566d  50                   push eax
// 005e566e  64892500000000       mov dword ptr fs:[0], esp
// 005e5675  83ec08               sub esp, 8
// 005e5678  c7042400000000       mov dword ptr [esp], 0
// 005e567f  6854010000           push 0x154
// 005e5684  c644240400           mov byte ptr [esp + 4], 0
// 005e5689  ff15b0288000         call dword ptr [0x8028b0]
// 005e568f  83c404               add esp, 4
// 005e5692  89442404             mov dword ptr [esp + 4], eax
// 005e5696  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e569e  85c0                 test eax, eax
// 005e56a0  740e                 je 0x5e56b0
// 005e56a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e56a6  51                   push ecx
// 005e56a7  8bc8                 mov ecx, eax
// 005e56a9  e872f2ffff           call 0x5e4920
// 005e56ae  eb02                 jmp 0x5e56b2
// 005e56b0  33c0                 xor eax, eax
// 005e56b2  8b1424               mov edx, dword ptr [esp]
// 005e56b5  56                   push esi
// 005e56b6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e56ba  52                   push edx
// 005e56bb  50                   push eax
// 005e56bc  8bce                 mov ecx, esi
// 005e56be  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e56c6  e815d1ecff           call 0x4b27e0
// 005e56cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e56cf  8bc6                 mov eax, esi
// 005e56d1  5e                   pop esi
// 005e56d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005e56d9  83c414               add esp, 0x14
// 005e56dc  c3                   ret 

extern "C" void *(__cdecl *malloc)(unsigned int);

struct Deleter {
    char value;
    Deleter();
};

inline Deleter::Deleter() : value(0) {}

struct Object {
    char storage[0x154];

    Object(void *);
    static void *operator new(unsigned int size) throw();
    static void operator delete(void *);
};

inline void *Object::operator new(unsigned int size) throw()
{
    return malloc(size);
}

struct Result {
    void *object;
    void *control;

    Result(Object *, Deleter);
    Result(const Result &);
    ~Result();
};

Result __cdecl create(void *argument)
{
    Deleter deleter = Deleter();
    return Result(new Object(argument), deleter);
}
