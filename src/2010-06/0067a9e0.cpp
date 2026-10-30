// roc 2010-06 0067a9e0  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067a9e0
//
// 0067a9e0  64a100000000         mov eax, dword ptr fs:[0]
// 0067a9e6  6aff                 push -1
// 0067a9e8  6839ff9900           push 0x99ff39
// 0067a9ed  50                   push eax
// 0067a9ee  64892500000000       mov dword ptr fs:[0], esp
// 0067a9f5  8d442410             lea eax, [esp + 0x10]
// 0067a9f9  50                   push eax
// 0067a9fa  81c130010000         add ecx, 0x130
// 0067aa00  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0067aa08  ff1568a49e00         call dword ptr [0x9ea468]
// 0067aa0e  8d4c2410             lea ecx, [esp + 0x10]
// 0067aa12  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0067aa1a  ff1500a49e00         call dword ptr [0x9ea400]
// 0067aa20  8b0c24               mov ecx, dword ptr [esp]
// 0067aa23  64890d00000000       mov dword ptr fs:[0], ecx
// 0067aa2a  83c40c               add esp, 0xc
// 0067aa2d  c21c00               ret 0x1c
// copied from an identical function in another client (function ?setName@Profiler@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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