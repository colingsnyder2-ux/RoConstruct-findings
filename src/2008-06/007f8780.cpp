// from server: 100% by tester
// roc 2008-06 007f8780  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8780
//
// 007f8780  6a05                 push 5
// 007f8782  33c9                 xor ecx, ecx
// 007f8784  51                   push ecx
// 007f8785  b830ae6300           mov eax, 0x63ae30
// 007f878a  50                   push eax
// 007f878b  6830010000           push 0x130
// 007f8790  6890248200           push 0x822490
// 007f8795  6878848100           push 0x818478
// 007f879a  b9d0d39700           mov ecx, 0x97d3d0
// 007f879f  e83cefe3ff           call 0x6376e0
// 007f87a4  68400b8000           push 0x800b40
// 007f87a9  e80190eaff           call 0x6a17af
// 007f87ae  59                   pop ecx
// 007f87af  c3                   ret 

namespace G3D { class Vector3 { public: float x, y, z; }; }
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

class Vector3Value : public Instance, public Listener
{
    char gap0[0x128];
    G3D::Vector3 value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<G3D::Vector3, 1> prop_Value;
};

Reflection::BoundProp<G3D::Vector3, 1> Vector3Value::prop_Value("Value", "Data", &Vector3Value::value, &Vector3Value::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
