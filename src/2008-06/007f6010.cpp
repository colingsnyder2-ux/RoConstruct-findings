// from server: 100% by tester
// roc 2008-06 007f6010  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6010
//
// 007f6010  6a05                 push 5
// 007f6012  33c9                 xor ecx, ecx
// 007f6014  51                   push ecx
// 007f6015  b8503b5d00           mov eax, 0x5d3b50
// 007f601a  50                   push eax
// 007f601b  6834010000           push 0x134
// 007f6020  68ac298300           push 0x8329ac
// 007f6025  6860cc8300           push 0x83cc60
// 007f602a  b9e09f9700           mov ecx, 0x979fe0
// 007f602f  e8ececddff           call 0x5d4d20
// 007f6034  68c0f17f00           push 0x7ff1c0
// 007f6039  e871b7eaff           call 0x6a17af
// 007f603e  59                   pop ecx
// 007f603f  c3                   ret 

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

class ShirtGraphic : public Instance, public Listener
{
    char gap0[0x12c];
    int graphic;
    void onGraphicChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<int, 1> prop_Graphic;
};

Reflection::BoundProp<int, 1> ShirtGraphic::prop_Graphic("Graphic", "Appearance", &ShirtGraphic::graphic, &ShirtGraphic::onGraphicChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
