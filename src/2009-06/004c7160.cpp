// roc 2009-06 004c7160  unit: RBX::VInstance::?$NonFactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c7160
//
// 004c7160  8b442404             mov eax, dword ptr [esp + 4]
// 004c7164  56                   push esi
// 004c7165  8b30                 mov esi, dword ptr [eax]
// 004c7167  83ec1c               sub esp, 0x1c
// 004c716a  8d560c               lea edx, [esi + 0xc]
// 004c716d  8bcc                 mov ecx, esp
// 004c716f  89642424             mov dword ptr [esp + 0x24], esp
// 004c7173  52                   push edx
// 004c7174  ff15b8e48900         call dword ptr [0x89e4b8]
// 004c717a  8b4604               mov eax, dword ptr [esi + 4]
// 004c717d  83ec08               sub esp, 8
// 004c7180  8bcc                 mov ecx, esp
// 004c7182  8901                 mov dword ptr [ecx], eax
// 004c7184  8b4608               mov eax, dword ptr [esi + 8]
// 004c7187  8964242c             mov dword ptr [esp + 0x2c], esp
// 004c718b  894104               mov dword ptr [ecx + 4], eax
// 004c718e  85c0                 test eax, eax
// 004c7190  740c                 je 0x4c719e
// 004c7192  83c004               add eax, 4
// 004c7195  b901000000           mov ecx, 1
// 004c719a  f00fc108             lock xadd dword ptr [eax], ecx
// 004c719e  8b16                 mov edx, dword ptr [esi]
// 004c71a0  ffd2                 call edx
// 004c71a2  83c424               add esp, 0x24
// 004c71a5  5e                   pop esi
// 004c71a6  c3                   ret 
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