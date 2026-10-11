// from server: 58% by colin
struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct IDataState;

struct CameraVerb {
    char pad[0x0c];
    Instance* workspace;
};

struct CameraTiltDownCommand : CameraVerb {
    bool isEnabled() const;
    void doIt(IDataState* dataState);
};

extern "C" ServiceProvider* __cdecl func_005807b0(Instance* p);
extern "C" bool __cdecl func_005cc890(void* p, int flag);
extern "C" void __cdecl func_005bd820(void* p);

bool CameraTiltDownCommand::isEnabled() const {
    Instance* w = this->workspace;
    void* p = (void*)((char*)w + 0x288);
    void* q = *(void**)p;
    void* (*fn)(void*) = *(void* (**)(void*))((char*)q + 4);
    void* r = fn(q);
    return func_005cc890(r, 1);
}

void CameraTiltDownCommand::doIt(IDataState* dataState) {
    if (isEnabled()) {
        Instance* w = this->workspace;
        void* r = func_005807b0(w);
        func_005bd820(r);
        void* (*fn)(void*) = *(void* (**)(void*))dataState;
        fn(dataState);
    }
}
