// from server: 56% by colin
// from server: 53% by colin
// roc 2008-06 00602120  unit: RBX::UnifiedImageWidget  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602120
//
// 00602120  6aff                 push -1
// 00602122  6876837d00           push 0x7d8376
// 00602127  64a100000000         mov eax, dword ptr fs:[0]
// 0060212d  50                   push eax
// 0060212e  64892500000000       mov dword ptr fs:[0], esp
// 00602135  83ec10               sub esp, 0x10
// 00602138  56                   push esi
// 00602139  c744240800000000     mov dword ptr [esp + 8], 0
// 00602141  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00602149  6864010000           push 0x164
// 0060214e  c644240800           mov byte ptr [esp + 8], 0
// 00602153  ff15b0288000         call dword ptr [0x8028b0]
// 00602159  8bf0                 mov esi, eax
// 0060215b  83c404               add esp, 4
// 0060215e  8974240c             mov dword ptr [esp + 0xc], esi
// 00602162  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00602167  85f6                 test esi, esi
// 00602169  7422                 je 0x60218d
// 0060216b  83ec1c               sub esp, 0x1c
// 0060216e  8d442460             lea eax, [esp + 0x60]
// 00602172  8bcc                 mov ecx, esp
// 00602174  8964242c             mov dword ptr [esp + 0x2c], esp
// 00602178  50                   push eax
// 00602179  ff155c248000         call dword ptr [0x80245c]
// 0060217f  8d4c2444             lea ecx, [esp + 0x44]
// 00602183  51                   push ecx
// 00602184  8bce                 mov ecx, esi
// 00602186  e835c70400           call 0x64e8c0
// 0060218b  eb02                 jmp 0x60218f
// 0060218d  33c0                 xor eax, eax
// 0060218f  8b542404             mov edx, dword ptr [esp + 4]
// 00602193  8b742424             mov esi, dword ptr [esp + 0x24]
// 00602197  52                   push edx
// 00602198  50                   push eax
// 00602199  8bce                 mov ecx, esi
// 0060219b  c644242402           mov byte ptr [esp + 0x24], 2
// 006021a0  e84bf4ffff           call 0x6015f0
// 006021a5  8d4c2428             lea ecx, [esp + 0x28]
// 006021a9  c744240801000000     mov dword ptr [esp + 8], 1
// 006021b1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006021b6  ff1568248000         call dword ptr [0x802468]
// 006021bc  8d4c2444             lea ecx, [esp + 0x44]
// 006021c0  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006021c5  ff1568248000         call dword ptr [0x802468]
// 006021cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006021cf  8bc6                 mov eax, esi
// 006021d1  64890d00000000       mov dword ptr fs:[0], ecx
// 006021d8  5e                   pop esi
// 006021d9  83c41c               add esp, 0x1c
// 006021dc  c3                   ret 

typedef unsigned int size_t;

extern "C" void* __cdecl malloc(size_t);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string();
        basic_string(const basic_string&);
        __declspec(dllimport) ~basic_string() throw();
        basic_string& operator=(const basic_string&);
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Widget {
    void* vtable;
    char pad[0x160];
};

struct UnifiedImageWidget {
    void construct(std::string*, Widget*);
};

extern void (__thiscall *stringCopy)(std::string*, const std::string*);
extern void (__thiscall *stringDestroy)(std::string*);

extern void (__thiscall *setImage)(UnifiedImageWidget*, void*, void*);

UnifiedImageWidget* __cdecl createWidget(const std::string& name);

UnifiedImageWidget* __cdecl createWidget(const std::string& name)
{
    Widget* w = (Widget*)malloc(0x164);
    UnifiedImageWidget* result;
    if (w != 0)
    {
        std::string tmp;
        stringCopy(&tmp, &name);
        ((UnifiedImageWidget*)w)->construct(&tmp, w);
        stringDestroy(&tmp);
        result = (UnifiedImageWidget*)w;
    }
    else
    {
        result = 0;
    }
    setImage(result, 0, 0);
    return result;
}
