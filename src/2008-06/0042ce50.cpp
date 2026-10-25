// from server: 100% by colin
// roc 2008-06 0042ce50  unit: CLuaHtmlView::Binder  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ce50
//
// 0042ce50  64a100000000         mov eax, dword ptr fs:[0]
// 0042ce56  6aff                 push -1
// 0042ce58  68793f7c00           push 0x7c3f79
// 0042ce5d  50                   push eax
// 0042ce5e  64892500000000       mov dword ptr fs:[0], esp
// 0042ce65  56                   push esi
// 0042ce66  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042ce6a  50                   push eax
// 0042ce6b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042ce73  e8a8e71300           call 0x56b620
// 0042ce78  8bf0                 mov esi, eax
// 0042ce7a  85f6                 test esi, esi
// 0042ce7c  7421                 je 0x42ce9f
// 0042ce7e  83ec1c               sub esp, 0x1c
// 0042ce81  8d542434             lea edx, [esp + 0x34]
// 0042ce85  8bcc                 mov ecx, esp
// 0042ce87  89642430             mov dword ptr [esp + 0x30], esp
// 0042ce8b  52                   push edx
// 0042ce8c  ff155c248000         call dword ptr [0x80245c]
// 0042ce92  8d442430             lea eax, [esp + 0x30]
// 0042ce96  50                   push eax
// 0042ce97  8d4e10               lea ecx, [esi + 0x10]
// 0042ce9a  e831feffff           call 0x42ccd0
// 0042ce9f  8d4c2418             lea ecx, [esp + 0x18]
// 0042cea3  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0042ceab  ff1568248000         call dword ptr [0x802468]
// 0042ceb1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042ceb5  64890d00000000       mov dword ptr fs:[0], ecx
// 0042cebc  5e                   pop esi
// 0042cebd  83c40c               add esp, 0xc
// 0042cec0  c22000               ret 0x20

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}





struct Result {
    void* value;
    Result();
};

struct Receiver {
    Result apply(std::string);
};

struct Object {
    char padding[16];
    Receiver receiver;
};

struct Binder {
    Object* lookup(void*);
    void invoke(void*, std::string);
};

void Binder::invoke(void* value, std::string text)
{
    Object* object = lookup(value);
    if (object)
        object->receiver.apply(text);
}
