// from server: 48% by colin
struct DescribedBase;

struct GetSet {
    virtual void unknown0();
    virtual void* getValue(const DescribedBase* object);
};

struct S {
    char pad[0x118];
    int field_118;
    char pad2[0x228 - 0x11c];
    GetSet* getset;
    void f();
};

extern "C" void* __stdcall sub_495820(void*);
extern "C" void* __stdcall sub_48e0d0(void*);
extern "C" void __stdcall sub_59b6c0(void*, float);
extern "C" void __stdcall sub_599850(void*, float);
extern "C" void __stdcall sub_59a360(void*, float);
extern "C" void __stdcall sub_59b700(void*);
extern "C" void __stdcall sub_57ce80(void*);

extern float g_79646c;
extern float g_79b248;

void S::f()
{
    if (this != (S*)sub_495820(this)) {
        return;
    }

    S* edi = (S*)sub_48e0d0(this);
    int eax = this->field_118;
    GetSet* esi = edi->getset;

    if (eax != 0) {
        void* p = esi->getValue(0);
        sub_59b700(p);
        void* p2 = esi->getValue(0);
        sub_59b6c0(p2, 4.0f);
        void* p3 = esi->getValue(0);
        sub_599850(p3, g_79b248);
        void* p4 = esi->getValue(0);
        sub_59a360(p4, g_79646c);
        sub_57ce80(edi);
    } else {
        void* p = esi->getValue(0);
        sub_59b6c0(p, 0.0f);
        void* p2 = esi->getValue(0);
        sub_599850(p2, 0.0f);
        void* p3 = esi->getValue(0);
        sub_59a360(p3, g_79646c);
    }
}
