// from server: 100% by tester
// roc 2008-06 00566a80  unit: RBX::VSelection::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566a80
//
// 00566a80  51                   push ecx
// 00566a81  56                   push esi
// 00566a82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00566a86  56                   push esi
// 00566a87  81c154010000         add ecx, 0x154
// 00566a8d  c744240800000000     mov dword ptr [esp + 8], 0
// 00566a95  e816abf2ff           call 0x4915b0
// 00566a9a  8bc6                 mov eax, esi
// 00566a9c  5e                   pop esi
// 00566a9d  59                   pop ecx
// 00566a9e  c20400               ret 4

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
class Instance;

template<class T>
class CopyOnWrite
{
    boost::shared_ptr<T> object;
public:
    boost::shared_ptr<const T> read() const;
};

class Selection
{
    char gap0[0x154];
    CopyOnWrite<std::vector<boost::shared_ptr<Instance> > > selection;
public:
    boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > getSelection2();
};

boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > Selection::getSelection2()
{
    return selection.read();
}
}
