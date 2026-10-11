// from server: 51% by atomic.potato
struct CString {
    void* rep;
    CString(const char*);
    ~CString();
};

struct Inner {
    void* vtable;
    char pad[0x8c];
    void* field_90;
    void* field_94;
    void* field_98;
    void* field_9c;
    void* field_a0;
    void* field_a4;
};

struct Outer {
    char pad0[0x14];
    void* vt14;
    void* vt18;
    char pad1[0x4];
    void* vt20;
    char pad2[0x68];
    void* vt8c;
    void* field_90;
    void* field_94;
    Inner inner;
    void init();
};

extern "C" void* __stdcall sub_718a38(int);
extern "C" void __stdcall sub_5d2e80();
extern "C" void __stdcall sub_5d1c30(void*);

void Outer::init() {
    sub_5d2e80();
    this->vt14 = (void*)0x8d84b4;
    this->vt18 = (void*)0x8d84ac;
    this->vt20 = (void*)0x8d84a4;
    this->vt8c = (void*)0x8d849c;
    this->field_90 = 0;
    this->field_94 = 0;
    void* p = sub_718a38(4);
    if (p != 0) {
        *(void**)p = &this->inner;
    } else {
        p = 0;
    }
    this->inner.vtable = p;
    this->inner.field_9c = 0;
    this->inner.field_a0 = 0;
    this->inner.field_a4 = 0;
    CString s("FilteredSelection");
    sub_5d1c30(&s);
    s.~CString();
}
