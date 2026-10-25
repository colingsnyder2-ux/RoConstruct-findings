// from server: 100% by tester
// roc 2008-06 0048a690  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a690
//
// 0048a690  6aff                 push -1
// 0048a692  6879607c00           push 0x7c6079
// 0048a697  64a100000000         mov eax, dword ptr fs:[0]
// 0048a69d  50                   push eax
// 0048a69e  64892500000000       mov dword ptr fs:[0], esp
// 0048a6a5  83ec44               sub esp, 0x44
// 0048a6a8  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0048a6ac  6a00                 push 0
// 0048a6ae  68684d9300           push 0x934d68
// 0048a6b3  687c909200           push 0x92907c
// 0048a6b8  6a00                 push 0
// 0048a6ba  50                   push eax
// 0048a6bb  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0048a6c3  e8fe702100           call 0x6a17c6
// 0048a6c8  83c414               add esp, 0x14
// 0048a6cb  85c0                 test eax, eax
// 0048a6cd  7407                 je 0x48a6d6
// 0048a6cf  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0048a6d3  51                   push ecx
// 0048a6d4  eb28                 jmp 0x48a6fe
// 0048a6d6  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0048a6da  6a00                 push 0
// 0048a6dc  68484f9300           push 0x934f48
// 0048a6e1  687c909200           push 0x92907c
// 0048a6e6  6a00                 push 0
// 0048a6e8  52                   push edx
// 0048a6e9  e8d8702100           call 0x6a17c6
// 0048a6ee  83c414               add esp, 0x14
// 0048a6f1  85c0                 test eax, eax
// 0048a6f3  0f8490000000         je 0x48a789
// 0048a6f9  8b442454             mov eax, dword ptr [esp + 0x54]
// 0048a6fd  50                   push eax
// 0048a6fe  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0048a702  e8e9010d00           call 0x55a8f0
// 0048a707  56                   push esi
// 0048a708  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0048a70c  c644245000           mov byte ptr [esp + 0x50], 0
// 0048a711  85f6                 test esi, esi
// 0048a713  742a                 je 0x48a73f
// 0048a715  8d4e04               lea ecx, [esi + 4]
// 0048a718  83caff               or edx, 0xffffffff
// 0048a71b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048a71f  751e                 jne 0x48a73f
// 0048a721  8b06                 mov eax, dword ptr [esi]
// 0048a723  8b5004               mov edx, dword ptr [eax + 4]
// 0048a726  8bce                 mov ecx, esi
// 0048a728  ffd2                 call edx
// 0048a72a  8d4608               lea eax, [esi + 8]
// 0048a72d  83c9ff               or ecx, 0xffffffff
// 0048a730  f00fc108             lock xadd dword ptr [eax], ecx
// 0048a734  7509                 jne 0x48a73f
// 0048a736  8b16                 mov edx, dword ptr [esi]
// 0048a738  8b4208               mov eax, dword ptr [edx + 8]
// 0048a73b  8bce                 mov ecx, esi
// 0048a73d  ffd0                 call eax
// 0048a73f  8b742464             mov esi, dword ptr [esp + 0x64]
// 0048a743  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0048a74b  85f6                 test esi, esi
// 0048a74d  742a                 je 0x48a779
// 0048a74f  8d4e04               lea ecx, [esi + 4]
// 0048a752  83caff               or edx, 0xffffffff
// 0048a755  f00fc111             lock xadd dword ptr [ecx], edx
// 0048a759  751e                 jne 0x48a779
// 0048a75b  8b06                 mov eax, dword ptr [esi]
// 0048a75d  8b5004               mov edx, dword ptr [eax + 4]
// 0048a760  8bce                 mov ecx, esi
// 0048a762  ffd2                 call edx
// 0048a764  8d4608               lea eax, [esi + 8]
// 0048a767  83c9ff               or ecx, 0xffffffff
// 0048a76a  f00fc108             lock xadd dword ptr [eax], ecx
// 0048a76e  7509                 jne 0x48a779
// 0048a770  8b16                 mov edx, dword ptr [esi]
// 0048a772  8b4208               mov eax, dword ptr [edx + 8]
// 0048a775  8bce                 mov ecx, esi
// 0048a777  ffd0                 call eax
// 0048a779  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0048a77d  5e                   pop esi
// 0048a77e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a785  83c450               add esp, 0x50
// 0048a788  c3                   ret 
// 0048a789  68c0158200           push 0x8215c0
// 0048a78e  8d4c2404             lea ecx, [esp + 4]
// 0048a792  ff1558248000         call dword ptr [0x802458]
// 0048a798  8d0c24               lea ecx, [esp]
// 0048a79b  51                   push ecx
// 0048a79c  8d4c2420             lea ecx, [esp + 0x20]
// 0048a7a0  c644245002           mov byte ptr [esp + 0x50], 2
// 0048a7a5  e8a6f5f7ff           call 0x409d50
// 0048a7aa  68c81b8d00           push 0x8d1bc8
// 0048a7af  8d542420             lea edx, [esp + 0x20]
// 0048a7b3  52                   push edx
// 0048a7b4  e8d36d2100           call 0x6a158c

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef void (__thiscall *StringConstructor)(void*, const char*);
extern StringConstructor stringConstructor;

namespace std
{
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string
    {
        Alloc alloc;
        union
        {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int reserved;

    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        stringConstructor(this, text);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception
    {
        char* message;
        int owned;

    public:
        virtual ~exception();
        virtual const char* what() const;
    };

    class runtime_error : public exception
    {
        string text;

    public:
        runtime_error(const string&);
        virtual ~runtime_error();
        virtual const char* what() const;
    };
}

namespace RBX
{
    class Instance
    {
    public:
        virtual ~Instance();
        void func_0055a8f0(Instance*);
    };

    class Accoutrement : public Instance {};
    class CharacterAppearance : public Instance {};
}

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Pointer
{
    RBX::Instance* object;
    Control* control;

    ~Pointer();
};

__forceinline Pointer::~Pointer()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void func_0048a690(Pointer character, Pointer item)
{
    if (dynamic_cast<RBX::CharacterAppearance*>(item.object))
        item.object->func_0055a8f0(character.object);
    else if (dynamic_cast<RBX::Accoutrement*>(item.object))
        item.object->func_0055a8f0(character.object);
    else
    {
        std::string message(
            "Attempt to add a non-CharacterAppearance/Accoutrement object to a character");
        throw std::runtime_error(message);
    }
}
