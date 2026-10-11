// from server: 25% by colin
struct CXTPPropertyGridItem {
    char pad[0x90];
    int m_nValue;
    void OnValueChanged(int value);
    void SetValue(int value);
};

struct Inner {
    void* p;
    void* q;
};

struct Sub {
    char pad[0x10c];
    void sub_43a070(void* a, void* b);
};

struct Target {
    char pad0[0x20];
    char pad1[0xdc];
    int field_fc;
    char pad2[0x2c];
    void* field_12c;
    char pad3[0x10c];
    void sub_43a070(void* a, void* b);
    void sub_7120e0(int v);
    void sub_713510(void* a, void* b, void* c);
    void* c_str();

    void method(void* a, void* b);
};

extern "C" void* __stdcall sub_802464(void* p);

void Target::sub_43a070(void* a, void* b) {
}

void Target::sub_7120e0(int v) {
}

void Target::sub_713510(void* a, void* b, void* c) {
}

void* Target::c_str() {
    return 0;
}

void Target::method(void* a, void* b) {
    void* p = *(void**)((char*)a + 4);
    void* s = sub_802464((char*)p + 4);
    sub_713510(0, 0, s);
    sub_43a070(a, b);
    field_fc = 1;
    *(void**)this = (void*)0x81409c;
    *(void**)((char*)this + 0x20) = (void*)0x81403c;
    *(void**)((char*)this + 0x10c) = (void*)0x814030;
    field_12c = a;
    void** vt = *(void***)a;
    int (*fn)(void*) = (int (*)(void*))vt[1];
    int r = fn(a);
    sub_7120e0(r & 0xff);
}
