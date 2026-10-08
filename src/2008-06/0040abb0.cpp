// from server: 37% by colin
// roc 2008-06 0040abb0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040abb0
//
// 0040abb0  803900               cmp byte ptr [ecx], 0
// 0040abb3  7403                 je 0x40abb8
// 0040abb5  c60100               mov byte ptr [ecx], 0
// 0040abb8  c3                   ret 

struct TypedPropertyDescriptor {
    bool writable() const;
    bool enumerable() const;
    bool configurable() const;
    bool isDataDescriptor() const;
    bool isGenericDescriptor() const;
    bool isAccessorDescriptor() const;
    unsigned attributes() const { return m_attributes; }
    void setUndefined();
    void setDescriptor(unsigned attributes);
    void setAccessorDescriptor(unsigned attributes);
    void setWritable(bool);
    void setEnumerable(bool);
    void setConfigurable(bool);
    void setValue(unsigned attributes);
    bool isEmpty() const { return !(m_attributes); }
    bool writablePresent() const { return m_attributes & 1; }
    bool enumerablePresent() const { return m_attributes & 2; }
    bool configurablePresent() const { return m_attributes & 4; }
    bool setterPresent() const { return m_attributes & 8; }
    bool getterPresent() const { return m_attributes & 16; }
    void checkFlags();
    unsigned m_attributes;
};

void TypedPropertyDescriptor::checkFlags() {
    if (m_attributes & 1) {
        m_attributes &= ~1;
    }
}

bool TypedPropertyDescriptor::writable() const {
    return m_attributes & 1;
}

bool TypedPropertyDescriptor::enumerable() const {
    return m_attributes & 2;
}

bool TypedPropertyDescriptor::configurable() const {
    return m_attributes & 4;
}

bool TypedPropertyDescriptor::isDataDescriptor() const {
    return !(m_attributes & 8);
}

bool TypedPropertyDescriptor::isGenericDescriptor() const {
    return !(m_attributes & 16);
}

bool TypedPropertyDescriptor::isAccessorDescriptor() const {
    return (m_attributes & 8) && (m_attributes & 16);
}

void TypedPropertyDescriptor::setUndefined() {
    m_attributes = 0;
}

void TypedPropertyDescriptor::setDescriptor(unsigned attributes) {
    m_attributes = attributes;
}

void TypedPropertyDescriptor::setAccessorDescriptor(unsigned attributes) {
    m_attributes = (attributes & ~16) | 8;
}

void TypedPropertyDescriptor::setWritable(bool writable) {
    if (writable) {
        m_attributes |= 1;
    } else {
        m_attributes &= ~1;
    }
}

void TypedPropertyDescriptor::setEnumerable(bool enumerable) {
    if (enumerable) {
        m_attributes |= 2;
    } else {
        m_attributes &= ~2;
    }
}

void TypedPropertyDescriptor::setConfigurable(bool configurable) {
    if (configurable) {
        m_attributes |= 4;
    } else {
        m_attributes &= ~4;
    }
}

void TypedPropertyDescriptor::setValue(unsigned attributes) {
    m_attributes = attributes;
}
