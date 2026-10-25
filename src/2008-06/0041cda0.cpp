// from server: 100% by tester
// roc 2008-06 0041cda0  unit: VDHTMLWindowService::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041cda0
//
// 0041cda0  6aff                 push -1
// 0041cda2  683b467d00           push 0x7d463b
// 0041cda7  64a100000000         mov eax, dword ptr fs:[0]
// 0041cdad  50                   push eax
// 0041cdae  64892500000000       mov dword ptr fs:[0], esp
// 0041cdb5  83ec08               sub esp, 8
// 0041cdb8  c7042400000000       mov dword ptr [esp], 0
// 0041cdbf  6830010000           push 0x130
// 0041cdc4  c644240400           mov byte ptr [esp + 4], 0
// 0041cdc9  ff15b0288000         call dword ptr [0x8028b0]
// 0041cdcf  83c404               add esp, 4
// 0041cdd2  89442404             mov dword ptr [esp + 4], eax
// 0041cdd6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041cdde  85c0                 test eax, eax
// 0041cde0  7409                 je 0x41cdeb
// 0041cde2  8bc8                 mov ecx, eax
// 0041cde4  e8d7fbffff           call 0x41c9c0
// 0041cde9  eb02                 jmp 0x41cded
// 0041cdeb  33c0                 xor eax, eax
// 0041cded  8b0c24               mov ecx, dword ptr [esp]
// 0041cdf0  56                   push esi
// 0041cdf1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041cdf5  51                   push ecx
// 0041cdf6  50                   push eax
// 0041cdf7  8bce                 mov ecx, esi
// 0041cdf9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041ce01  e89aecffff           call 0x41baa0
// 0041ce06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041ce0a  8bc6                 mov eax, esi
// 0041ce0c  5e                   pop esi
// 0041ce0d  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ce14  83c414               add esp, 0x14
// 0041ce17  c3                   ret 

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

class Script : public Instance
{
    char data[0x130 - 4];
public:
    Script();
};

template boost::shared_ptr<Script> Creatable<Instance>::create<Script>();
}
