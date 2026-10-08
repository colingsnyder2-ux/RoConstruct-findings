// from server: 57% by colin
// roc 2008-06 0059a4a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a4a0
//
// 0059a4a0  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0059a4a3  8b01                 mov eax, dword ptr [ecx]
// 0059a4a5  8b10                 mov edx, dword ptr [eax]
// 0059a4a7  ffe2                 jmp edx

struct PropertyDescriptor {
    unsigned m_attributes;
    unsigned m_seenAttributes;
    void setUndefined();
    void setDescriptor(void*, unsigned);
    void setAccessorDescriptor(void*, void*, unsigned);
    void setWritable(bool);
    void setEnumerable(bool);
    void setConfigurable(bool);
    void setValue(void*);
    void setSetter(void*);
    void setGetter(void*);
    bool isEmpty() const;
    bool writablePresent() const;
    bool enumerablePresent() const;
    bool configurablePresent() const;
    bool setterPresent() const;
    bool getterPresent() const;
    bool equalTo(void*, const PropertyDescriptor&) const;
    bool attributesEqual(const PropertyDescriptor&) const;
    unsigned attributesWithOverride(const PropertyDescriptor&) const;
};

struct TypedPropertyDescriptor {
    PropertyDescriptor m_base;
    void* getset;
    void checkFlags();
    void setDescriptor(void*, unsigned);
    void setAccessorDescriptor(void*, void*, unsigned);
    void setWritable(bool);
    void setEnumerable(bool);
    void setConfigurable(bool);
    void setValue(void*);
    void setSetter(void*);
    void setGetter(void*);
    bool isEmpty() const;
    bool writablePresent() const;
    bool enumerablePresent() const;
    bool configurablePresent() const;
    bool setterPresent() const;
    bool getterPresent() const;
    bool equalTo(void*, const PropertyDescriptor&) const;
    bool attributesEqual(const PropertyDescriptor&) const;
    unsigned attributesWithOverride(const PropertyDescriptor&) const;
};

extern "C" __declspec(dllimport) void* G1_func_00771570();

void TypedPropertyDescriptor::setDescriptor(void* value, unsigned attributes) {
    m_base.setDescriptor(value, attributes);
}

void TypedPropertyDescriptor::setAccessorDescriptor(void* getter, void* setter, unsigned attributes) {
    m_base.setAccessorDescriptor(getter, setter, attributes);
}

void TypedPropertyDescriptor::setWritable(bool writable) {
    m_base.setWritable(writable);
}

void TypedPropertyDescriptor::setEnumerable(bool enumerable) {
    m_base.setEnumerable(enumerable);
}

void TypedPropertyDescriptor::setConfigurable(bool configurable) {
    m_base.setConfigurable(configurable);
}

void TypedPropertyDescriptor::setValue(void* value) {
    m_base.setValue(value);
}

void TypedPropertyDescriptor::setSetter(void* setter) {
    m_base.setSetter(setter);
}

void TypedPropertyDescriptor::setGetter(void* getter) {
    m_base.setGetter(getter);
}

bool TypedPropertyDescriptor::isEmpty() const {
    return m_base.isEmpty();
}

bool TypedPropertyDescriptor::writablePresent() const {
    return m_base.writablePresent();
}

bool TypedPropertyDescriptor::enumerablePresent() const {
    return m_base.enumerablePresent();
}

bool TypedPropertyDescriptor::configurablePresent() const {
    return m_base.configurablePresent();
}

bool TypedPropertyDescriptor::setterPresent() const {
    return m_base.setterPresent();
}

bool TypedPropertyDescriptor::getterPresent() const {
    return m_base.getterPresent();
}

bool TypedPropertyDescriptor::equalTo(void* exec, const PropertyDescriptor& other) const {
    return m_base.equalTo(exec, other);
}

bool TypedPropertyDescriptor::attributesEqual(const PropertyDescriptor& other) const {
    return m_base.attributesEqual(other);
}

unsigned TypedPropertyDescriptor::attributesWithOverride(const PropertyDescriptor& other) const {
    return m_base.attributesWithOverride(other);
}
