// from server: 100% by king_originala
// roc 2008-06 0063fb40  unit: RBX::GrabTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063fb40
//
// 0063fb40  6aff                 push -1
// 0063fb42  68f8a97d00           push 0x7da9f8
// 0063fb47  64a100000000         mov eax, dword ptr fs:[0]
// 0063fb4d  50                   push eax
// 0063fb4e  64892500000000       mov dword ptr fs:[0], esp
// 0063fb55  51                   push ecx
// 0063fb56  56                   push esi
// 0063fb57  8bf1                 mov esi, ecx
// 0063fb59  89742404             mov dword ptr [esp + 4], esi
// 0063fb5d  c70654a48400         mov dword ptr [esi], 0x84a454
// 0063fb63  c746043ca48400       mov dword ptr [esi + 4], 0x84a43c
// 0063fb6a  8d4e1c               lea ecx, [esi + 0x1c]
// 0063fb6d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063fb75  ff1568248000         call dword ptr [0x802468]
// 0063fb7b  8bce                 mov ecx, esi
// 0063fb7d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0063fb85  e8f65bfdff           call 0x615780
// 0063fb8a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063fb8e  5e                   pop esi
// 0063fb8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0063fb96  83c410               add esp, 0x10
// 0063fb99  c3                   ret 

extern void (__thiscall *destroy_string)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        union {
            T buffer[16];
            T* pointer;
        };
        unsigned int length;
        unsigned int capacity;
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        destroy_string(this);
    }
}

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char storage[20];
    virtual ~Base();
};

struct GrabTool : Base {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > text;
    virtual ~GrabTool();
};

GrabTool::~GrabTool()
{
}
