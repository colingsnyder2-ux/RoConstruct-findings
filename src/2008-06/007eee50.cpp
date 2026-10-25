// from server: 100% by tester
// roc 2008-06 007eee50  unit: seg_007e0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eee50
//
// 007eee50  33c9                 xor ecx, ecx
// 007eee52  51                   push ecx
// 007eee53  68d4f08000           push 0x80f0d4
// 007eee58  51                   push ecx
// 007eee59  b8b0b24100           mov eax, 0x41b2b0
// 007eee5e  50                   push eax
// 007eee5f  b978cd9600           mov ecx, 0x96cd78
// 007eee64  e877d5c2ff           call 0x41c3e0
// 007eee69  6800a77f00           push 0x7fa700
// 007eee6e  e83c29ebff           call 0x6a17af
// 007eee73  59                   pop ecx
// 007eee74  c3                   ret 

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
    void show();
};

static RBX::Reflection::BoundFuncDesc<DHTMLWindow, void(), 0> func_Show(&DHTMLWindow::show, "Show", RBX::Reflection::FunctionDescriptor::AnyCaller);
