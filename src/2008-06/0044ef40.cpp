// from server: 100% by king_originala
// roc 2008-06 0044ef40  unit: CRobloxDHtmlDialog  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ef40
//
// 0044ef40  6aff                 push -1
// 0044ef42  68e7157c00           push 0x7c15e7
// 0044ef47  64a100000000         mov eax, dword ptr fs:[0]
// 0044ef4d  50                   push eax
// 0044ef4e  64892500000000       mov dword ptr fs:[0], esp
// 0044ef55  51                   push ecx
// 0044ef56  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044ef5a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0044ef5e  56                   push esi
// 0044ef5f  8bf1                 mov esi, ecx
// 0044ef61  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0044ef65  50                   push eax
// 0044ef66  51                   push ecx
// 0044ef67  52                   push edx
// 0044ef68  8bce                 mov ecx, esi
// 0044ef6a  89742410             mov dword ptr [esp + 0x10], esi
// 0044ef6e  e8fd232500           call 0x6a1370
// 0044ef73  8d8e14010000         lea ecx, [esi + 0x114]
// 0044ef79  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044ef81  c706bc708100         mov dword ptr [esi], 0x8170bc
// 0044ef87  c746748c708100       mov dword ptr [esi + 0x74], 0x81708c
// 0044ef8e  ff1560248000         call dword ptr [0x802460]
// 0044ef94  b801000000           mov eax, 1
// 0044ef99  88442410             mov byte ptr [esp + 0x10], al
// 0044ef9d  898690000000         mov dword ptr [esi + 0x90], eax
// 0044efa3  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0044efa9  0d13408401           or eax, 0x1844013
// 0044efae  50                   push eax
// 0044efaf  8bce                 mov ecx, esi
// 0044efb1  e876192500           call 0x6a092c
// 0044efb6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044efba  8bc6                 mov eax, esi
// 0044efbc  5e                   pop esi
// 0044efbd  64890d00000000       mov dword ptr fs:[0], ecx
// 0044efc4  83c410               add esp, 0x10
// 0044efc7  c20c00               ret 0xc

extern void (__thiscall *string_ctor)(void *);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string();
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string()
    {
        string_ctor(this);
    }
}

struct Primary {
    virtual void vf();
    unsigned char padding[0x70];
};

struct Secondary {
    virtual void vf();
    unsigned char padding0[0x18];
    int state;
    unsigned char padding1[0x78];
    unsigned int flags;
    unsigned char padding2[4];
};

struct Base : Primary, Secondary {
    Base(int, int, int);
    ~Base();
    void setFlags(unsigned int);
};

struct S : Base {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > text;

    S(int, int, int);
    virtual void vf();
};

S::S(int a, int b, int c) : Base(a, b, c)
{
    state = 1;
    setFlags(flags | 0x01844013);
}
