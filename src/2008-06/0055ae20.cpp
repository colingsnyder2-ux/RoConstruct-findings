// from server: 49% by colin
struct VInstance {
    char pad[0x64];
    int field64;
    char pad2[0x74 - 0x68];
    int field74;
    int field78;
};

struct ArgType {
    char pad[0x104];
    int field104;
};

struct Helper1 {
    void method(int, ArgType*);
};

struct Helper2 {
    void method(ArgType*);
};

struct Helper3 {
    void method(ArgType*);
};

extern "C" void __stdcall func_49d200(void*, void*);
extern "C" void __stdcall func_618a40(void*, void*);

struct VInstance_NonFactoryProduct : VInstance {
    void func(ArgType* arg);
};

void VInstance_NonFactoryProduct::func(ArgType* arg) {
    int count = (this->field78 - this->field74) >> 2;
    if (count > 0) {
        int val = arg->field104;
        Helper1 h1;
        h1.method(val, arg);
        Helper2* h2 = (Helper2*)((char*)this + 0x64);
        h2->method(arg);
    }
    VInstance* base;
    if (this != 0) {
        base = (VInstance*)((char*)this + 0x14);
    } else {
        base = 0;
    }
    Helper3 h3;
    h3.method(arg);
    func_49d200((void*)0x973e40, base);
}
