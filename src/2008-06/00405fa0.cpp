// from server: 100% by king_originala
// roc 2008-06 00405fa0  unit: boost::detail::sp_counted_base  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405fa0
//
// 00405fa0  6aff                 push -1
// 00405fa2  683b467d00           push 0x7d463b
// 00405fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00405fad  50                   push eax
// 00405fae  64892500000000       mov dword ptr fs:[0], esp
// 00405fb5  83ec08               sub esp, 8
// 00405fb8  c7042400000000       mov dword ptr [esp], 0
// 00405fbf  68d8020000           push 0x2d8
// 00405fc4  c644240400           mov byte ptr [esp + 4], 0
// 00405fc9  ff15b0288000         call dword ptr [0x8028b0]
// 00405fcf  83c404               add esp, 4
// 00405fd2  89442404             mov dword ptr [esp + 4], eax
// 00405fd6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00405fde  85c0                 test eax, eax
// 00405fe0  7409                 je 0x405feb
// 00405fe2  8bc8                 mov ecx, eax
// 00405fe4  e8170b1500           call 0x556b00
// 00405fe9  eb02                 jmp 0x405fed
// 00405feb  33c0                 xor eax, eax
// 00405fed  8b0c24               mov ecx, dword ptr [esp]
// 00405ff0  56                   push esi
// 00405ff1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00405ff5  51                   push ecx
// 00405ff6  50                   push eax
// 00405ff7  8bce                 mov ecx, esi
// 00405ff9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00406001  e8eafeffff           call 0x405ef0
// 00406006  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040600a  8bc6                 mov eax, esi
// 0040600c  5e                   pop esi
// 0040600d  64890d00000000       mov dword ptr fs:[0], ecx
// 00406014  83c414               add esp, 0x14
// 00406017  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);

struct Object {
    char storage[0x2d8];

    Object();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
};

__forceinline void* Object::operator new(unsigned int size)
{
    return malloc(size);
}

struct Deleter {
    int value;
};

struct Result {
    Object* pointer;
    void* control;

    Result(Object* p, Deleter d);
};

Result makeObject()
{
    Deleter d = { 0 };
    *reinterpret_cast<volatile char*>(&d) = 0;
    return Result(new Object, d);
}
