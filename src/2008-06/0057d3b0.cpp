// from server: 78% by atomic.potato
struct VInstance;

struct SignalDesc {
    void* vtable;
    char pad[8];
    void* field_c;
    void construct(void*);
    SignalDesc(void*);
};

extern "C" void* __stdcall sub_802458;
extern "C" void __stdcall sub_5833e0(void*, void*);

struct String {
    char buf[28];
    String(const char*);
};

void SignalDesc::construct(void* a) {
    String s("EngineStats");
    sub_5833e0(this, a);
    field_c = a;
    vtable = (void*)0x830670;
}

SignalDesc::SignalDesc(void* a) {
    void* p;
    if (a) {
        p = (char*)a + 0x1c8;
    } else {
        p = 0;
    }
    String s("EngineStats");
    sub_5833e0(this, p);
    field_c = a;
    vtable = (void*)0x830670;
}
