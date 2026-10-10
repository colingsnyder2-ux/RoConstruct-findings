// from server: 36% by colin
// roc 2007-08 00544350  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544350

struct String {
    void ctor();
    void dtor();
    char data[0x1c];
};

struct EnumDesc {
    bool isEnum();
};

struct DescribedBase {
    bool isA(const void*);
};

struct PropDesc {
    void* vtable;
    void setValue(DescribedBase*, const void*);
};

struct EnumPropDescriptor {
    void* vtable;
    int pad[6];
    PropDesc* getset;
    bool checkFlags();
    bool getValue(DescribedBase*, void*);
    bool setValue(DescribedBase*, const void*);
    bool isReadOnly();
    bool isWriteOnly();
};

extern "C" {
    void __stdcall String_ctor(String*);
    void __stdcall String_dtor(String*);
}

bool __stdcall sub_55D8A0(DescribedBase*);
bool __stdcall sub_55D300(void*);
bool __stdcall sub_55D310(void*, String*);
bool __stdcall sub_55D5F0(void*, int*);
void* __stdcall sub_543C20(String*, void*);
bool __stdcall sub_5DC2A0(void*);

bool EnumPropDescriptor::checkFlags() {
    DescribedBase* obj = (DescribedBase*)this;
    if (sub_55D8A0(obj)) {
        return true;
    }
    void* p = (char*)this + 0xc;
    if (!sub_55D300(p)) {
        goto L_54443B;
    }
    {
        String str;
        String_ctor(&str);
        if (sub_55D310(p, &str)) {
            void* v;
            if (sub_5DC2A0(sub_543C20(&str, &v))) {
                int val = *(int*)&v;
                PropDesc* gs = this->getset;
                gs->setValue(obj, &val);
                String_dtor(&str);
                return true;
            }
            if (*(int*)&v == 0) {
                if (this->setValue(obj, 0)) {
                    String_dtor(&str);
                    return true;
                }
            }
        }
        String_dtor(&str);
    }
L_54443B:
    {
        int val;
        if (sub_55D5F0(p, &val)) {
            PropDesc* gs = this->getset;
            gs->setValue(obj, &val);
        }
    }
    return true;
}
