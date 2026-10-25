// from server: 100% by tester
// roc 2008-06 0056f7a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f7a0
//
// 0056f7a0  8b542404             mov edx, dword ptr [esp + 4]
// 0056f7a4  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f7a7  8b01                 mov eax, dword ptr [ecx]
// 0056f7a9  8b4008               mov eax, dword ptr [eax + 8]
// 0056f7ac  56                   push esi
// 0056f7ad  57                   push edi
// 0056f7ae  52                   push edx
// 0056f7af  8d542410             lea edx, [esp + 0x10]
// 0056f7b3  52                   push edx
// 0056f7b4  ffd0                 call eax
// 0056f7b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056f7ba  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056f7be  83c610               add esi, 0x10
// 0056f7c1  8bce                 mov ecx, esi
// 0056f7c3  e808cb0000           call 0x57c2d0
// 0056f7c8  897e08               mov dword ptr [esi + 8], edi
// 0056f7cb  5f                   pop edi
// 0056f7cc  c7460405000000       mov dword ptr [esi + 4], 5
// 0056f7d3  5e                   pop esi
// 0056f7d4  c20800               ret 8

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
template<>
void TypedPropertyDescriptor<BrickColor>::writeValue(const DescribedBase* instance, XmlElement* element) const
{
    element->setValue(getValue(instance).asInt());
}
}
}
