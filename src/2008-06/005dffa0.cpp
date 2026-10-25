// from server: 100% by tester
// roc 2008-06 005dffa0  unit: RBX::P8Lighting::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dffa0
//
// 005dffa0  8bc1                 mov eax, ecx
// 005dffa2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dffa6  83ec0c               sub esp, 0xc
// 005dffa9  85c9                 test ecx, ecx
// 005dffab  7405                 je 0x5dffb2
// 005dffad  8d51ec               lea edx, [ecx - 0x14]
// 005dffb0  eb02                 jmp 0x5dffb4
// 005dffb2  33d2                 xor edx, edx
// 005dffb4  8d0c24               lea ecx, [esp]
// 005dffb7  51                   push ecx
// 005dffb8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005dffbb  03ca                 add ecx, edx
// 005dffbd  8b5008               mov edx, dword ptr [eax + 8]
// 005dffc0  ffd2                 call edx
// 005dffc2  d900                 fld dword ptr [eax]
// 005dffc4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dffc8  d919                 fstp dword ptr [ecx]
// 005dffca  d94004               fld dword ptr [eax + 4]
// 005dffcd  d95904               fstp dword ptr [ecx + 4]
// 005dffd0  d94008               fld dword ptr [eax + 8]
// 005dffd3  8bc1                 mov eax, ecx
// 005dffd5  d95908               fstp dword ptr [ecx + 8]
// 005dffd8  83c40c               add esp, 0xc
// 005dffdb  c20800               ret 8

namespace G3D {
class Color3
{
public:
    float r, g, b;

    Color3(const Color3& other) : r(other.r), g(other.g), b(other.b) {}
};
}

namespace RBX {
namespace Reflection {
class DescribedBase
{
public:
    virtual ~DescribedBase();
};

template<typename PropType>
class TypedPropertyDescriptor
{
public:
    class GetSet
    {
        char gap4[4];
    public:
        virtual bool isReadOnly() const = 0;
        virtual PropType getValue(const DescribedBase*) const = 0;
        virtual void setValue(DescribedBase*, const PropType&) const = 0;
    };
};

template<typename Class, typename ReturnType>
class PropDescriptor : public TypedPropertyDescriptor<ReturnType>
{
public:
    template<typename GetFunction, typename SetFunction>
    class GetSetImpl : public TypedPropertyDescriptor<ReturnType>::GetSet
    {
    private:
        GetFunction get;
        SetFunction set;

    public:
        virtual bool isReadOnly() const
        {
            return false;
        }
        virtual ReturnType getValue(const DescribedBase* object) const
        {
            Class* o = (Class*)object;
            return (o->*get)();
        }
        virtual void setValue(DescribedBase* object, const ReturnType& value) const
        {
            Class* o = (Class*)object;
            (o->*set)(value);
        }
    };
};
}

class Instance
{
    char data[0x10];
public:
    virtual ~Instance();
};

class Lighting : public Instance, public Reflection::DescribedBase
{
public:
    G3D::Color3 getTopAmbient() const;
    void setTopAmbient(G3D::Color3 value);
};
}

typedef RBX::Reflection::PropDescriptor<RBX::Lighting, G3D::Color3>::GetSetImpl<G3D::Color3 (RBX::Lighting::*)() const, void (RBX::Lighting::*)(G3D::Color3)> LightingColorGetSet;
template G3D::Color3 LightingColorGetSet::getValue(const RBX::Reflection::DescribedBase*) const;
