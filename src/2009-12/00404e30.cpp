// from server: 23% by atomic.potato
struct VCApp_IObjectSafetyRobloxImpl {
    char pad0[4];
    int field4;
    char pad8[0x14 - 8];
    void* field14;
    int method(void* a, void* b, void* c);
    int helper();
};

int VCApp_IObjectSafetyRobloxImpl::method(void* p1, void* p2, void* p3) {
    VCApp_IObjectSafetyRobloxImpl* self = this;
    if (self != 0) {
        return 0x80004003;
    }
    if (p2 != 0) {
        return 0x80004003;
    }
    if (p3 == 0) {
        return 0x80004003;
    }
    void* vtbl = self->field14;
    int result = ((int (__stdcall*)(void*, void*, void*, void*))((*(void***)vtbl)[0]))(vtbl, p1, p2, p3);
    if (result < 0) {
        *(int*)p2 = 0;
        return result;
    }
    void* obj = p1;
    ((void (__stdcall*)(void*))((*(void***)obj)[2]))(obj);
    int hr = self->helper();
    *(int*)p2 = 1;
    if (hr != 0) {
        *(int*)p3 = 0;
        return result;
    }
    *(int*)p3 = self->field4;
    return result;
}
