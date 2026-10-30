// roc 2009-12 005169d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005169d0
//
// 005169d0  8b442404             mov eax, dword ptr [esp + 4]
// 005169d4  56                   push esi
// 005169d5  8b30                 mov esi, dword ptr [eax]
// 005169d7  83ec1c               sub esp, 0x1c
// 005169da  8d560c               lea edx, [esi + 0xc]
// 005169dd  8bcc                 mov ecx, esp
// 005169df  89642424             mov dword ptr [esp + 0x24], esp
// 005169e3  52                   push edx
// 005169e4  ff15f0b69800         call dword ptr [0x98b6f0]
// 005169ea  8b4604               mov eax, dword ptr [esi + 4]
// 005169ed  83ec08               sub esp, 8
// 005169f0  8bcc                 mov ecx, esp
// 005169f2  8901                 mov dword ptr [ecx], eax
// 005169f4  8b4608               mov eax, dword ptr [esi + 8]
// 005169f7  8964242c             mov dword ptr [esp + 0x2c], esp
// 005169fb  894104               mov dword ptr [ecx + 4], eax
// 005169fe  85c0                 test eax, eax
// 00516a00  740c                 je 0x516a0e
// 00516a02  83c004               add eax, 4
// 00516a05  b901000000           mov ecx, 1
// 00516a0a  f00fc108             lock xadd dword ptr [eax], ecx
// 00516a0e  8b16                 mov edx, dword ptr [esi]
// 00516a10  ffd2                 call edx
// 00516a12  83c424               add esp, 0x24
// 00516a15  5e                   pop esi
// 00516a16  c3                   ret 
// copied from an identical function in another client (function ?invoke@@YAXPAPAUEntry@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string();
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
typedef std::string String;

struct Control
{
    long reserved;
    volatile long references;
};

struct Shared
{
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Entry
{
    void (__cdecl *callback)(Shared, String);
    Shared value;
    String text;
};

void __cdecl invoke(Entry** argument)
{
    Entry* entry = *argument;
    entry->callback(entry->value, entry->text);
}