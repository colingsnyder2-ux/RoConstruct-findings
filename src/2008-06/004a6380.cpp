// from server: 100% by king_originala
// roc 2008-06 004a6380  unit: RBX::VHint::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6380
//
// 004a6380  64a100000000         mov eax, dword ptr fs:[0]
// 004a6386  6aff                 push -1
// 004a6388  68b9fe7c00           push 0x7cfeb9
// 004a638d  50                   push eax
// 004a638e  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a6392  64892500000000       mov dword ptr fs:[0], esp
// 004a6399  83ec44               sub esp, 0x44
// 004a639c  56                   push esi
// 004a639d  8b742458             mov esi, dword ptr [esp + 0x58]
// 004a63a1  6a01                 push 1
// 004a63a3  6a08                 push 8
// 004a63a5  50                   push eax
// 004a63a6  8bce                 mov ecx, esi
// 004a63a8  e863eeffff           call 0x4a5210
// 004a63ad  84c0                 test al, al
// 004a63af  7534                 jne 0x4a63e5
// 004a63b1  68d03c8200           push 0x823cd0
// 004a63b6  8d4c2408             lea ecx, [esp + 8]
// 004a63ba  ff1558248000         call dword ptr [0x802458]
// 004a63c0  8d4c2404             lea ecx, [esp + 4]
// 004a63c4  51                   push ecx
// 004a63c5  8d4c2424             lea ecx, [esp + 0x24]
// 004a63c9  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004a63d1  e87a39f6ff           call 0x409d50
// 004a63d6  68c81b8d00           push 0x8d1bc8
// 004a63db  8d542424             lea edx, [esp + 0x24]
// 004a63df  52                   push edx
// 004a63e0  e8a7b11f00           call 0x6a158c
// 004a63e5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a63e9  8bc6                 mov eax, esi
// 004a63eb  5e                   pop esi
// 004a63ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004a63f3  83c450               add esp, 0x50
// 004a63f6  c3                   ret 

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

typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

typedef void (__thiscall *StringConstructor)(void *, const char *);
extern StringConstructor importedStringConstructor;

namespace std {
template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>::basic_string(const T *text)
{
    importedStringConstructor(this, text);
}
}

struct Error {
    unsigned char storage[40];
    Error(const std::string &);
    Error(const Error &);
    ~Error();
};

struct Stream {
    bool readBits(unsigned char *, int, bool);
};

Stream &readByte(Stream &stream, unsigned char &value)
{
    if (!stream.readBits(&value, 8, true)) {
        std::string message("BitStream >> unsigned char failed");
        throw Error(message);
    }
    return stream;
}
