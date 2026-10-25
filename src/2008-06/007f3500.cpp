// from server: 100% by tester
// roc 2008-06 007f3500  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3500
//
// 007f3500  6a04                 push 4
// 007f3502  688cf08000           push 0x80f08c
// 007f3507  33c9                 xor ecx, ecx
// 007f3509  6860048300           push 0x830460
// 007f350e  51                   push ecx
// 007f350f  b8109c5700           mov eax, 0x579c10
// 007f3514  50                   push eax
// 007f3515  b910519700           mov ecx, 0x975110
// 007f351a  e8b15cd8ff           call 0x5791d0
// 007f351f  68f0d37f00           push 0x7fd3f0
// 007f3524  e886e2eaff           call 0x6a17af
// 007f3529  59                   pop ecx
// 007f352a  c3                   ret 

#include <string>

namespace RBX {
namespace Reflection {
class FunctionDescriptor
{
public:
    enum Security { AnyCaller, NeedTrustedCaller = 4 };
};

template<class Class, typename Signature, int ArgCount>
class BoundFuncDesc : public FunctionDescriptor
{
    char data[0x40];
public:
    template<typename Function>
    BoundFuncDesc(Function function, const char* name, const char* arg1, Security security);
    ~BoundFuncDesc();
};
}

class Instance { public: virtual ~Instance(); };
class Service { public: virtual ~Service(); };

class DataModel : public Instance, public Service
{
public:
    void save(std::string url);
};
}

using namespace RBX;

static Reflection::BoundFuncDesc<DataModel, void(std::string), 1> func_save(&DataModel::save, "Save", "url", Reflection::FunctionDescriptor::NeedTrustedCaller);
