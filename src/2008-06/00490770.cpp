// from server: 100% by colin
// roc 2008-06 00490770  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490770
//
// 00490770  6aff                 push -1
// 00490772  683b467d00           push 0x7d463b
// 00490777  64a100000000         mov eax, dword ptr fs:[0]
// 0049077d  50                   push eax
// 0049077e  64892500000000       mov dword ptr fs:[0], esp
// 00490785  83ec08               sub esp, 8
// 00490788  c7042400000000       mov dword ptr [esp], 0
// 0049078f  682c020000           push 0x22c
// 00490794  c644240400           mov byte ptr [esp + 4], 0
// 00490799  ff15b0288000         call dword ptr [0x8028b0]
// 0049079f  83c404               add esp, 4
// 004907a2  89442404             mov dword ptr [esp + 4], eax
// 004907a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004907ae  85c0                 test eax, eax
// 004907b0  740b                 je 0x4907bd
// 004907b2  6a01                 push 1
// 004907b4  8bc8                 mov ecx, eax
// 004907b6  e8c5aa1400           call 0x5db280
// 004907bb  eb02                 jmp 0x4907bf
// 004907bd  33c0                 xor eax, eax
// 004907bf  8b0c24               mov ecx, dword ptr [esp]
// 004907c2  56                   push esi
// 004907c3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004907c7  51                   push ecx
// 004907c8  50                   push eax
// 004907c9  8bce                 mov ecx, esi
// 004907cb  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004907d3  e8e8feffff           call 0x4906c0
// 004907d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004907dc  8bc6                 mov eax, esi
// 004907de  5e                   pop esi
// 004907df  64890d00000000       mov dword ptr fs:[0], ecx
// 004907e6  83c414               add esp, 0x14
// 004907e9  c3                   ret 

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

class ModelInstance : public Instance, public virtual IModelModifier
{
    char data[0x22c - 12];
public:
    ModelInstance();
};

template boost::shared_ptr<ModelInstance> Creatable<Instance>::create<ModelInstance>();
}
