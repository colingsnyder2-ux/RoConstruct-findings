// from server: 100% by tester
// roc 2008-06 005a31b0  unit: RBX::Workspace  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a31b0
//
// 005a31b0  6aff                 push -1
// 005a31b2  683b467d00           push 0x7d463b
// 005a31b7  64a100000000         mov eax, dword ptr fs:[0]
// 005a31bd  50                   push eax
// 005a31be  64892500000000       mov dword ptr fs:[0], esp
// 005a31c5  83ec08               sub esp, 8
// 005a31c8  c7042400000000       mov dword ptr [esp], 0
// 005a31cf  6898020000           push 0x298
// 005a31d4  c644240400           mov byte ptr [esp + 4], 0
// 005a31d9  ff15b0288000         call dword ptr [0x8028b0]
// 005a31df  83c404               add esp, 4
// 005a31e2  89442404             mov dword ptr [esp + 4], eax
// 005a31e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a31ee  85c0                 test eax, eax
// 005a31f0  740b                 je 0x5a31fd
// 005a31f2  6a01                 push 1
// 005a31f4  8bc8                 mov ecx, eax
// 005a31f6  e825660700           call 0x619820
// 005a31fb  eb02                 jmp 0x5a31ff
// 005a31fd  33c0                 xor eax, eax
// 005a31ff  8b0c24               mov ecx, dword ptr [esp]
// 005a3202  56                   push esi
// 005a3203  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a3207  51                   push ecx
// 005a3208  50                   push eax
// 005a3209  8bce                 mov ecx, esi
// 005a320b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005a3213  e8e8feffff           call 0x5a3100
// 005a3218  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a321c  8bc6                 mov eax, esi
// 005a321e  5e                   pop esi
// 005a321f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3226  83c414               add esp, 0x14
// 005a3229  c3                   ret 

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

class IModelModifier { public: virtual ~IModelModifier(); };

class Flag : public Instance, public virtual IModelModifier
{
    char data[0x298 - 12];
public:
    Flag();
};

template boost::shared_ptr<Flag> Creatable<Instance>::create<Flag>();
}
