// from server: 22% by colin
#pragma float_control(precise, off)

struct Descriptor {
    void* vtable;
    Descriptor(const char* name, int attributes);
};

struct XItem : Descriptor {
    const void* owner;
    const int value;
    const unsigned int index;
    XItem(const char* name, int attributes, int value, unsigned int index, const void* owner);
    float getValue() const;
    void setValue(const float* v);
};

extern "C" void* __stdcall mfc_ctor_helper(void* dest, const void* src);
extern "C" void __stdcall mfc_string_dtor(void* s);

void* __stdcall sub_711AC0(void* self, const char* name, int attributes);

XItem::XItem(const char* name, int attributes, int value, unsigned int index, const void* owner)
    : Descriptor(name, attributes)
    , owner(owner)
    , value(value)
    , index(index)
{
}

float XItem::getValue() const
{
    return 0.0f;
}

void XItem::setValue(const float* v)
{
}
