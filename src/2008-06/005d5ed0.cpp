// from server: 100% by tester
// roc 2008-06 005d5ed0  unit: RBX::Teams  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5ed0
//
// 005d5ed0  51                   push ecx
// 005d5ed1  56                   push esi
// 005d5ed2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d5ed6  56                   push esi
// 005d5ed7  81c130010000         add ecx, 0x130
// 005d5edd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d5ee5  e8c6b6ebff           call 0x4915b0
// 005d5eea  8bc6                 mov eax, esi
// 005d5eec  5e                   pop esi
// 005d5eed  59                   pop ecx
// 005d5eee  c20400               ret 4

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

class Teams
{
    char gap0[0x130];
    CopyOnWrite<std::vector<boost::shared_ptr<Instance> > > teams;
public:
    boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > getTeams();
};

boost::shared_ptr<const std::vector<boost::shared_ptr<Instance> > > Teams::getTeams()
{
    return teams.read();
}
}
