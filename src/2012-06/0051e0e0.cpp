// from server: 92% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <typeinfo>

namespace RBX { class BrickColor { int number; }; }

// [this]->+0x10 holds the described value's type_info.
struct Descriptor { char pad[0x10]; const std::type_info* type; };
struct DescriptorRef {
    const Descriptor* desc;
    bool isBrickColor() const;
};

bool DescriptorRef::isBrickColor() const
{
    const std::type_info* t = desc->type;
    if (t == &typeid(RBX::BrickColor))
        return true;
    return typeid(RBX::BrickColor) == *t;
}