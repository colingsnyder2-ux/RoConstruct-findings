// from server: 100% by king_originala
// roc 2008-06 0056d090  unit: G3D::VColor3::?$holder  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d090
//
// 0056d090  64a100000000         mov eax, dword ptr fs:[0]
// 0056d096  6aff                 push -1
// 0056d098  68b9fe7c00           push 0x7cfeb9
// 0056d09d  50                   push eax
// 0056d09e  64892500000000       mov dword ptr fs:[0], esp
// 0056d0a5  83ec44               sub esp, 0x44
// 0056d0a8  56                   push esi
// 0056d0a9  8d7104               lea esi, [ecx + 4]
// 0056d0ac  85f6                 test esi, esi
// 0056d0ae  742c                 je 0x56d0dc
// 0056d0b0  8b0e                 mov ecx, dword ptr [esi]
// 0056d0b2  85c9                 test ecx, ecx
// 0056d0b4  7409                 je 0x56d0bf
// 0056d0b6  8b01                 mov eax, dword ptr [ecx]
// 0056d0b8  8b5004               mov edx, dword ptr [eax + 4]
// 0056d0bb  ffd2                 call edx
// 0056d0bd  eb05                 jmp 0x56d0c4
// 0056d0bf  b814969200           mov eax, 0x929614
// 0056d0c4  6850899300           push 0x938950
// 0056d0c9  8bc8                 mov ecx, eax
// 0056d0cb  ff1578288000         call dword ptr [0x802878]
// 0056d0d1  84c0                 test al, al
// 0056d0d3  7407                 je 0x56d0dc
// 0056d0d5  8b06                 mov eax, dword ptr [esi]
// 0056d0d7  83c004               add eax, 4
// 0056d0da  7534                 jne 0x56d110
// 0056d0dc  68f0f68200           push 0x82f6f0
// 0056d0e1  8d4c2408             lea ecx, [esp + 8]
// 0056d0e5  ff1558248000         call dword ptr [0x802458]
// 0056d0eb  8d442404             lea eax, [esp + 4]
// 0056d0ef  50                   push eax
// 0056d0f0  8d4c2424             lea ecx, [esp + 0x24]
// 0056d0f4  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0056d0fc  e84fcce9ff           call 0x409d50
// 0056d101  68c81b8d00           push 0x8d1bc8
// 0056d106  8d4c2424             lea ecx, [esp + 0x24]
// 0056d10a  51                   push ecx
// 0056d10b  e87c441300           call 0x6a158c
// 0056d110  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0056d114  5e                   pop esi
// 0056d115  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d11c  83c450               add esp, 0x50
// 0056d11f  c3                   ret 

class type_info;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

class type_info {
public:
    bool __thiscall operator==(const type_info&) const;
};

__forceinline bool type_info::operator==(const type_info& other) const
{
    return type_equal(this, other);
}

extern const type_info void_type;
extern const type_info objects_type;

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Allocator>
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

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        char* message;
        int owns_message;

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
        virtual const char* what() const;
    };
}

extern void (__thiscall *string_construct)(std::string*, const char*);

template<>
__forceinline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::
basic_string(const char* text)
{
    string_construct(this, text);
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const;
};

struct Any {
    Placeholder* content;
};

struct S {
    unsigned int prefix;
    Any value;

    void* f();
};

void* S::f()
{
    Any* p = &value;
    if (p) {
        const type_info& t = p->content ? p->content->type() : void_type;
        if (t == objects_type) {
            void* result = reinterpret_cast<char*>(p->content) + 4;
            if (result)
                return result;
        }
    }

    throw std::runtime_error(std::string("Unable to cast value to Objects"));
}
