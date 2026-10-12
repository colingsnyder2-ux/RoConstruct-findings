// from server: 100% by king_originala
// roc 2008-06 00638170  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638170
//
// 00638170  6aff                 push -1
// 00638172  6801a37d00           push 0x7da301
// 00638177  64a100000000         mov eax, dword ptr fs:[0]
// 0063817d  50                   push eax
// 0063817e  64892500000000       mov dword ptr fs:[0], esp
// 00638185  83ec20               sub esp, 0x20
// 00638188  56                   push esi
// 00638189  8bf1                 mov esi, ecx
// 0063818b  89742404             mov dword ptr [esp + 4], esi
// 0063818f  e87cf9ffff           call 0x637b10
// 00638194  6878848100           push 0x818478
// 00638199  8d4c240c             lea ecx, [esp + 0xc]
// 0063819d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006381a5  c7060c938400         mov dword ptr [esi], 0x84930c
// 006381ab  c7461000938400       mov dword ptr [esi + 0x10], 0x849300
// 006381b2  c74614f8928400       mov dword ptr [esi + 0x14], 0x8492f8
// 006381b9  c74620f0928400       mov dword ptr [esi + 0x20], 0x8492f0
// 006381c0  c74624e0928400       mov dword ptr [esi + 0x24], 0x8492e0
// 006381c7  c74644d0928400       mov dword ptr [esi + 0x44], 0x8492d0
// 006381ce  c74664c0928400       mov dword ptr [esi + 0x64], 0x8492c0
// 006381d5  c78684000000b0928400 mov dword ptr [esi + 0x84], 0x8492b0
// 006381df  c786a4000000a0928400 mov dword ptr [esi + 0xa4], 0x8492a0
// 006381e9  c786c400000090928400 mov dword ptr [esi + 0xc4], 0x849290
// 006381f3  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 006381fd  ff1558248000         call dword ptr [0x802458]
// 00638203  8d442408             lea eax, [esp + 8]
// 00638207  50                   push eax
// 00638208  8bce                 mov ecx, esi
// 0063820a  c644243001           mov byte ptr [esp + 0x30], 1
// 0063820f  e87c2df2ff           call 0x55af90
// 00638214  8d4c2408             lea ecx, [esp + 8]
// 00638218  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063821d  ff1568248000         call dword ptr [0x802468]
// 00638223  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638227  8bc6                 mov eax, esi
// 00638229  5e                   pop esi
// 0063822a  64890d00000000       mov dword ptr fs:[0], ecx
// 00638231  83c42c               add esp, 0x2c
// 00638234  c3                   ret 

typedef void (__thiscall *StringConstructor)(void*, const char*);
typedef void (__thiscall *StringDestructor)(void*);

extern StringConstructor importedStringConstructor;
extern StringDestructor importedStringDestructor;

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class T, class A>
    class basic_string {
        char storage[28];
    public:
        basic_string(const C*);
        ~basic_string();
    };

    template<class C, class T, class A>
    __forceinline basic_string<C, T, A>::basic_string(const C* text) {
        importedStringConstructor(this, text);
    }

    template<class C, class T, class A>
    __forceinline basic_string<C, T, A>::~basic_string() {
        importedStringDestructor(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Base {
    unsigned int data[76];

    Base();
    ~Base();
    void setName(const std::string&);
};

struct S : Base {
    unsigned int value;

    S();
};

S::S() : Base() {
    data[0] = 0x0084930c;
    data[4] = 0x00849300;
    data[5] = 0x008492f8;
    data[8] = 0x008492f0;
    data[9] = 0x008492e0;
    data[17] = 0x008492d0;
    data[25] = 0x008492c0;
    data[33] = 0x008492b0;
    data[41] = 0x008492a0;
    data[49] = 0x00849290;
    value = 0;
    std::string name("Value");
    setName(name);
}
