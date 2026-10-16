// from server: 63% by colin
struct String {
    unsigned char data[28];
    String();
    ~String();
};

struct Name;

extern const Name& __cdecl getLocalScope();

struct GetSet {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void setValue(const Name&, void*);
};

struct PropertyDescriptor {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    GetSet* getset;
    bool setDescriptor(const Name& name, void* value);
};

bool TypedPropertyDescriptor::setDescriptor(const Name& name, void* value) {
    String s;
    if (&getLocalScope() == &name) {
        s.~String();
        return false;
    }
    getset->setValue(name, value);
    s.~String();
    return true;
}
