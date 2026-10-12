// from server: 85% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3& value);
    bool operator==(const Vector3& value) const;
    Vector3 xxx() const;
};

__forceinline Vector3::Vector3(const Vector3& value)
    : x(value.x), y(value.y), z(value.z)
{
}

__forceinline bool Vector3::operator==(const Vector3& value) const
{
    return x == value.x && y == value.y && z == value.z;
}

struct Frame {
    float data[12];
};

struct Property {
    char storage[0x9C];
    Frame get() const;
    void set(const Vector3& value);
    void set(const Frame& value);
};

struct ValueStorage {
    int header;
    Vector3 value;
};

extern char descriptor1;
extern char descriptor2;

struct S {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void update();

    char padding0[0x198];
    int preserveFrame;
    char padding1[0x3C];
    int mode;
    char padding2[0x48];
    Property property;
    ValueStorage* current;
    char padding3[0xD0];
    volatile bool dirty;

    void notify(const void* descriptor);
    void setValue(const Vector3& value);
};

void S::setValue(const Vector3& value)
{
    if (!(current->value == value)) {
        Vector3 adjusted = mode == 1 ? value : value.xxx();

        if (preserveFrame) {
            Frame saved = property.get();
            property.set(adjusted);
            property.set(saved);
        } else {
            property.set(adjusted);
        }

        notify(&descriptor1);
        notify(&descriptor2);
        dirty = true;
        update();
    }
}
