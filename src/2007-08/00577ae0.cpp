// from server: 8% by colin
// roc 2007-08 00577ae0  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577ae0

struct DescribedBase;

struct EnumPropDescriptor {
    char pad0[0x1c];
    void* getset;
    bool setValue(DescribedBase* object, const void* value) const;
    bool getValue(DescribedBase* object, void* value) const;
};

struct DescribedBase {
    char pad0[0xc];
    bool isA(const char* name) const;
    bool hasProperty(const char* name) const;
    bool getProperty(const char* name, void* value) const;
    bool getPropertyValue(const char* name, void* value) const;
};

struct EnumDesc {
    bool convertToValue(const void* str, int* out) const;
};

struct String {
    char pad[0x1c];
    String();
    ~String();
};

struct PropertyDescriptor {
    bool setValue(DescribedBase* object, const void* value);
};

extern "C" {
    void __stdcall String_ctor(String* self);
    void __stdcall String_dtor(String* self);
}

bool DescribedBase::isA(const char* name) const {
    return false;
}

bool DescribedBase::hasProperty(const char* name) const {
    return false;
}

bool DescribedBase::getProperty(const char* name, void* value) const {
    return false;
}

bool DescribedBase::getPropertyValue(const char* name, void* value) const {
    return false;
}

bool EnumDesc::convertToValue(const void* str, int* out) const {
    return false;
}

bool EnumPropDescriptor::setValue(DescribedBase* object, const void* value) const {
    if (object->isA("Enum")) {
        return false;
    }
    if (!object->hasProperty("Value")) {
        return false;
    }
    String str;
    String_ctor(&str);
    if (object->getProperty("Value", &str)) {
        int enumValue;
        if (EnumDesc().convertToValue(&str, &enumValue)) {
            if (getset) {
                ((PropertyDescriptor*)getset)->setValue(object, &enumValue);
            }
            String_dtor(&str);
            return true;
        }
        if (getset) {
            if (((PropertyDescriptor*)getset)->setValue(object, value)) {
                String_dtor(&str);
                return true;
            }
        }
    }
    String_dtor(&str);
    return false;
}

bool EnumPropDescriptor::getValue(DescribedBase* object, void* value) const {
    if (object->isA("Enum")) {
        return false;
    }
    if (!object->hasProperty("Value")) {
        return false;
    }
    String str;
    String_ctor(&str);
    if (object->getPropertyValue("Value", &str)) {
        int enumValue;
        if (EnumDesc().convertToValue(&str, &enumValue)) {
            if (getset) {
                ((PropertyDescriptor*)getset)->setValue(object, &enumValue);
            }
            String_dtor(&str);
            return true;
        }
        if (getset) {
            if (((PropertyDescriptor*)getset)->setValue(object, value)) {
                String_dtor(&str);
                return true;
            }
        }
    }
    String_dtor(&str);
    return false;
}
