// from server: 100% by tester
// roc 2008-06 007f2910  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2910
//
// 007f2910  33c9                 xor ecx, ecx
// 007f2912  51                   push ecx
// 007f2913  51                   push ecx
// 007f2914  6860d98200           push 0x82d960
// 007f2919  6868c98100           push 0x81c968
// 007f291e  6850d98200           push 0x82d950
// 007f2923  51                   push ecx
// 007f2924  b870895500           mov eax, 0x558970
// 007f2929  50                   push eax
// 007f292a  b9803f9700           mov ecx, 0x973f80
// 007f292f  e87c73d6ff           call 0x559cb0
// 007f2934  6880cb7f00           push 0x7fcb80
// 007f2939  e871eeeaff           call 0x6a17af
// 007f293e  59                   pop ecx
// 007f293f  c3                   ret 

#include <string>

namespace boost {
template<class T> class shared_ptr { T* px; void* pn; };
}

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
    template<typename Function, typename Arg2Default>
    BoundFuncDesc(Function function, const char* name, const char* arg1, const char* arg2, Arg2Default arg2Default, Security security);
    ~BoundFuncDesc();
};
}

class Object { public: virtual ~Object(); };
class Notifier { public: virtual ~Notifier(); };

class Instance : public Object, public Notifier
{
public:
    boost::shared_ptr<Instance> findFirstChildByName2(std::string name, bool recursive);
};
}

using namespace RBX;

static Reflection::BoundFuncDesc<Instance, boost::shared_ptr<Instance>(std::string, bool), 2> func_FindFirstChild(&Instance::findFirstChildByName2, "FindFirstChild", "name", "recursive", false, Reflection::FunctionDescriptor::AnyCaller);
