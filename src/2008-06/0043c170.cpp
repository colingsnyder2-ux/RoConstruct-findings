// from server: 15% by colin
struct Guard {
    void* object;
    void* control;
    int state;
    Guard(void* p);
    ~Guard();
    void acquire(void*);
};

struct Vector3 {
    float x, y, z;
};

struct EnumItem {
    const char* name;
    int attributes;
    int value;
    unsigned int index;
    void* owner;
};

struct EnumDescriptor {
    char pad0[0x10];
    EnumItem** begin;
    EnumItem** end;
    char pad1[0x100];
    int hidden;
    char pad2[0x100];
    void SetHidden(int);
    bool convertToValue(unsigned int index, Vector3* out) const;
    bool convertToString(unsigned int index, void* out) const;
};

struct Converter {
    char pad0[0x10];
    EnumItem** begin;
    EnumItem** end;
    char pad1[0x100];
    int hidden;
    char pad2[0x100];
    void SetHidden(int);
    bool convertToValue(unsigned int index, Vector3* out) const;
    bool convertToString(unsigned int index, void* out) const;
    void convert(const EnumDescriptor* desc, Vector3* out);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __stdcall mfc_call_310(void*);

void Converter::SetHidden(int v)
{
    if (v != hidden) {
        hidden = v;
        ((Converter*)((char*)this + 0xbc))->SetHidden(v);
    }
}

void EnumDescriptor::SetHidden(int v)
{
    if (v != hidden) {
        hidden = v;
        ((Converter*)((char*)this + 0xbc))->SetHidden(v);
    }
}

void Converter::convert(const EnumDescriptor* desc, Vector3* out)
{
    Vector3 zero;
    zero.x = 0.0f;
    zero.y = 0.0f;
    zero.z = 0.0f;

    EnumItem** it = begin;
    EnumItem** last = end;
    bool found = false;

    while (it != last) {
        EnumItem* item = *it;
        if (item->owner == desc) {
            if (!found) {
                if (desc->convertToValue(item->index, out)) {
                    found = true;
                } else {
                    void* tmp;
                    mfc_call_310(&tmp);
                    SetHidden(0);
                    return;
                }
            } else {
                if (desc->convertToString(item->index, out)) {
                    found = true;
                } else {
                    void* tmp;
                    mfc_call_310(&tmp);
                    SetHidden(0);
                    return;
                }
            }
        }
        ++it;
    }

    if (it == last) {
        SetHidden(found ? 0 : 1);
    }
}
