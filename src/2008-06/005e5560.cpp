// from server: 100% by king_originala
// roc 2008-06 005e5560  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5560
//
// 005e5560  6aff                 push -1
// 005e5562  683b467d00           push 0x7d463b
// 005e5567  64a100000000         mov eax, dword ptr fs:[0]
// 005e556d  50                   push eax
// 005e556e  64892500000000       mov dword ptr fs:[0], esp
// 005e5575  83ec08               sub esp, 8
// 005e5578  c7042400000000       mov dword ptr [esp], 0
// 005e557f  6854010000           push 0x154
// 005e5584  c644240400           mov byte ptr [esp + 4], 0
// 005e5589  ff15b0288000         call dword ptr [0x8028b0]
// 005e558f  83c404               add esp, 4
// 005e5592  89442404             mov dword ptr [esp + 4], eax
// 005e5596  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e559e  85c0                 test eax, eax
// 005e55a0  740e                 je 0x5e55b0
// 005e55a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e55a6  51                   push ecx
// 005e55a7  8bc8                 mov ecx, eax
// 005e55a9  e842efffff           call 0x5e44f0
// 005e55ae  eb02                 jmp 0x5e55b2
// 005e55b0  33c0                 xor eax, eax
// 005e55b2  8b1424               mov edx, dword ptr [esp]
// 005e55b5  56                   push esi
// 005e55b6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e55ba  52                   push edx
// 005e55bb  50                   push eax
// 005e55bc  8bce                 mov ecx, esi
// 005e55be  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e55c6  e835cdecff           call 0x4b2300
// 005e55cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e55cf  8bc6                 mov eax, esi
// 005e55d1  5e                   pop esi
// 005e55d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005e55d9  83c414               add esp, 0x14
// 005e55dc  c3                   ret 

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
