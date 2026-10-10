// from server: 10% by colin
struct EnumPropertyDescriptor {
    char pad[0x1c];
    void* field_1c;
};

struct TypedPropertyDescriptor_GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(void* object, void* result) const;
    virtual void setValue(void* object, const void* value) const;
};

struct EnumPropDescriptor : public EnumPropertyDescriptor {
    void* getset;
    void* enumDesc;
    void checkFlags();
    bool construct(const char* name, const char* category, void* get, void* set, int flags, int security);
};

extern "C" {
    bool __stdcall unknown_55d8a0(void*);
    bool __stdcall unknown_55d300(void*);
    bool __stdcall unknown_55d310(void*, void*);
    bool __stdcall unknown_55d5f0(void*, void*);
    void* __stdcall unknown_5dc0d0(void*, void*);
    bool __stdcall unknown_5dc2a0(void*);
}

bool EnumPropDescriptor::construct(const char* name, const char* category, void* get, void* set, int flags, int security)
{
    if (unknown_55d8a0(this)) {
        return false;
    }
    if (!unknown_55d300((char*)this + 0xc)) {
        return false;
    }
    return true;
}
