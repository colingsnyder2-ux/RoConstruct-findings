// from server: 100% by tester
// roc 2008-06 007f4f50  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4f50
//
// 007f4f50  6a01                 push 1
// 007f4f52  33c9                 xor ecx, ecx
// 007f4f54  51                   push ecx
// 007f4f55  b8a0065b00           mov eax, 0x5b06a0
// 007f4f5a  50                   push eax
// 007f4f5b  68ac010000           push 0x1ac
// 007f4f60  68d0498300           push 0x8349d0
// 007f4f65  68c0498300           push 0x8349c0
// 007f4f6a  b97c6b9700           mov ecx, 0x976b7c
// 007f4f6f  e83c83dbff           call 0x5ad2b0
// 007f4f74  68a0e17f00           push 0x7fe1a0
// 007f4f79  e831c8eaff           call 0x6a17af
// 007f4f7e  59                   pop ecx
// 007f4f7f  c3                   ret 

namespace RBX {
namespace Reflection {
class PropertyDescriptor
{
public:
    enum Functionality { STANDARD = 5 };
};

template<typename PropType, int Unknown>
class BoundProp
{
    char data[0x40];
public:
    template<typename Class>
    BoundProp(const char* name, const char* category, PropType (Class::*member),
              void (Class::*changed)(const PropertyDescriptor&), PropertyDescriptor::Functionality flags);
    ~BoundProp();
};
}

class Instance { public: virtual ~Instance(); };
class Listener { public: virtual ~Listener(); };

class ScriptContext : public Instance, public Listener
{
    char gap0[0x1a4];
    bool scriptsDisabled;
    void onScriptsDisabledChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<bool, 1> prop_ScriptsDisabled;
};

Reflection::BoundProp<bool, 1> ScriptContext::prop_ScriptsDisabled("ScriptsDisabled", "State", &ScriptContext::scriptsDisabled, &ScriptContext::onScriptsDisabledChanged, (Reflection::PropertyDescriptor::Functionality)1);

}
