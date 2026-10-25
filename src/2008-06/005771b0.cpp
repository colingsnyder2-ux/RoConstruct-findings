// from server: 100% by tester
// roc 2008-06 005771b0  unit: RBX::DataModel  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005771b0
//
// 005771b0  6aff                 push -1
// 005771b2  683b467d00           push 0x7d463b
// 005771b7  64a100000000         mov eax, dword ptr fs:[0]
// 005771bd  50                   push eax
// 005771be  64892500000000       mov dword ptr fs:[0], esp
// 005771c5  83ec08               sub esp, 8
// 005771c8  c7042400000000       mov dword ptr [esp], 0
// 005771cf  68ac010000           push 0x1ac
// 005771d4  c644240400           mov byte ptr [esp + 4], 0
// 005771d9  ff15b0288000         call dword ptr [0x8028b0]
// 005771df  83c404               add esp, 4
// 005771e2  89442404             mov dword ptr [esp + 4], eax
// 005771e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005771ee  85c0                 test eax, eax
// 005771f0  7409                 je 0x5771fb
// 005771f2  8bc8                 mov ecx, eax
// 005771f4  e8b75c0800           call 0x5fceb0
// 005771f9  eb02                 jmp 0x5771fd
// 005771fb  33c0                 xor eax, eax
// 005771fd  8b0c24               mov ecx, dword ptr [esp]
// 00577200  56                   push esi
// 00577201  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00577205  51                   push ecx
// 00577206  50                   push eax
// 00577207  8bce                 mov ecx, esi
// 00577209  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00577211  e8fafaffff           call 0x576d10
// 00577216  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057721a  8bc6                 mov eax, esi
// 0057721c  5e                   pop esi
// 0057721d  64890d00000000       mov dword ptr fs:[0], ecx
// 00577224  83c414               add esp, 0x14
// 00577227  c3                   ret 

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

class Workspace : public Instance
{
    char data[0x1ac - 4];
public:
    Workspace();
};

template boost::shared_ptr<Workspace> Creatable<Instance>::create<Workspace>();
}
