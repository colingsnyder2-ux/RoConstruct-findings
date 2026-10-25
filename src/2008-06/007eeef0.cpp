// from server: 100% by tester
// roc 2008-06 007eeef0  unit: seg_007e0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eeef0
//
// 007eeef0  33c9                 xor ecx, ecx
// 007eeef2  51                   push ecx
// 007eeef3  6810f18000           push 0x80f110
// 007eeef8  51                   push ecx
// 007eeef9  b860b64100           mov eax, 0x41b660
// 007eeefe  50                   push eax
// 007eeeff  b950ce9600           mov ecx, 0x96ce50
// 007eef04  e8d7d4c2ff           call 0x41c3e0
// 007eef09  6890a67f00           push 0x7fa690
// 007eef0e  e89c28ebff           call 0x6a17af
// 007eef13  59                   pop ecx
// 007eef14  c3                   ret 

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
    BoundFuncDesc(Function function, const char* name, Security security);
    ~BoundFuncDesc();
};
}

class Instance { public: virtual ~Instance(); };
}

class DHTMLWindowBase { public: virtual ~DHTMLWindowBase(); };

class DHTMLWindow : public RBX::Instance, public DHTMLWindowBase
{
public:
    void unbind();
};

static RBX::Reflection::BoundFuncDesc<DHTMLWindow, void(), 0> func_Unbind(&DHTMLWindow::unbind, "Unbind", RBX::Reflection::FunctionDescriptor::AnyCaller);
