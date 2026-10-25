// from server: 100% by king_originala
// roc 2008-06 0046cde0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cde0
//
// 0046cde0  6aff                 push -1
// 0046cde2  686b3c7c00           push 0x7c3c6b
// 0046cde7  64a100000000         mov eax, dword ptr fs:[0]
// 0046cded  50                   push eax
// 0046cdee  64892500000000       mov dword ptr fs:[0], esp
// 0046cdf5  83ec1c               sub esp, 0x1c
// 0046cdf8  53                   push ebx
// 0046cdf9  68f4c88100           push 0x81c8f4
// 0046cdfe  8d4c2408             lea ecx, [esp + 8]
// 0046ce02  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0046ce0a  ff1558248000         call dword ptr [0x802458]
// 0046ce10  8d442404             lea eax, [esp + 4]
// 0046ce14  50                   push eax
// 0046ce15  8d4c2434             lea ecx, [esp + 0x34]
// 0046ce19  51                   push ecx
// 0046ce1a  c644243001           mov byte ptr [esp + 0x30], 1
// 0046ce1f  e8cc2b0000           call 0x46f9f0
// 0046ce24  83c408               add esp, 8
// 0046ce27  85c0                 test eax, eax
// 0046ce29  8d4c2404             lea ecx, [esp + 4]
// 0046ce2d  0f94c3               sete bl
// 0046ce30  c644242800           mov byte ptr [esp + 0x28], 0
// 0046ce35  ff1568248000         call dword ptr [0x802468]
// 0046ce3b  84db                 test bl, bl
// 0046ce3d  7426                 je 0x46ce65
// 0046ce3f  8d4c2430             lea ecx, [esp + 0x30]
// 0046ce43  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046ce4b  ff1568248000         call dword ptr [0x802468]
// 0046ce51  33c0                 xor eax, eax
// 0046ce53  5b                   pop ebx
// 0046ce54  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046ce58  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ce5f  83c428               add esp, 0x28
// 0046ce62  c21c00               ret 0x1c
// 0046ce65  68ecc88100           push 0x81c8ec
// 0046ce6a  8d4c2408             lea ecx, [esp + 8]
// 0046ce6e  ff1558248000         call dword ptr [0x802458]
// 0046ce74  8d542404             lea edx, [esp + 4]
// 0046ce78  52                   push edx
// 0046ce79  8d442434             lea eax, [esp + 0x34]
// 0046ce7d  50                   push eax
// 0046ce7e  c644243002           mov byte ptr [esp + 0x30], 2
// 0046ce83  e8682b0000           call 0x46f9f0
// 0046ce88  83c408               add esp, 8
// 0046ce8b  85c0                 test eax, eax
// 0046ce8d  8d4c2404             lea ecx, [esp + 4]
// 0046ce91  0f94c3               sete bl
// 0046ce94  c644242800           mov byte ptr [esp + 0x28], 0
// 0046ce99  ff1568248000         call dword ptr [0x802468]
// 0046ce9f  8d4c2430             lea ecx, [esp + 0x30]
// 0046cea3  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046ceab  ff1568248000         call dword ptr [0x802468]
// 0046ceb1  b801000000           mov eax, 1
// 0046ceb6  84db                 test bl, bl
// 0046ceb8  7505                 jne 0x46cebf
// 0046ceba  b802000000           mov eax, 2
// 0046cebf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046cec3  5b                   pop ebx
// 0046cec4  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cecb  83c428               add esp, 0x28
// 0046cece  c21c00               ret 0x1c

extern void (__thiscall *string_construct)(void*, const char*);
extern void (__thiscall *string_destroy)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

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
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(const T* text)
    {
        string_construct(this, text);
    }

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        string_destroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

int __cdecl compare(const std::string&, const std::string&);

int __stdcall classify(std::string value)
{
    if (compare(value, std::string("symmetric")) == 0)
        return 0;
    if (compare(value, std::string("brick")) == 0)
        return 1;
    return 2;
}
