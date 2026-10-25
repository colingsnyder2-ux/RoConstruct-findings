// from server: 100% by tester
// roc 2008-06 0057c080  unit: RBX::VInstance::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c080
//
// 0057c080  6aff                 push -1
// 0057c082  683b467d00           push 0x7d463b
// 0057c087  64a100000000         mov eax, dword ptr fs:[0]
// 0057c08d  50                   push eax
// 0057c08e  64892500000000       mov dword ptr fs:[0], esp
// 0057c095  83ec08               sub esp, 8
// 0057c098  c7042400000000       mov dword ptr [esp], 0
// 0057c09f  6864020000           push 0x264
// 0057c0a4  c644240400           mov byte ptr [esp + 4], 0
// 0057c0a9  ff15b0288000         call dword ptr [0x8028b0]
// 0057c0af  83c404               add esp, 4
// 0057c0b2  89442404             mov dword ptr [esp + 4], eax
// 0057c0b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057c0be  85c0                 test eax, eax
// 0057c0c0  7409                 je 0x57c0cb
// 0057c0c2  8bc8                 mov ecx, eax
// 0057c0c4  e827f9ffff           call 0x57b9f0
// 0057c0c9  eb02                 jmp 0x57c0cd
// 0057c0cb  33c0                 xor eax, eax
// 0057c0cd  8b0c24               mov ecx, dword ptr [esp]
// 0057c0d0  56                   push esi
// 0057c0d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057c0d5  51                   push ecx
// 0057c0d6  50                   push eax
// 0057c0d7  8bce                 mov ecx, esi
// 0057c0d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057c0e1  e88aa9ffff           call 0x576a70
// 0057c0e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057c0ea  8bc6                 mov eax, esi
// 0057c0ec  5e                   pop esi
// 0057c0ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c0f4  83c414               add esp, 0x14
// 0057c0f7  c3                   ret 

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

class DataModel : public Instance
{
    char data[0x264 - 4];
public:
    DataModel();
};

template boost::shared_ptr<DataModel> Creatable<Instance>::create<DataModel>();
}
