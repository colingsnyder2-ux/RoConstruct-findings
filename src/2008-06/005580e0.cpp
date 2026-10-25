// from server: 100% by tester
// roc 2008-06 005580e0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005580e0
//
// 005580e0  51                   push ecx
// 005580e1  56                   push esi
// 005580e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005580e6  56                   push esi
// 005580e7  81c108010000         add ecx, 0x108
// 005580ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005580f5  e8b694f3ff           call 0x4915b0
// 005580fa  8bc6                 mov eax, esi
// 005580fc  5e                   pop esi
// 005580fd  59                   pop ecx
// 005580fe  c20400               ret 4

#include <vector>

namespace boost {
template<class T>
class shared_ptr
{
    T* px;
    void* pn;
public:
    shared_ptr(const shared_ptr& r);
    ~shared_ptr();
};
}

namespace RBX {

template<class T>
class CopyOnWrite
{
    boost::shared_ptr<T> object;
public:
    boost::shared_ptr<const T> read() const;
};

class Instance
{
    char gap0[0x108];
    CopyOnWrite<std::vector<boost::shared_ptr<Instance> > > children;
public:
    boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > getChildren2();
};

boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > Instance::getChildren2()
{
    return children.read();
}
}
