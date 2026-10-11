// from server: 75% by colin
// roc 2007-08 0044d160  unit: CRobloxDoc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d160

extern "C" void* __stdcall sub_77E614(void*, void*);
extern "C" void __stdcall sub_77E610(void*);

struct CRobloxDoc {
    void* field0;
    void* field4;
    void destroy();
};

void CRobloxDoc::destroy() {
    if (field0 != 0) {
        void* a = field0;
        void* b = field4;
        void* p = sub_77E614(&a, b);
        sub_77E610(p);
    }
}
