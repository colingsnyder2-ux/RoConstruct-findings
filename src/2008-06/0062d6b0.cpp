// from server: 100% by king_originala
// roc 2008-06 0062d6b0  unit: RBX::VForceField::?$FactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d6b0
//
// 0062d6b0  6aff                 push -1
// 0062d6b2  68ef9a7d00           push 0x7d9aef
// 0062d6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0062d6bd  50                   push eax
// 0062d6be  64892500000000       mov dword ptr fs:[0], esp
// 0062d6c5  83ec20               sub esp, 0x20
// 0062d6c8  56                   push esi
// 0062d6c9  8bf1                 mov esi, ecx
// 0062d6cb  89742404             mov dword ptr [esp + 4], esi
// 0062d6cf  e81cffffff           call 0x62d5f0
// 0062d6d4  33c0                 xor eax, eax
// 0062d6d6  83c9ff               or ecx, 0xffffffff
// 0062d6d9  8944242c             mov dword ptr [esp + 0x2c], eax
// 0062d6dd  898e34010000         mov dword ptr [esi + 0x134], ecx
// 0062d6e3  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0062d6e9  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0062d6ef  686c688400           push 0x84686c
// 0062d6f4  8d4c240c             lea ecx, [esp + 0xc]
// 0062d6f8  c644243001           mov byte ptr [esp + 0x30], 1
// 0062d6fd  c7062c688400         mov dword ptr [esi], 0x84682c
// 0062d703  c7461020688400       mov dword ptr [esi + 0x10], 0x846820
// 0062d70a  c7461418688400       mov dword ptr [esi + 0x14], 0x846818
// 0062d711  c7462010688400       mov dword ptr [esi + 0x20], 0x846810
// 0062d718  c7462400688400       mov dword ptr [esi + 0x24], 0x846800
// 0062d71f  c74644f0678400       mov dword ptr [esi + 0x44], 0x8467f0
// 0062d726  c74664e0678400       mov dword ptr [esi + 0x64], 0x8467e0
// 0062d72d  c78684000000d0678400 mov dword ptr [esi + 0x84], 0x8467d0
// 0062d737  c786a4000000c0678400 mov dword ptr [esi + 0xa4], 0x8467c0
// 0062d741  c786c4000000b0678400 mov dword ptr [esi + 0xc4], 0x8467b0
// 0062d74b  c7863001000098678400 mov dword ptr [esi + 0x130], 0x846798
// 0062d755  888640010000         mov byte ptr [esi + 0x140], al
// 0062d75b  898644010000         mov dword ptr [esi + 0x144], eax
// 0062d761  ff1558248000         call dword ptr [0x802458]
// 0062d767  8d442408             lea eax, [esp + 8]
// 0062d76b  50                   push eax
// 0062d76c  8bce                 mov ecx, esi
// 0062d76e  c644243002           mov byte ptr [esp + 0x30], 2
// 0062d773  e818d8f2ff           call 0x55af90
// 0062d778  8d4c2408             lea ecx, [esp + 8]
// 0062d77c  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0062d781  ff1568248000         call dword ptr [0x802468]
// 0062d787  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062d78b  8bc6                 mov eax, esi
// 0062d78d  5e                   pop esi
// 0062d78e  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d795  83c42c               add esp, 0x2c
// 0062d798  c3                   ret 

typedef void (__thiscall *StringConstructor)(void *, const char *);
typedef void (__thiscall *StringDestructor)(void *);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;
extern const char name_84686c[];

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T *);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(const T *text)
    {
        stringConstructor(this, text);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        stringDestructor(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern unsigned int table_84682c[];
extern unsigned int table_846820[];
extern unsigned int table_846818[];
extern unsigned int table_846810[];
extern unsigned int table_846800[];
extern unsigned int table_8467f0[];
extern unsigned int table_8467e0[];
extern unsigned int table_8467d0[];
extern unsigned int table_8467c0[];
extern unsigned int table_8467b0[];
extern unsigned int table_846798[];

struct Base {
    unsigned char storage[0x130];
    Base();
    ~Base();
    void setName(const std::string &);
};

struct Counter {
    unsigned int table;
    int first;
    int second;
    int third;
    Counter();
    ~Counter();
};

inline Counter::Counter() : first(-1), second(-1), third(0)
{
}

struct S : Base {
    Counter counter;
    unsigned char enabled;
    unsigned char padding[3];
    int value;
    S();
};

S::S()
{
    *reinterpret_cast<unsigned int *>(storage + 0x00) =
        reinterpret_cast<unsigned int>(table_84682c);
    *reinterpret_cast<unsigned int *>(storage + 0x10) =
        reinterpret_cast<unsigned int>(table_846820);
    *reinterpret_cast<unsigned int *>(storage + 0x14) =
        reinterpret_cast<unsigned int>(table_846818);
    *reinterpret_cast<unsigned int *>(storage + 0x20) =
        reinterpret_cast<unsigned int>(table_846810);
    *reinterpret_cast<unsigned int *>(storage + 0x24) =
        reinterpret_cast<unsigned int>(table_846800);
    *reinterpret_cast<unsigned int *>(storage + 0x44) =
        reinterpret_cast<unsigned int>(table_8467f0);
    *reinterpret_cast<unsigned int *>(storage + 0x64) =
        reinterpret_cast<unsigned int>(table_8467e0);
    *reinterpret_cast<unsigned int *>(storage + 0x84) =
        reinterpret_cast<unsigned int>(table_8467d0);
    *reinterpret_cast<unsigned int *>(storage + 0xa4) =
        reinterpret_cast<unsigned int>(table_8467c0);
    *reinterpret_cast<unsigned int *>(storage + 0xc4) =
        reinterpret_cast<unsigned int>(table_8467b0);
    counter.table = reinterpret_cast<unsigned int>(table_846798);
    enabled = 0;
    value = 0;

    std::string name(name_84686c);
    setName(name);
}
