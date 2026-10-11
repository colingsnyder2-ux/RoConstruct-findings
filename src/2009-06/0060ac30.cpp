// from server: 75% by atomic.potato
extern "C" void* __stdcall sub_89E4B4();

struct Inner {
    char pad[0x1c];
};

struct Outer {
    void* field0;
    char pad1[0x8];
    void* fieldC;
    void* init(void*);
};

extern "C" void __stdcall sub_6109C0(void*, void*);

void* Outer::init(void* arg) {
    void* ebx = arg;
    void* edi;
    if (ebx != 0) {
        edi = (char*)ebx + 0xd0;
    } else {
        edi = 0;
    }
    Inner local;
    sub_89E4B4();
    sub_6109C0(this, edi);
    fieldC = ebx;
    field0 = (void*)0x8d8394;
    return this;
}
