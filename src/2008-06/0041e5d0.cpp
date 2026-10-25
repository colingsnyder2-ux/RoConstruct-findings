// from server: 100% by tester
// roc 2008-06 0041e5d0  unit: VDHTMLWindow::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e5d0
//
// 0041e5d0  6aff                 push -1
// 0041e5d2  683b467d00           push 0x7d463b
// 0041e5d7  64a100000000         mov eax, dword ptr fs:[0]
// 0041e5dd  50                   push eax
// 0041e5de  64892500000000       mov dword ptr fs:[0], esp
// 0041e5e5  83ec08               sub esp, 8
// 0041e5e8  c7042400000000       mov dword ptr [esp], 0
// 0041e5ef  689c010000           push 0x19c
// 0041e5f4  c644240400           mov byte ptr [esp + 4], 0
// 0041e5f9  ff15b0288000         call dword ptr [0x8028b0]
// 0041e5ff  83c404               add esp, 4
// 0041e602  89442404             mov dword ptr [esp + 4], eax
// 0041e606  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041e60e  85c0                 test eax, eax
// 0041e610  7409                 je 0x41e61b
// 0041e612  8bc8                 mov ecx, eax
// 0041e614  e817461400           call 0x562c30
// 0041e619  eb02                 jmp 0x41e61d
// 0041e61b  33c0                 xor eax, eax
// 0041e61d  8b0c24               mov ecx, dword ptr [esp]
// 0041e620  56                   push esi
// 0041e621  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041e625  51                   push ecx
// 0041e626  50                   push eax
// 0041e627  8bce                 mov ecx, esi
// 0041e629  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041e631  e8eafdffff           call 0x41e420
// 0041e636  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e63a  8bc6                 mov eax, esi
// 0041e63c  5e                   pop esi
// 0041e63d  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e644  83c414               add esp, 0x14
// 0041e647  c3                   ret 

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

class LocalScript : public Instance
{
    char data[0x19c - 4];
public:
    LocalScript();
};

template boost::shared_ptr<LocalScript> Creatable<Instance>::create<LocalScript>();
}
