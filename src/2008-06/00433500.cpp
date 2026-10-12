// from server: 67% by king_originala
namespace RBX {
namespace Reflection {

struct Descriptor {
    virtual ~Descriptor();
};

struct ClassDescriptor : Descriptor {};
struct EnumDescriptor : Descriptor {};
struct FunctionDescriptor : Descriptor {};
struct PropertyDescriptor : Descriptor {};
struct SignalDescriptor : Descriptor {};

}
}

int classifyDescriptor(RBX::Reflection::Descriptor* descriptor)
{
    using namespace RBX::Reflection;

    if (dynamic_cast<ClassDescriptor*>(descriptor))
        return 5;
    if (dynamic_cast<EnumDescriptor*>(descriptor))
        return 4;
    if (dynamic_cast<FunctionDescriptor*>(descriptor))
        return 3;
    if (dynamic_cast<PropertyDescriptor*>(descriptor))
        return 2;
    if (dynamic_cast<SignalDescriptor*>(descriptor))
        return 1;

    return dynamic_cast<RBX::Reflection::EnumDescriptor*>(descriptor) ? 0 : 100;
}
