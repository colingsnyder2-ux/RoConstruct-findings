// from server: 100% by colin
// roc 2008-06 00578400  unit: RBX::VLocalBackpack::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578400
//
// 00578400  6aff                 push -1
// 00578402  683b467d00           push 0x7d463b
// 00578407  64a100000000         mov eax, dword ptr fs:[0]
// 0057840d  50                   push eax
// 0057840e  64892500000000       mov dword ptr fs:[0], esp
// 00578415  83ec08               sub esp, 8
// 00578418  c7042400000000       mov dword ptr [esp], 0
// 0057841f  6870020000           push 0x270
// 00578424  c644240400           mov byte ptr [esp + 4], 0
// 00578429  ff15b0288000         call dword ptr [0x8028b0]
// 0057842f  83c404               add esp, 4
// 00578432  89442404             mov dword ptr [esp + 4], eax
// 00578436  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057843e  85c0                 test eax, eax
// 00578440  740b                 je 0x57844d
// 00578442  6a01                 push 1
// 00578444  8bc8                 mov ecx, eax
// 00578446  e8f57d0800           call 0x600240
// 0057844b  eb02                 jmp 0x57844f
// 0057844d  33c0                 xor eax, eax
// 0057844f  8b0c24               mov ecx, dword ptr [esp]
// 00578452  56                   push esi
// 00578453  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00578457  51                   push ecx
// 00578458  50                   push eax
// 00578459  8bce                 mov ecx, esi
// 0057845b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00578463  e8e8feffff           call 0x578350
// 00578468  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057846c  8bc6                 mov eax, esi
// 0057846e  5e                   pop esi
// 0057846f  64890d00000000       mov dword ptr fs:[0], ecx
// 00578476  83c414               add esp, 0x14
// 00578479  c3                   ret 

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
    char data[0x270 - 12];
public:
    ModelInstance();
};

template boost::shared_ptr<ModelInstance> Creatable<Instance>::create<ModelInstance>();
}
