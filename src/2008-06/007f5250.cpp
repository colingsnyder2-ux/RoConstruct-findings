// from server: 100% by tester
// roc 2008-06 007f5250  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5250
//
// 007f5250  6a05                 push 5
// 007f5252  33c9                 xor ecx, ecx
// 007f5254  51                   push ecx
// 007f5255  b820a05b00           mov eax, 0x5ba020
// 007f525a  50                   push eax
// 007f525b  6860010000           push 0x160
// 007f5260  6890248200           push 0x822490
// 007f5265  6894838300           push 0x838394
// 007f526a  b9fc709700           mov ecx, 0x9770fc
// 007f526f  e8cc66dcff           call 0x5bb940
// 007f5274  6890e37f00           push 0x7fe390
// 007f5279  e831c5eaff           call 0x6a17af
// 007f527e  59                   pop ecx
// 007f527f  c3                   ret 

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
namespace Soundscape {
class SoundService : public Instance, public Listener
{
    char gap0[0x158];
    float distanceFactor;
    void onSettingsChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<float, 1> prop_DistanceFactor;
};

Reflection::BoundProp<float, 1> SoundService::prop_DistanceFactor("DistanceFactor", "Data", &SoundService::distanceFactor, &SoundService::onSettingsChanged, (Reflection::PropertyDescriptor::Functionality)5);
}
}
