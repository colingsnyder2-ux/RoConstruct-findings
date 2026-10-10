// from server: 44% by colin
// roc 2007-08 005dc9a0  unit: RBX::VFeature::?$EnumPropDescriptor  size: 295 bytes

extern "C" {
    int __stdcall sub_55D8A0(void*);
    int __stdcall sub_55D300(void*);
    int __stdcall sub_55D310(void*, void*);
    int __stdcall sub_55D5F0(void*, void*);
    void* __stdcall sub_5DC070(void*, void*);
    int __stdcall sub_5DC2A0(void*);
}

extern "C" void __stdcall string_ctor(void*);
extern "C" void __stdcall string_dtor(void*);

struct DescribedBase;

struct EnumPropDescriptor {
    void setValue(DescribedBase* object, const void* value, int flags);
};

void EnumPropDescriptor::setValue(DescribedBase* object, const void* value, int flags)
{
    char buf[0x20];
    int local0;
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;

    if (sub_55D8A0(object))
        return;

    char* p = (char*)object + 0xc;

    if (sub_55D300(p)) {
        string_ctor(buf);
        local7 = 0;

        if (sub_55D310(p, buf)) {
            void* r = sub_5DC070(buf, &local0);
            if (sub_5DC2A0(r)) {
                int v = local0;
                void* ecx = *(void**)((char*)this + 0x1c);
                void** vt = *(void***)ecx;
                void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
                fn(ecx, (void*)value, &v);
                string_dtor(buf);
                return;
            }
            if (local5 == 0) {
                void** vt = *(void***)this;
                int (*fn)(void*, void*, int) = (int (*)(void*, void*, int))vt[10];
                if (fn(this, (void*)value, 0)) {
                    string_dtor(buf);
                    return;
                }
            }
        }
        string_dtor(buf);
    }

    if (sub_55D5F0(p, &local0)) {
        int v = local0;
        void* ecx = *(void**)((char*)this + 0x1c);
        void** vt = *(void***)ecx;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
        fn(ecx, (void*)value, &v);
    }
}
