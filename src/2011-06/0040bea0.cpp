// roc 2011-06 0040bea0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040bea0
//
// 0040bea0  8b542404             mov edx, dword ptr [esp + 4]
// 0040bea4  56                   push esi
// 0040bea5  8bf1                 mov esi, ecx
// 0040bea7  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0040beaa  8b01                 mov eax, dword ptr [ecx]
// 0040beac  8b4008               mov eax, dword ptr [eax + 8]
// 0040beaf  57                   push edi
// 0040beb0  52                   push edx
// 0040beb1  ffd0                 call eax
// 0040beb3  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0040beb6  8b11                 mov edx, dword ptr [ecx]
// 0040beb8  8b5208               mov edx, dword ptr [edx + 8]
// 0040bebb  8bf8                 mov edi, eax
// 0040bebd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040bec1  50                   push eax
// 0040bec2  ffd2                 call edx
// 0040bec4  33c9                 xor ecx, ecx
// 0040bec6  3bf8                 cmp edi, eax
// 0040bec8  0f94c1               sete cl
// 0040becb  5f                   pop edi
// 0040becc  8ac1                 mov al, cl
// 0040bece  5e                   pop esi
// 0040becf  c20800               ret 8
// copied from an identical function in another client (function ?equalValues@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

#include <memory>
#include <string>

namespace RBX {
class Name;
class ContentId;
class BrickColor
{
    int number;
public:
    int asInt() const { return number; }
    bool operator==(const BrickColor& other) const { return number == other.number; }
};
namespace Reflection {
class DescribedBase;
class IReferenceBinder;
}
}

class XmlNameValuePair
{
public:
    enum ValueType { NONE, HANDLE, NAME, BOOL, FLOAT, INT, UINT, CONTENTID, STRING };

private:
    const RBX::Name& tag;
    ValueType valueType;
    union
    {
        bool boolValue;
        float floatValue;
        int intValue;
        unsigned uintValue;
        std::string* stringValue;
    };

    void clearValue();

public:
    bool getValue(int&) const;
    bool getValue(std::string& value) const;

    void setValue(int value)
    {
        clearValue();
        intValue = value;
        valueType = INT;
    }
    void setValue(std::string value);
};

class XmlNode
{
    void* links[4];
};

class XmlElement : public XmlNode, public XmlNameValuePair
{
public:
    bool isXsiNil() const;
};

namespace RBX {
namespace Reflection {
class PropertyDescriptor
{
    char data[0x14];
public:
    virtual ~PropertyDescriptor();
    virtual bool equalValues(const DescribedBase* a, const DescribedBase* b) const = 0;
    virtual void readValue(DescribedBase* instance, const XmlElement* element, IReferenceBinder& binder) const = 0;
    virtual void writeValue(const DescribedBase* instance, XmlElement* element) const = 0;
};

template<typename PropType>
class TypedPropertyDescriptor : public PropertyDescriptor
{
public:
    class GetSet
    {
    public:
        virtual ~GetSet();
        virtual bool isReadOnly() const = 0;
        virtual PropType getValue(const DescribedBase* object) const = 0;
        virtual void setValue(DescribedBase* object, const PropType& value) const = 0;
    };

protected:
    std::auto_ptr<GetSet> getset;

public:
    PropType getValue(const DescribedBase* object) const
    {
        return getset->getValue(object);
    }
    void setValue(DescribedBase* object, const PropType& value) const
    {
        getset->setValue(object, value);
    }
    virtual bool equalValues(const DescribedBase* a, const DescribedBase* b) const
    {
        return getValue(b) == getValue(a);
    }

private:
    virtual void readValue(DescribedBase* instance, const XmlElement* element, IReferenceBinder& binder) const;
    virtual void writeValue(const DescribedBase* instance, XmlElement* element) const;
};
}
}

namespace RBX {
namespace Reflection {
class EnumDescriptor;

class EnumPropertyDescriptor : public PropertyDescriptor
{
protected:
    const EnumDescriptor& enumDescriptor;
};

template<class Class, typename Enum>
class EnumPropDescriptor : public EnumPropertyDescriptor
{
private:
    std::auto_ptr<typename TypedPropertyDescriptor<Enum>::GetSet> getset;

public:
    Enum getValue(const DescribedBase* object) const
    {
        return getset->getValue(object);
    }
    virtual bool equalValues(const DescribedBase* a, const DescribedBase* b) const
    {
        return getValue(a) == getValue(b);
    }
    virtual void readValue(DescribedBase* instance, const XmlElement* element, IReferenceBinder& binder) const;
    virtual void writeValue(const DescribedBase* instance, XmlElement* element) const
    {
        element->setValue(getValue(instance));
    }
};
}

class FaceInstance;
enum NormalId { NORM_X, NORM_Y, NORM_Z, NORM_X_NEG, NORM_Y_NEG, NORM_Z_NEG };
}
template bool RBX::Reflection::EnumPropDescriptor<RBX::FaceInstance, RBX::NormalId>::equalValues(const RBX::Reflection::DescribedBase*, const RBX::Reflection::DescribedBase*) const;