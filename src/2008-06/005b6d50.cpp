// from server: 100% by king_originala
// roc 2008-06 005b6d50  unit: RBX::DropperTool  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6d50
//
// 005b6d50  6aff                 push -1
// 005b6d52  6898987d00           push 0x7d9898
// 005b6d57  64a100000000         mov eax, dword ptr fs:[0]
// 005b6d5d  50                   push eax
// 005b6d5e  64892500000000       mov dword ptr fs:[0], esp
// 005b6d65  51                   push ecx
// 005b6d66  53                   push ebx
// 005b6d67  56                   push esi
// 005b6d68  8bf1                 mov esi, ecx
// 005b6d6a  57                   push edi
// 005b6d6b  8974240c             mov dword ptr [esp + 0xc], esi
// 005b6d6f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005b6d73  8d7e04               lea edi, [esi + 4]
// 005b6d76  53                   push ebx
// 005b6d77  8bcf                 mov ecx, edi
// 005b6d79  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005b6d81  c70660758300         mov dword ptr [esi], 0x837560
// 005b6d87  ff155c248000         call dword ptr [0x80245c]
// 005b6d8d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005b6d90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b6d94  89471c               mov dword ptr [edi + 0x1c], eax
// 005b6d97  5f                   pop edi
// 005b6d98  8bc6                 mov eax, esi
// 005b6d9a  5e                   pop esi
// 005b6d9b  5b                   pop ebx
// 005b6d9c  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6da3  83c410               add esp, 0x10
// 005b6da6  c20400               ret 4

extern void (__thiscall *copy_string)(void*, const void*);

namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char allocatorStorage[4];
        union {
            T buffer[16 / sizeof(T)];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(
        const basic_string& source)
    {
        copy_string(this, &source);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Source {
    std::string text;
    int value;

    Source(const Source&);
};

__forceinline Source::Source(const Source& source)
    : text(source.text), value(source.value)
{
}

struct Base {
    virtual ~Base();
};

struct S : Base {
    Source data;

    S(const Source&);
    virtual ~S();
};

S::S(const Source& source)
    : data(source)
{
}
