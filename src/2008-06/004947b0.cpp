// from server: 100% by king_originala
// roc 2008-06 004947b0  unit: RBX::Network::Player  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004947b0
//
// 004947b0  64a100000000         mov eax, dword ptr fs:[0]
// 004947b6  6aff                 push -1
// 004947b8  68b9fe7c00           push 0x7cfeb9
// 004947bd  50                   push eax
// 004947be  64892500000000       mov dword ptr fs:[0], esp
// 004947c5  83ec44               sub esp, 0x44
// 004947c8  56                   push esi
// 004947c9  8bf1                 mov esi, ecx
// 004947cb  6a01                 push 1
// 004947cd  56                   push esi
// 004947ce  e8dd160000           call 0x495eb0
// 004947d3  83c408               add esp, 8
// 004947d6  84c0                 test al, al
// 004947d8  7534                 jne 0x49480e
// 004947da  6860228200           push 0x822260
// 004947df  8d4c2408             lea ecx, [esp + 8]
// 004947e3  ff1558248000         call dword ptr [0x802458]
// 004947e9  8d442404             lea eax, [esp + 4]
// 004947ed  50                   push eax
// 004947ee  8d4c2424             lea ecx, [esp + 0x24]
// 004947f2  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004947fa  e85155f7ff           call 0x409d50
// 004947ff  68c81b8d00           push 0x8d1bc8
// 00494804  8d4c2424             lea ecx, [esp + 0x24]
// 00494808  51                   push ecx
// 00494809  e87ecd2000           call 0x6a158c
// 0049480e  6a00                 push 0
// 00494810  8bce                 mov ecx, esi
// 00494812  e899fcffff           call 0x4944b0
// 00494817  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0049481b  5e                   pop esi
// 0049481c  64890d00000000       mov dword ptr fs:[0], ecx
// 00494823  83c450               add esp, 0x50
// 00494826  c3                   ret 

extern void (__thiscall *stringConstruct)(void*, const char*);

namespace std {
template<class T> struct char_traits {};
template<class T> struct allocator {};

template<class T, class Traits, class Alloc>
class basic_string {
    unsigned char allocator_storage[4];
    union {
        T buffer[16];
        T* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
public:
    basic_string(const T*);
    basic_string(const basic_string&);
    ~basic_string();
};

template<class T, class Traits, class Alloc>
inline basic_string<T, Traits, Alloc>::basic_string(const T* s)
{
    stringConstruct(this, s);
}

typedef basic_string<char, char_traits<char>, allocator<char> > string;

class exception {
    const char* message;
    bool owns_message;
public:
    exception(const exception&);
    virtual ~exception();
    virtual const char* what() const;
};

class runtime_error : public exception {
    string text;
public:
    runtime_error(const string&);
    runtime_error(const runtime_error&);
    virtual ~runtime_error();
};
}

struct Player {
    void removeCharacter();
    void setCharacter(int);
};

extern bool __cdecl checkBackend(Player*, int);

void Player::removeCharacter()
{
    if (!checkBackend(this, 1))
        throw std::runtime_error(
            std::string("RemoveCharacter can only be called by the backend server"));
    setCharacter(0);
}
