// from server: 77% by colin
struct VCBrowserViewExternal_CProxy_IBrowserViewExternalEvents {
    void* vtable0;
    void* vtable4;
    void* vtable8;
    void* field0c;
    void* field10;
    void* field14;
    void* field18;
    unsigned short field1c;
    void* construct(int);
};

void* VCBrowserViewExternal_CProxy_IBrowserViewExternalEvents::construct(int) {
    this->field18 = 0;
    this->field10 = 0;
    this->field0c = 0;
    this->vtable8 = (void*)0x80d388;
    this->field1c = 0;
    this->vtable0 = (void*)0x80d638;
    this->vtable4 = (void*)0x80d620;
    this->vtable8 = (void*)0x80d5fc;
    this->field14 = (void*)0x80d5d4;
    void* p = *(void**)0x96c268;
    void** vt = *(void***)p;
    ((void (__stdcall*)(void*))vt[1])(p);
    return this;
}
