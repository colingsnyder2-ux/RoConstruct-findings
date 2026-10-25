// from server: 100% by king_originala
// roc 2008-06 005adbf0  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005adbf0
//
// 005adbf0  64a100000000         mov eax, dword ptr fs:[0]
// 005adbf6  6aff                 push -1
// 005adbf8  68b9fe7c00           push 0x7cfeb9
// 005adbfd  50                   push eax
// 005adbfe  64892500000000       mov dword ptr fs:[0], esp
// 005adc05  8b81c8010000         mov eax, dword ptr [ecx + 0x1c8]
// 005adc0b  83ec44               sub esp, 0x44
// 005adc0e  85c0                 test eax, eax
// 005adc10  743d                 je 0x5adc4f
// 005adc12  e8495beeff           call 0x493760
// 005adc17  833802               cmp dword ptr [eax], 2
// 005adc1a  7533                 jne 0x5adc4f
// 005adc1c  68a8468300           push 0x8346a8
// 005adc21  8d4c2404             lea ecx, [esp + 4]
// 005adc25  ff1558248000         call dword ptr [0x802458]
// 005adc2b  8d0c24               lea ecx, [esp]
// 005adc2e  51                   push ecx
// 005adc2f  8d4c2420             lea ecx, [esp + 0x20]
// 005adc33  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005adc3b  e810c1e5ff           call 0x409d50
// 005adc40  68c81b8d00           push 0x8d1bc8
// 005adc45  8d542420             lea edx, [esp + 0x20]
// 005adc49  52                   push edx
// 005adc4a  e83d390f00           call 0x6a158c
// 005adc4f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005adc53  64890d00000000       mov dword ptr fs:[0], ecx
// 005adc5a  83c450               add esp, 0x50
// 005adc5d  c20800               ret 8

namespace std
{
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string
    {
        unsigned char allocator_storage[4];
        union
        {
            T buffer[16];
            T *pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

    public:
        basic_string(const T *);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class runtime_error
    {
        unsigned char storage[40];

    public:
        runtime_error(const string &);
        runtime_error(const runtime_error &);
        ~runtime_error();
    };
}

extern void (__thiscall *string_constructor)(std::string *, const char *);

namespace std
{
    template<>
    __forceinline basic_string<char, char_traits<char>, allocator<char> >::basic_string(const char *text)
    {
        string_constructor(this, text);
    }
}

extern "C" int *__cdecl sub_493760();

struct S
{
    unsigned char padding[0x1c8];
    volatile int active;

    void f(int, int);
};

void S::f(int, int)
{
    if (active && *sub_493760() == 2)
        throw std::runtime_error(std::string("Game script timout"));
}
