// from server: 34% by colin
struct FunctionDescriptor {
    FunctionDescriptor(const char* name, int security, int attributes);
};

struct FuncDesc : FunctionDescriptor {
    FuncDesc(const char* name, int security, int attributes);
    void sub_570DB0(void* p);
};

struct BoundFuncDesc : FuncDesc {
    int field_14;
    int field_28;
    int field_2c;
    BoundFuncDesc(void* function, const char* name, int security, int attributes);
};

extern "C" void* __cdecl sub_494E80(const char*, int);
extern "C" int __cdecl sub_56D760();

FuncDesc::FuncDesc(const char* name, int security, int attributes)
    : FunctionDescriptor(name, security, attributes) {
}

BoundFuncDesc::BoundFuncDesc(void* function, const char* name, int security, int attributes)
    : FuncDesc(name, security, attributes) {
    void* p = sub_494E80(name, security);
    this->sub_570DB0(p);
    this->field_28 = security;
    this->field_2c = attributes;
    this->field_14 = sub_56D760();
}
