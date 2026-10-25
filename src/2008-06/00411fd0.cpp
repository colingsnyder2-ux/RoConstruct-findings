// from server: 100% by tester
// roc 2008-06 00411fd0  unit: ChatEnter  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411fd0
//
// 00411fd0  6aff                 push -1
// 00411fd2  683b467d00           push 0x7d463b
// 00411fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00411fdd  50                   push eax
// 00411fde  64892500000000       mov dword ptr fs:[0], esp
// 00411fe5  83ec08               sub esp, 8
// 00411fe8  c7042400000000       mov dword ptr [esp], 0
// 00411fef  68b0010000           push 0x1b0
// 00411ff4  c644240400           mov byte ptr [esp + 4], 0
// 00411ff9  ff15b0288000         call dword ptr [0x8028b0]
// 00411fff  83c404               add esp, 4
// 00412002  89442404             mov dword ptr [esp + 4], eax
// 00412006  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041200e  85c0                 test eax, eax
// 00412010  7409                 je 0x41201b
// 00412012  8bc8                 mov ecx, eax
// 00412014  e8a79d0800           call 0x49bdc0
// 00412019  eb02                 jmp 0x41201d
// 0041201b  33c0                 xor eax, eax
// 0041201d  8b0c24               mov ecx, dword ptr [esp]
// 00412020  56                   push esi
// 00412021  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00412025  51                   push ecx
// 00412026  50                   push eax
// 00412027  8bce                 mov ecx, esi
// 00412029  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00412031  e80afeffff           call 0x411e40
// 00412036  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041203a  8bc6                 mov eax, esi
// 0041203c  5e                   pop esi
// 0041203d  64890d00000000       mov dword ptr fs:[0], ecx
// 00412044  83c414               add esp, 0x14
// 00412047  c3                   ret 

#include <stdlib.h>

namespace boost {
template<class T>
class shared_ptr
{
    T* px;
    void* pn;
public:
    template<class Y, class D> shared_ptr(Y* p, D d);
    ~shared_ptr();
};
}

namespace RBX {
template<class T>
class Creatable
{
public:
    class Deleter
    {
    public:
        void operator()(T* instance);
    };

    template<class U>
    static boost::shared_ptr<U> create()
    {
        return boost::shared_ptr<U>(new U(), Deleter());
    }

protected:
    static void* operator new(size_t size) { return malloc(size); }
};

class Instance : public Creatable<Instance>
{
public:
    virtual ~Instance();
};
namespace Network {
class Players : public Instance
{
    char data[0x1b0 - 4];
public:
    Players();
};
}
template boost::shared_ptr<Network::Players> Creatable<Instance>::create<Network::Players>();
}
