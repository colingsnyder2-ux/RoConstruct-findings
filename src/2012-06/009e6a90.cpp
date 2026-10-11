// from server: 82% by atomic.potato




struct CXTThemeManagerStyleFactory;

struct CXTThemeManagerStyleHost {
    void* vtable;
    int field_4;
    int field_8;
    CXTThemeManagerStyleFactory* field_c;
    CXTThemeManagerStyleFactory* field_10;

    CXTThemeManagerStyleFactory* GetSafeThemeFactory();
    void SetStyleFactory(CXTThemeManagerStyleFactory* factory);
};

struct CXTThemeManagerStyleFactory {
    virtual void vfunc0();
    virtual void vfunc1(int);
    virtual void vfunc2();
};

extern "C" void __stdcall sub_a99b60(void*);
extern "C" void __stdcall sub_a99b5a(void*);

void CXTThemeManagerStyleHost::SetStyleFactory(CXTThemeManagerStyleFactory* factory) {
    if (this->field_c == 0 && factory == 0) {
        return;
    }

    sub_a99b60((char*)this->GetSafeThemeFactory() + 8);

    if (this->field_4 != 0) {
        CXTThemeManagerStyleFactory* old = this->field_c;
        if (old != 0) {
            old->vfunc1(1);
            this->field_c = 0;
        }
    }

    if (factory != 0) {
        CXTThemeManagerStyleFactory* created = (CXTThemeManagerStyleFactory*)this->vtable;
        created = (CXTThemeManagerStyleFactory*)((void**)(*(void**)this))[1];
        // call vtable[1] on this to create factory
        typedef CXTThemeManagerStyleFactory* (__thiscall *CreateFn)(CXTThemeManagerStyleHost*);
        CreateFn create = (CreateFn)((void**)(*(void**)this))[1];
        CXTThemeManagerStyleFactory* result = create(this);
        this->field_c = result;
        // call 0x9e69f0 with result and factory
        typedef void (__thiscall *InitFn)(CXTThemeManagerStyleFactory*, CXTThemeManagerStyleFactory*);
        InitFn init = (InitFn)0x9e69f0;
        init(result, factory);
        this->field_4 = 1;
    } else {
        this->field_c = 0;
        this->field_4 = 0;
    }

    typedef void (__thiscall *NotifyFn)(CXTThemeManagerStyleHost*);
    NotifyFn notify = (NotifyFn)((void**)(*(void**)this))[2];
    notify(this);

    sub_a99b5a((char*)this->GetSafeThemeFactory() + 8);
}
