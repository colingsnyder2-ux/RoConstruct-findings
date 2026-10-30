// roc 2010-06 004c4250  unit: RBX::VInstance::?$NonFactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4250
//
// 004c4250  8b442404             mov eax, dword ptr [esp + 4]
// 004c4254  56                   push esi
// 004c4255  8b30                 mov esi, dword ptr [eax]
// 004c4257  83ec1c               sub esp, 0x1c
// 004c425a  8d560c               lea edx, [esi + 0xc]
// 004c425d  8bcc                 mov ecx, esp
// 004c425f  89642424             mov dword ptr [esp + 0x24], esp
// 004c4263  52                   push edx
// 004c4264  ff150ca49e00         call dword ptr [0x9ea40c]
// 004c426a  8b4604               mov eax, dword ptr [esi + 4]
// 004c426d  83ec08               sub esp, 8
// 004c4270  8bcc                 mov ecx, esp
// 004c4272  8901                 mov dword ptr [ecx], eax
// 004c4274  8b4608               mov eax, dword ptr [esi + 8]
// 004c4277  8964242c             mov dword ptr [esp + 0x2c], esp
// 004c427b  894104               mov dword ptr [ecx + 4], eax
// 004c427e  85c0                 test eax, eax
// 004c4280  740c                 je 0x4c428e
// 004c4282  83c004               add eax, 4
// 004c4285  b901000000           mov ecx, 1
// 004c428a  f00fc108             lock xadd dword ptr [eax], ecx
// 004c428e  8b16                 mov edx, dword ptr [esi]
// 004c4290  ffd2                 call edx
// 004c4292  83c424               add esp, 0x24
// 004c4295  5e                   pop esi
// 004c4296  c3                   ret 
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