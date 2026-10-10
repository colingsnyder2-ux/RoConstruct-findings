// from server: 36% by colin
struct FunctionDescriptor {
    FunctionDescriptor(const char*, int, int);
};

struct FuncDesc : FunctionDescriptor {
    FuncDesc(const char*, int, int);
};

struct BoundFuncDesc : FuncDesc {
    int field_14;
    int field_28;
    int field_2c;
    BoundFuncDesc(int, const char*, int, int);
};

extern "C" int __cdecl sub_4B0240(int, int);
extern "C" int __cdecl sub_56D350();
extern "C" void __cdecl sub_570DB0();

BoundFuncDesc::BoundFuncDesc(int function, const char* name, int security, int attributes)
    : FuncDesc(name, security, attributes)
{
    sub_570DB0();
    this->field_14 = sub_56D350();
    this->field_28 = (int)name;
    this->field_2c = attributes;
}
