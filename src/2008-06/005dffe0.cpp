// from server: 100% by tester
// roc 2008-06 005dffe0  unit: RBX::P8Lighting::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dffe0
//
// 005dffe0  8b442404             mov eax, dword ptr [esp + 4]
// 005dffe4  56                   push esi
// 005dffe5  8bd1                 mov edx, ecx
// 005dffe7  85c0                 test eax, eax
// 005dffe9  7405                 je 0x5dfff0
// 005dffeb  8d70ec               lea esi, [eax - 0x14]
// 005dffee  eb02                 jmp 0x5dfff2
// 005dfff0  33f6                 xor esi, esi
// 005dfff2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dfff6  d901                 fld dword ptr [ecx]
// 005dfff8  83ec0c               sub esp, 0xc
// 005dfffb  8bc4                 mov eax, esp
// 005dfffd  d918                 fstp dword ptr [eax]
// 005dffff  d94104               fld dword ptr [ecx + 4]
// 005e0002  d95804               fstp dword ptr [eax + 4]
// 005e0005  d94108               fld dword ptr [ecx + 8]
// 005e0008  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005e000b  d95808               fstp dword ptr [eax + 8]
// 005e000e  8b4210               mov eax, dword ptr [edx + 0x10]
// 005e0011  03ce                 add ecx, esi
// 005e0013  ffd0                 call eax
// 005e0015  5e                   pop esi
// 005e0016  c20800               ret 8

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
template void LightingColorGetSet::setValue(RBX::Reflection::DescribedBase*, const G3D::Color3&) const;
