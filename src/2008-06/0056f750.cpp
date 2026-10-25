// from server: 100% by tester
// roc 2008-06 0056f750  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f750
//
// 0056f750  51                   push ecx
// 0056f751  56                   push esi
// 0056f752  57                   push edi
// 0056f753  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056f757  8bf1                 mov esi, ecx
// 0056f759  8bcf                 mov ecx, edi
// 0056f75b  e8b0d00000           call 0x57c810
// 0056f760  84c0                 test al, al
// 0056f762  752f                 jne 0x56f793
// 0056f764  8d442414             lea eax, [esp + 0x14]
// 0056f768  50                   push eax
// 0056f769  8d4f10               lea ecx, [edi + 0x10]
// 0056f76c  e87fcd0000           call 0x57c4f0
// 0056f771  84c0                 test al, al
// 0056f773  741e                 je 0x56f793
// 0056f775  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056f779  51                   push ecx
// 0056f77a  8d4c240c             lea ecx, [esp + 0xc]
// 0056f77e  e80d690400           call 0x5b6090
// 0056f783  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056f786  8b11                 mov edx, dword ptr [ecx]
// 0056f788  8b520c               mov edx, dword ptr [edx + 0xc]
// 0056f78b  50                   push eax
// 0056f78c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056f790  50                   push eax
// 0056f791  ffd2                 call edx
// 0056f793  5f                   pop edi
// 0056f794  5e                   pop esi
// 0056f795  59                   pop ecx
// 0056f796  c20c00               ret 0xc

#include <memory>
#include <string>

namespace RBX {
class Name;
class ContentId;
class BrickColor
{
    int number;
public:
    BrickColor(int number);
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
void TypedPropertyDescriptor<BrickColor>::readValue(DescribedBase* instance, const XmlElement* element, IReferenceBinder& binder) const
{
    if (!element->isXsiNil())
    {
        int value;
        if (element->getValue(value))
            setValue(instance, BrickColor(value));
    }
}
}
}
