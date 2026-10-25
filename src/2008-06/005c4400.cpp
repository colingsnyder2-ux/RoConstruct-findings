// from server: 100% by king_originala
// roc 2008-06 005c4400  unit: RBX::Profiling::Profiler  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4400
//
// 005c4400  64a100000000         mov eax, dword ptr fs:[0]
// 005c4406  6aff                 push -1
// 005c4408  6809b77d00           push 0x7db709
// 005c440d  50                   push eax
// 005c440e  64892500000000       mov dword ptr fs:[0], esp
// 005c4415  8d442410             lea eax, [esp + 0x10]
// 005c4419  50                   push eax
// 005c441a  81c130010000         add ecx, 0x130
// 005c4420  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c4428  ff150c248000         call dword ptr [0x80240c]
// 005c442e  8d4c2410             lea ecx, [esp + 0x10]
// 005c4432  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 005c443a  ff1568248000         call dword ptr [0x802468]
// 005c4440  8b0c24               mov ecx, dword ptr [esp]
// 005c4443  64890d00000000       mov dword ptr fs:[0], ecx
// 005c444a  83c40c               add esp, 0xc
// 005c444d  c21c00               ret 0x1c

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits = char_traits<T>, class Alloc = allocator<T> >
class basic_string {
    unsigned int storage[7];
public:
    ~basic_string();
    basic_string& operator=(const basic_string&);
};

typedef basic_string<char> string;
}

extern std::string& (__thiscall *stringAssign)(std::string*, const std::string&);
extern void (__thiscall *stringDestroy)(std::string*);

namespace std {
template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>::~basic_string()
{
    stringDestroy(this);
}

template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>&
basic_string<T, Traits, Alloc>::operator=(const basic_string& value)
{
    return stringAssign(this, value);
}
}

struct Profiler {
    unsigned char padding[0x130];
    std::string name;

    void setName(std::string value);
};

void Profiler::setName(std::string value)
{
    name = value;
}
