// from server: 100% by tester
// roc 2008-06 007f5ba0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5ba0
//
// 007f5ba0  6a04                 push 4
// 007f5ba2  688cf08000           push 0x80f08c
// 007f5ba7  33c9                 xor ecx, ecx
// 007f5ba9  68f08e8300           push 0x838ef0
// 007f5bae  51                   push ecx
// 007f5baf  b800445c00           mov eax, 0x5c4400
// 007f5bb4  50                   push eax
// 007f5bb5  b9a0949700           mov ecx, 0x9794a0
// 007f5bba  e841f2dcff           call 0x5c4e00
// 007f5bbf  6840ed7f00           push 0x7fed40
// 007f5bc4  e8e6bbeaff           call 0x6a17af
// 007f5bc9  59                   pop ecx
// 007f5bca  c3                   ret 

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

class Visit : public Instance, public Service
{
public:
    void setUploadUrl(std::string url);
};
}

using namespace RBX;

static Reflection::BoundFuncDesc<Visit, void(std::string), 1> func_setUploadUrl(&Visit::setUploadUrl, "SetUploadUrl", "url", Reflection::FunctionDescriptor::NeedTrustedCaller);
