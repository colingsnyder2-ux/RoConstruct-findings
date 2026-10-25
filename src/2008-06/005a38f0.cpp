// from server: 100% by king_originala
// roc 2008-06 005a38f0  unit: RBX::Workspace  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a38f0
//
// 005a38f0  64a100000000         mov eax, dword ptr fs:[0]
// 005a38f6  6aff                 push -1
// 005a38f8  68e88e7d00           push 0x7d8ee8
// 005a38fd  50                   push eax
// 005a38fe  64892500000000       mov dword ptr fs:[0], esp
// 005a3905  83ec20               sub esp, 0x20
// 005a3908  56                   push esi
// 005a3909  57                   push edi
// 005a390a  8bf9                 mov edi, ecx
// 005a390c  57                   push edi
// 005a390d  e81efaffff           call 0x5a3330
// 005a3912  8bb030010000         mov esi, dword ptr [eax + 0x130]
// 005a3918  83c404               add esp, 4
// 005a391b  85f6                 test esi, esi
// 005a391d  743b                 je 0x5a395a
// 005a391f  8b8fb0030000         mov ecx, dword ptr [edi + 0x3b0]
// 005a3925  8b01                 mov eax, dword ptr [ecx]
// 005a3927  8b4038               mov eax, dword ptr [eax + 0x38]
// 005a392a  8d542408             lea edx, [esp + 8]
// 005a392e  52                   push edx
// 005a392f  ffd0                 call eax
// 005a3931  8b16                 mov edx, dword ptr [esi]
// 005a3933  8b521c               mov edx, dword ptr [edx + 0x1c]
// 005a3936  50                   push eax
// 005a3937  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005a393b  50                   push eax
// 005a393c  8bce                 mov ecx, esi
// 005a393e  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005a3946  ffd2                 call edx
// 005a3948  8d4c2408             lea ecx, [esp + 8]
// 005a394c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005a3954  ff1568248000         call dword ptr [0x802468]
// 005a395a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a395e  5f                   pop edi
// 005a395f  5e                   pop esi
// 005a3960  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3967  83c42c               add esp, 0x2c
// 005a396a  c20400               ret 4

extern "C" void (__thiscall* string_destroy)(void*);

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits, class Allocator>
class basic_string {
    unsigned char storage[32];
public:
    ~basic_string();
};

template<class T, class Traits, class Allocator>
__forceinline basic_string<T, Traits, Allocator>::~basic_string()
{
    string_destroy(this);
}

typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

namespace RBX {
class Instance {
public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

class ServiceProvider : public Instance {
public:
    ServiceProvider* finish();
};
}

RBX::ServiceProvider* __cdecl func_005a3330(RBX::Instance*);

struct Source {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual std::string get();
};

struct Destination {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void set(int, const std::string&);
};

struct S : RBX::Instance {
    unsigned char padding[0x2a8];
    Source* source;
    void f(int);
};

void S::f(int value)
{
    RBX::ServiceProvider* provider = func_005a3330(this);
    Destination* destination =
        *(Destination**)((unsigned char*)provider + 0x130);

    if (destination)
        destination->set(value, source->get());
}
