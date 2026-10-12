// from server: 93% by king_originala
extern int registrationState;
extern void __cdecl registrationCallback();
extern void __cdecl registerType(void (__cdecl *)(), int *);

struct EnumDescriptor {
    bool contains(int value);
};

extern EnumDescriptor * __cdecl getEnumDescriptor();

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *object, const volatile int *value);
};

struct PropertyDescriptor {
    unsigned char padding[28];
    Setter *setter;

    bool setValue(void *object, volatile int value);
};

bool PropertyDescriptor::setValue(void *object, volatile int value)
{
    registerType(registrationCallback, &registrationState);
    EnumDescriptor *descriptor = getEnumDescriptor();
    int saved = value;
    if (descriptor->contains(saved)) {
        value = saved;
        setter->set(object, &value);
        return true;
    }
    return false;
}
