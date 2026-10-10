// from server: 24% by colin
// roc 2007-08 00544620  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544620

struct DescribedBase;
struct EnumDescBase;

struct PropGetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct EnumPropertyDescriptor {
    void* getset;
    void* enumDesc;
    char pad[0x14];
    void* propDesc;
};

struct EnumPropDescriptor : EnumPropertyDescriptor {
    bool checkFlags();
    bool isReadOnly() const;
    bool isWriteOnly() const;
    void getValue(const DescribedBase* object, void* out) const;
    void setValue(DescribedBase* object, const void* value) const;
};

struct StdString {
    char buf[0x1c];
    StdString();
    ~StdString();
};

extern "C" {
    void __stdcall InitializeCriticalSection(void*);
    void __stdcall DeleteCriticalSection(void*);
}

bool __stdcall sub_55D8A0(void*);
bool __stdcall sub_55D300(void*);
bool __stdcall sub_55D310(void*, void*);
bool __stdcall sub_55D5F0(void*, void*);
void* __stdcall sub_543BC0(void*, void*);
bool __stdcall sub_5DC2A0(void*);

bool EnumPropDescriptor::checkFlags()
{
    void* p = (char*)this + 0x0c;
    if (sub_55D8A0(p)) {
        return true;
    }
    if (!sub_55D300(p)) {
        return false;
    }
    StdString s;
    if (sub_55D310(p, &s)) {
        void* out;
        void* r = sub_543BC0(&out, &s);
        if (sub_5DC2A0(r)) {
            void* gs = *(void**)((char*)this + 0x1c);
            void** vt = *(void***)gs;
            void (*fn)(void*, const DescribedBase*, void*) = (void (*)(void*, const DescribedBase*, void*))vt[2];
            fn(gs, (const DescribedBase*)this, &out);
            s.~StdString();
            return true;
        }
        if (*(int*)((char*)this + 0x24) == 0) {
            void** vt = *(void***)this;
            bool (*fn)(void*, const DescribedBase*, int) = (bool (*)(void*, const DescribedBase*, int))vt[10];
            if (fn(this, (const DescribedBase*)this, 0)) {
                s.~StdString();
                return true;
            }
        }
        s.~StdString();
    }
    void* out2;
    if (sub_55D5F0(p, &out2)) {
        void* gs = *(void**)((char*)this + 0x1c);
        void** vt = *(void***)gs;
        void (*fn)(void*, const DescribedBase*, void*) = (void (*)(void*, const DescribedBase*, void*))vt[2];
        fn(gs, (const DescribedBase*)this, &out2);
    }
    return false;
}
