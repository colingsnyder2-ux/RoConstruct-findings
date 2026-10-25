// from server: 100% by king_originala
// roc 2008-06 005dca00  unit: RBX::VHumanoid::?$SignalDesc  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dca00
//
// 005dca00  6aff                 push -1
// 005dca02  68f15f7d00           push 0x7d5ff1
// 005dca07  64a100000000         mov eax, dword ptr fs:[0]
// 005dca0d  50                   push eax
// 005dca0e  64892500000000       mov dword ptr fs:[0], esp
// 005dca15  83ec44               sub esp, 0x44
// 005dca18  56                   push esi
// 005dca19  8bf1                 mov esi, ecx
// 005dca1b  8b442464             mov eax, dword ptr [esp + 0x64]
// 005dca1f  6a00                 push 0
// 005dca21  6850dd9200           push 0x92dd50
// 005dca26  687c909200           push 0x92907c
// 005dca2b  6a00                 push 0
// 005dca2d  50                   push eax
// 005dca2e  c744246400000000     mov dword ptr [esp + 0x64], 0
// 005dca36  e88b4d0c00           call 0x6a17c6
// 005dca3b  83c414               add esp, 0x14
// 005dca3e  85c0                 test eax, eax
// 005dca40  7531                 jne 0x5dca73
// 005dca42  68e4d78300           push 0x83d7e4
// 005dca47  8d4c2408             lea ecx, [esp + 8]
// 005dca4b  ff1558248000         call dword ptr [0x802458]
// 005dca51  8d4c2404             lea ecx, [esp + 4]
// 005dca55  51                   push ecx
// 005dca56  8d4c2424             lea ecx, [esp + 0x24]
// 005dca5a  c644245401           mov byte ptr [esp + 0x54], 1
// 005dca5f  e8ecd2e2ff           call 0x409d50
// 005dca64  68c81b8d00           push 0x8d1bc8
// 005dca69  8d542424             lea edx, [esp + 0x24]
// 005dca6d  52                   push edx
// 005dca6e  e8194b0c00           call 0x6a158c
// 005dca73  50                   push eax
// 005dca74  8d44245c             lea eax, [esp + 0x5c]
// 005dca78  50                   push eax
// 005dca79  8bce                 mov ecx, esi
// 005dca7b  e850f9ffff           call 0x5dc3d0
// 005dca80  8b742468             mov esi, dword ptr [esp + 0x68]
// 005dca84  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005dca8c  85f6                 test esi, esi
// 005dca8e  742a                 je 0x5dcaba
// 005dca90  8d4e04               lea ecx, [esi + 4]
// 005dca93  83caff               or edx, 0xffffffff
// 005dca96  f00fc111             lock xadd dword ptr [ecx], edx
// 005dca9a  751e                 jne 0x5dcaba
// 005dca9c  8b06                 mov eax, dword ptr [esi]
// 005dca9e  8b5004               mov edx, dword ptr [eax + 4]
// 005dcaa1  8bce                 mov ecx, esi
// 005dcaa3  ffd2                 call edx
// 005dcaa5  8d4608               lea eax, [esi + 8]
// 005dcaa8  83c9ff               or ecx, 0xffffffff
// 005dcaab  f00fc108             lock xadd dword ptr [eax], ecx
// 005dcaaf  7509                 jne 0x5dcaba
// 005dcab1  8b16                 mov edx, dword ptr [esi]
// 005dcab3  8b4208               mov eax, dword ptr [edx + 8]
// 005dcab6  8bce                 mov ecx, esi
// 005dcab8  ffd0                 call eax
// 005dcaba  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dcabe  5e                   pop esi
// 005dcabf  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcac6  83c450               add esp, 0x50
// 005dcac9  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    ~Shared()
    {
        if (control)
            control->release();
    }
};

struct First {
    unsigned int data[3];
};

namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Allocator>
    class basic_string {
        char allocatorStorage[4];
        union {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;
    public:
        __declspec(dllimport) basic_string(const T*);
        __declspec(dllimport) ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct ArgumentError {
    char storage[40];
    ArgumentError(const String&);
    ~ArgumentError();
};

extern unsigned char instanceType;
extern unsigned char partType;
extern unsigned char exceptionType;

extern "C" void* __cdecl castObject(void*, int, const void*, const void*, int);
extern "C" __declspec(noreturn) void __cdecl throwObject(void*, const void*);

struct S {
    void invoke(First first, Shared part);
    void dispatch(First*, void*);
};

void S::invoke(First first, Shared part)
{
    void* value = castObject(part.object, 0, &instanceType, &partType, 0);
    if (!value) {
        String message("Argument error: A Part is required");
        ArgumentError error(message);
        throwObject(&error, &exceptionType);
    }
    dispatch(&first, value);
}
