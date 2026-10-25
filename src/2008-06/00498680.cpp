// from server: 100% by colin
// roc 2008-06 00498680  unit: RBX::Network::VPlayers::?$SignalDesc  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498680
//
// 00498680  8b442404             mov eax, dword ptr [esp + 4]
// 00498684  56                   push esi
// 00498685  8b30                 mov esi, dword ptr [eax]
// 00498687  83ec1c               sub esp, 0x1c
// 0049868a  8d560c               lea edx, [esi + 0xc]
// 0049868d  8bcc                 mov ecx, esp
// 0049868f  89642424             mov dword ptr [esp + 0x24], esp
// 00498693  52                   push edx
// 00498694  ff155c248000         call dword ptr [0x80245c]
// 0049869a  8b4604               mov eax, dword ptr [esi + 4]
// 0049869d  83ec08               sub esp, 8
// 004986a0  8bcc                 mov ecx, esp
// 004986a2  8901                 mov dword ptr [ecx], eax
// 004986a4  8b4608               mov eax, dword ptr [esi + 8]
// 004986a7  8964242c             mov dword ptr [esp + 0x2c], esp
// 004986ab  894104               mov dword ptr [ecx + 4], eax
// 004986ae  85c0                 test eax, eax
// 004986b0  740c                 je 0x4986be
// 004986b2  83c004               add eax, 4
// 004986b5  b901000000           mov ecx, 1
// 004986ba  f00fc108             lock xadd dword ptr [eax], ecx
// 004986be  8b16                 mov edx, dword ptr [esi]
// 004986c0  ffd2                 call edx
// 004986c2  83c424               add esp, 0x24
// 004986c5  5e                   pop esi
// 004986c6  c3                   ret 

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
