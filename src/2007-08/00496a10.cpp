// from server: 10% by colin
struct FunctionDescriptor {
    FunctionDescriptor();
    void declareSignature();
};

struct BoundFuncDesc : FunctionDescriptor {
    void* function;
    int field_f0;
    int field_f4;
    int field_f8;
    int field_fc;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int field_11c;
    int field_12c;
    int field_138;
    int field_13c;
    int field_140;
    int field_148;
    char pad_130[0x10];
    char pad_120[0x10];

    BoundFuncDesc(void* fn, const char* name, int security, int attributes);
};

extern "C" void __stdcall sub_495cc0();
extern "C" void __stdcall sub_492660();
extern "C" void __stdcall sub_4958f0();
extern "C" void __stdcall sub_40db50();
extern "C" void __stdcall sub_62fc62();
extern "C" void __stdcall sub_541bf0();
extern "C" void __stdcall sub_62fef6();
extern "C" void __stdcall sub_4992e0();

extern "C" void __stdcall std_string_ctor(void*, const char*);
extern "C" void __stdcall std_string_dtor(void*);

BoundFuncDesc::BoundFuncDesc(void* fn, const char* name, int security, int attributes) {
    FunctionDescriptor();
    this->field_f0 = 0;
    this->field_f4 = 0;
    this->field_f8 = 0;
    this->field_fc = 0;
    this->field_108 = 0;
    this->field_10c = 0;
    this->field_110 = 0;
    this->field_114 = 0;
    this->field_11c = 0;
    this->field_12c = 0;
    this->field_138 = 0;
    this->field_13c = 0;
    this->field_140 = 0;
    this->field_148 = 12;
    this->function = fn;
    declareSignature();
}
