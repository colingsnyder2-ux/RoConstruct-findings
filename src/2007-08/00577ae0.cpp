// from server: 19% by tester
// roc 2007-08 00577ae0  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577ae0

struct XmlNameValuePair {
    int type;
    int value;
    bool isValueType() const;
    bool getStringValue(void* out) const;
    bool getIntValue(int* out) const;
    bool isString() const;
};

struct XmlElement {
    char pad[0x18];
    XmlNameValuePair* firstChild;
    bool isNameValuePair() const;
    bool hasChildren() const;
    bool getChildString(void* out) const;
    bool getChildInt(int* out) const;
};

struct PropDescriptor {
    char pad[0x1c];
    void* prop;
    bool setValue(void* instance, void* value);
    bool setValueInt(void* instance, int value);
};

struct VPartInstance {
    char pad[0x1c];
    void* prop;
    bool setValue(void* instance, void* value);
    bool setValueInt(void* instance, int value);

    bool EnumPropDescriptor(void* instance, void* value, int arg3);
};

extern "C" {
    void __stdcall string_ctor(void* str);
    void __stdcall string_dtor(void* str);
}

bool XmlNameValuePair::isValueType() const {
    return type == 2;
}

bool XmlNameValuePair::getStringValue(void* out) const {
    if (type == 5) {
        *(int*)out = value;
        return true;
    }
    return false;
}

bool XmlNameValuePair::getIntValue(int* out) const {
    if (type == 5) {
        *out = value;
        return true;
    }
    return false;
}

bool XmlNameValuePair::isString() const {
    return type == 2;
}

bool XmlElement::isNameValuePair() const {
    return firstChild != 0;
}

bool XmlElement::hasChildren() const {
    return firstChild != 0;
}

bool XmlElement::getChildString(void* out) const {
    if (firstChild) {
        return firstChild->getStringValue(out);
    }
    return false;
}

bool XmlElement::getChildInt(int* out) const {
    if (firstChild) {
        return firstChild->getIntValue(out);
    }
    return false;
}

bool VPartInstance::setValue(void* instance, void* value) {
    return false;
}

bool VPartInstance::setValueInt(void* instance, int value) {
    return false;
}

bool PropDescriptor::setValue(void* instance, void* value) {
    return false;
}

bool PropDescriptor::setValueInt(void* instance, int value) {
    return false;
}

bool VPartInstance::EnumPropDescriptor(void* instance, void* value, int arg3) {
    XmlElement* elem = (XmlElement*)instance;
    if (elem->isNameValuePair()) {
        return false;
    }
    XmlElement* child = (XmlElement*)((char*)elem + 0xc);
    if (child->hasChildren()) {
        char str[0x20];
        string_ctor(str);
        if (child->getChildString(str)) {
            int intVal;
            if (child->getChildInt(&intVal)) {
                if (this->setValueInt(instance, intVal)) {
                    string_dtor(str);
                    return true;
                }
            }
            if (child->getChildInt(&intVal)) {
                if (this->setValueInt(instance, intVal)) {
                    string_dtor(str);
                    return true;
                }
            }
        }
        string_dtor(str);
    }
    int intVal2;
    if (child->getChildInt(&intVal2)) {
        this->setValueInt(instance, intVal2);
    }
    return false;
}
