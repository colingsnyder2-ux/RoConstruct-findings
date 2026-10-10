// from server: 38% by colin
// roc 2007-08 0057a370  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 295 bytes

struct DescribedBase;
struct ClassDescriptor;

struct EnumPropertyDescriptor
{
    void* getset;
    void* enumDesc;
};

struct EnumPropDescriptor : EnumPropertyDescriptor
{
    bool checkFlags(const char* name, const char* category, int flags, int security);
    void setValue(DescribedBase* object, const void* value);
};

struct StringHolder
{
    char buf[28];
};

extern "C" {
    void __stdcall StringCtor(void* self);
    void __stdcall StringDtor(void* self);
}

bool __stdcall sub_55D8A0(const char* name);
bool __stdcall sub_55D300(const char* category);
bool __stdcall sub_55D310(const char* category, void* out);
bool __stdcall sub_55D5F0(const char* category, void* out);
void* __stdcall sub_579E80(void* a, void* b);
bool __stdcall sub_5DC2A0(void* self);

bool EnumPropDescriptor::checkFlags(const char* name, const char* category, int flags, int security)
{
    if (sub_55D8A0(name))
        return true;

    const char* cat = category + 12;

    if (sub_55D300(cat))
    {
        StringHolder sh;
        StringCtor(&sh);

        if (sub_55D310(cat, &sh))
        {
            void* v = sub_579E80(&security, &sh);
            if (sub_5DC2A0(v))
            {
                void* p = *(void**)((char*)this + 0x1c);
                void** vt = *(void***)p;
                void (*fn)(void*, DescribedBase*, void*) = (void (*)(void*, DescribedBase*, void*))vt[2];
                fn(p, (DescribedBase*)name, &security);
                StringDtor(&sh);
                return true;
            }
            if (*(int*)((char*)&sh + 0x14) == 0)
            {
                void** vt = *(void***)this;
                bool (*fn)(EnumPropDescriptor*, const char*, int) = (bool (*)(EnumPropDescriptor*, const char*, int))vt[10];
                if (fn(this, name, 0))
                {
                    StringDtor(&sh);
                    return true;
                }
            }
        }
        StringDtor(&sh);
    }

    if (sub_55D5F0(cat, &security))
    {
        void* p = *(void**)((char*)this + 0x1c);
        void** vt = *(void***)p;
        void (*fn)(void*, DescribedBase*, void*) = (void (*)(void*, DescribedBase*, void*))vt[2];
        fn(p, (DescribedBase*)name, &security);
    }

    return false;
}
