// from server: 100% by colin
// roc 2008-06 005e5760  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5760
//
// 005e5760  6aff                 push -1
// 005e5762  683b467d00           push 0x7d463b
// 005e5767  64a100000000         mov eax, dword ptr fs:[0]
// 005e576d  50                   push eax
// 005e576e  64892500000000       mov dword ptr fs:[0], esp
// 005e5775  83ec08               sub esp, 8
// 005e5778  c7042400000000       mov dword ptr [esp], 0
// 005e577f  6854010000           push 0x154
// 005e5784  c644240400           mov byte ptr [esp + 4], 0
// 005e5789  ff15b0288000         call dword ptr [0x8028b0]
// 005e578f  83c404               add esp, 4
// 005e5792  89442404             mov dword ptr [esp + 4], eax
// 005e5796  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e579e  85c0                 test eax, eax
// 005e57a0  740e                 je 0x5e57b0
// 005e57a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e57a6  51                   push ecx
// 005e57a7  8bc8                 mov ecx, eax
// 005e57a9  e8e2f3ffff           call 0x5e4b90
// 005e57ae  eb02                 jmp 0x5e57b2
// 005e57b0  33c0                 xor eax, eax
// 005e57b2  8b1424               mov edx, dword ptr [esp]
// 005e57b5  56                   push esi
// 005e57b6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e57ba  52                   push edx
// 005e57bb  50                   push eax
// 005e57bc  8bce                 mov ecx, esi
// 005e57be  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e57c6  e8f5d4ecff           call 0x4b2cc0
// 005e57cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e57cf  8bc6                 mov eax, esi
// 005e57d1  5e                   pop esi
// 005e57d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005e57d9  83c414               add esp, 0x14
// 005e57dc  c3                   ret 

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
