// roc 2011-06 00775510  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00775510
//
// 00775510  8b442404             mov eax, dword ptr [esp + 4]
// 00775514  56                   push esi
// 00775515  8b30                 mov esi, dword ptr [eax]
// 00775517  83ec1c               sub esp, 0x1c
// 0077551a  8d560c               lea edx, [esi + 0xc]
// 0077551d  8bcc                 mov ecx, esp
// 0077551f  89642424             mov dword ptr [esp + 0x24], esp
// 00775523  52                   push edx
// 00775524  ff15c804a400         call dword ptr [0xa404c8]
// 0077552a  8b4604               mov eax, dword ptr [esi + 4]
// 0077552d  83ec08               sub esp, 8
// 00775530  8bcc                 mov ecx, esp
// 00775532  8901                 mov dword ptr [ecx], eax
// 00775534  8b4608               mov eax, dword ptr [esi + 8]
// 00775537  8964242c             mov dword ptr [esp + 0x2c], esp
// 0077553b  894104               mov dword ptr [ecx + 4], eax
// 0077553e  85c0                 test eax, eax
// 00775540  740c                 je 0x77554e
// 00775542  83c004               add eax, 4
// 00775545  b901000000           mov ecx, 1
// 0077554a  f00fc108             lock xadd dword ptr [eax], ecx
// 0077554e  8b16                 mov edx, dword ptr [esi]
// 00775550  ffd2                 call edx
// 00775552  83c424               add esp, 0x24
// 00775555  5e                   pop esi
// 00775556  c3                   ret 
// copied from an identical function in another client (function ?invoke@ns_ROCX00000a@@YAXPAPAUEntry@1@@Z)

namespace ns_ROCX00000a {
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
}
