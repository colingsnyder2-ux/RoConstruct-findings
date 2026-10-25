// from server: 100% by king_originala
// roc 2008-06 0041c9c0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c9c0
//
// 0041c9c0  6aff                 push -1
// 0041c9c2  68f1e17b00           push 0x7be1f1
// 0041c9c7  64a100000000         mov eax, dword ptr fs:[0]
// 0041c9cd  50                   push eax
// 0041c9ce  64892500000000       mov dword ptr fs:[0], esp
// 0041c9d5  83ec20               sub esp, 0x20
// 0041c9d8  56                   push esi
// 0041c9d9  8bf1                 mov esi, ecx
// 0041c9db  89742404             mov dword ptr [esp + 4], esi
// 0041c9df  e86cf2ffff           call 0x41bc50
// 0041c9e4  6814f08000           push 0x80f014
// 0041c9e9  8d4c240c             lea ecx, [esp + 0xc]
// 0041c9ed  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0041c9f5  c706d4ef8000         mov dword ptr [esi], 0x80efd4
// 0041c9fb  c74610c4ef8000       mov dword ptr [esi + 0x10], 0x80efc4
// 0041ca02  c74614bcef8000       mov dword ptr [esi + 0x14], 0x80efbc
// 0041ca09  c74620b4ef8000       mov dword ptr [esi + 0x20], 0x80efb4
// 0041ca10  c74624a4ef8000       mov dword ptr [esi + 0x24], 0x80efa4
// 0041ca17  c7464494ef8000       mov dword ptr [esi + 0x44], 0x80ef94
// 0041ca1e  c7466484ef8000       mov dword ptr [esi + 0x64], 0x80ef84
// 0041ca25  c7868400000074ef8000 mov dword ptr [esi + 0x84], 0x80ef74
// 0041ca2f  c786a400000064ef8000 mov dword ptr [esi + 0xa4], 0x80ef64
// 0041ca39  c786c400000054ef8000 mov dword ptr [esi + 0xc4], 0x80ef54
// 0041ca43  ff1558248000         call dword ptr [0x802458]
// 0041ca49  8d442408             lea eax, [esp + 8]
// 0041ca4d  50                   push eax
// 0041ca4e  8bce                 mov ecx, esi
// 0041ca50  c644243001           mov byte ptr [esp + 0x30], 1
// 0041ca55  e836e51300           call 0x55af90
// 0041ca5a  8d4c2408             lea ecx, [esp + 8]
// 0041ca5e  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0041ca63  ff1568248000         call dword ptr [0x802468]
// 0041ca69  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0041ca6d  8bc6                 mov eax, esi
// 0041ca6f  5e                   pop esi
// 0041ca70  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ca77  83c42c               add esp, 0x2c
// 0041ca7a  c3                   ret 

extern void (__thiscall *stringConstruct)(void*, const char*);
extern void (__thiscall *stringDestroy)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        stringDestroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern const unsigned char table0[];
extern const unsigned char table10[];
extern const unsigned char table14[];
extern const unsigned char table20[];
extern const unsigned char table24[];
extern const unsigned char table44[];
extern const unsigned char table64[];
extern const unsigned char table84[];
extern const unsigned char tableA4[];
extern const unsigned char tableC4[];

struct Base {
    unsigned int words[57];

    Base();
    ~Base();
    void setName(const std::string&);
};

struct S : Base {
    S();
};

S::S()
{
    words[0]  = reinterpret_cast<unsigned int>(table0);
    words[4]  = reinterpret_cast<unsigned int>(table10);
    words[5]  = reinterpret_cast<unsigned int>(table14);
    words[8]  = reinterpret_cast<unsigned int>(table20);
    words[9]  = reinterpret_cast<unsigned int>(table24);
    words[17] = reinterpret_cast<unsigned int>(table44);
    words[25] = reinterpret_cast<unsigned int>(table64);
    words[33] = reinterpret_cast<unsigned int>(table84);
    words[41] = reinterpret_cast<unsigned int>(tableA4);
    words[49] = reinterpret_cast<unsigned int>(tableC4);

    std::string name("WindowService");
    setName(name);
}
