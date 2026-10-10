// from server: 20% by colin
// roc 2007-08 005795e0  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 295 bytes

struct DescribedBase;

struct EnumPropertyDescriptor {
    void* getset;
    void* enumDesc;
    void checkFlags();
};

struct EnumPropDescriptorBase {
    char pad[0x1c];
    EnumPropertyDescriptor* desc;
};

struct PropValue {
    int v;
};

struct StringHolder {
    char buf[0x1c];
    StringHolder();
    ~StringHolder();
};

struct EnumDescBase {
    bool isEnum(const void*);
};

struct EnumDescHolder {
    bool getEnumValue(const void*, int*);
};

struct EnumPropDescriptor {
    char pad0[0x1c];
    EnumPropertyDescriptor* desc;

    bool isReadOnly(const DescribedBase*);
    bool isWriteOnly(const DescribedBase*);
    bool getValue(const DescribedBase*, int*);
    bool setValue(DescribedBase*, const int*);
};

extern "C" {
    void __stdcall StringHolder_ctor(StringHolder*);
    void __stdcall StringHolder_dtor(StringHolder*);
}

bool EnumPropDescriptor::isReadOnly(const DescribedBase* obj) {
    return false;
}

bool EnumPropDescriptor::isWriteOnly(const DescribedBase* obj) {
    return false;
}

bool EnumPropDescriptor::getValue(const DescribedBase* obj, int* out) {
    return false;
}

bool EnumPropDescriptor::setValue(DescribedBase* obj, const int* val) {
    return false;
}

void EnumPropertyDescriptor::checkFlags() {
}

void EnumPropDescriptor_ctor(EnumPropDescriptor* self, const char* name, const char* category, int get, int set, int flags, int security) {
    StringHolder sh;
    StringHolder_ctor(&sh);
    if (!self->isReadOnly(0)) {
        if (!self->isWriteOnly(0)) {
            int v = 0;
            if (self->getValue(0, &v)) {
                int tmp = v;
                self->desc->getset = &tmp;
            }
        }
    }
    StringHolder_dtor(&sh);
}
