// from server: 100% by tester
// roc 2008-06 007f5220  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5220
//
// 007f5220  6a05                 push 5
// 007f5222  33c9                 xor ecx, ecx
// 007f5224  51                   push ecx
// 007f5225  b820a05b00           mov eax, 0x5ba020
// 007f522a  50                   push eax
// 007f522b  685c010000           push 0x15c
// 007f5230  6890248200           push 0x822490
// 007f5235  6884838300           push 0x838384
// 007f523a  b978719700           mov ecx, 0x977178
// 007f523f  e8fc66dcff           call 0x5bb940
// 007f5244  68b0e37f00           push 0x7fe3b0
// 007f5249  e861c5eaff           call 0x6a17af
// 007f524e  59                   pop ecx
// 007f524f  c3                   ret 

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
    char gap0[0x154];
    float dopplerScale;
    float distanceFactor;
    void onSettingsChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<float, 1> prop_DopplerScale;
};

Reflection::BoundProp<float, 1> SoundService::prop_DopplerScale("DopplerScale", "Data", &SoundService::dopplerScale, &SoundService::onSettingsChanged, Reflection::PropertyDescriptor::STANDARD);
}
}
