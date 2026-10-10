// from server: 46% by colin
struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(void* object, void* result) const;
    virtual void setValue(void* object, const void* value) const;
};

struct EnumPropDescriptor {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    GetSet* getset;
    const void* enumDesc;

    bool setValue(void* object, const void* value);
};

struct DescribedBase {
    bool isA(const void* type) const;
};

struct std_string {
    std_string();
    ~std_string();
};

extern "C" bool __stdcall unknown_55d8a0();
extern "C" bool __stdcall unknown_55d300();
extern "C" bool __stdcall unknown_55d310(void* arg);
extern "C" bool __stdcall unknown_55d5f0(void* arg);
extern "C" void __stdcall unknown_5bbc50(void* a, void* b);
extern "C" bool __stdcall unknown_5dc2a0();
extern "C" void __stdcall GetSystemTimeAsFileTime(void* lpSystemTimeAsFileTime);

bool EnumPropDescriptor::setValue(void* object, const void* value) {
    if (static_cast<DescribedBase*>(object)->isA(0)) {
        return false;
    }
    void* obj2 = static_cast<char*>(object) + 0xC;
    if (unknown_55d300()) {
        std_string str;
        GetSystemTimeAsFileTime(&str);
        int local = 0;
        if (unknown_55d310(&str)) {
            void* prop = 0;
            unknown_5bbc50(&prop, &str);
            if (unknown_5dc2a0()) {
                void* v = prop;
                GetSet* gs = this->getset;
                gs->setValue(object, &v);
                str.~std_string();
                return true;
            }
            if (local != 0) {
                if (this->vtable) {
                    typedef bool (__thiscall *Fn)(EnumPropDescriptor*, void*, int);
                    Fn fn = *(Fn*)(*(int*)this + 0x28);
                    if (fn(this, object, 0)) {
                        str.~std_string();
                        return true;
                    }
                }
            }
        }
        str.~std_string();
    }
    void* prop2 = 0;
    if (unknown_55d5f0(&prop2)) {
        void* v = prop2;
        GetSet* gs = this->getset;
        gs->setValue(object, &v);
    }
    return false;
}
