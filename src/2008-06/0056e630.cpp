// from server: 100% by tester
// roc 2008-06 0056e630  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e630
//
// 0056e630  51                   push ecx
// 0056e631  8b542408             mov edx, dword ptr [esp + 8]
// 0056e635  83ec1c               sub esp, 0x1c
// 0056e638  8bc4                 mov eax, esp
// 0056e63a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0056e63e  52                   push edx
// 0056e63f  50                   push eax
// 0056e640  e86bc10a00           call 0x61a7b0
// 0056e645  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056e649  83c110               add ecx, 0x10
// 0056e64c  e87f77f2ff           call 0x495dd0
// 0056e651  59                   pop ecx
// 0056e652  c20800               ret 8

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
void TypedPropertyDescriptor<std::string>::writeValue(const DescribedBase* instance, XmlElement* element) const
{
    element->setValue(getValue(instance));
}
}
}
