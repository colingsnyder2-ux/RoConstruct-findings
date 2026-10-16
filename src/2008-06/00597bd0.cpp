// from server: 55% by colin




struct String {
    unsigned char data[28];
    String();
    ~String();
};

struct Name;

extern const Name& __cdecl getLocalScope();

struct PropertyDescriptor {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    void* getset;
    bool setDescriptor(const Name& name, void* value);
};

bool TypedPropertyDescriptor::setDescriptor(const Name& name, void* value) {
    String s;
    if (&getLocalScope() == &name) {
        return false;
    }
    s.~String();
    return true;
}
