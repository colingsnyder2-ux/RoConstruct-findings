// from server: 34% by colin
struct Instance {
    void* vtable;
};

struct Service {
    bool isPublic;
};

struct DebrisService : Instance, Service {
    char pad[0x24];
    int maxItems;
    int field_2c;
    char pad2[0x8];
    int field_38;
    void* field_3c;

    DebrisService(int a, int b, double d, int e, int f);
};

extern "C" void __stdcall sub_58e470(int, int);
extern "C" void __stdcall sub_570db0(int);
extern "C" void __stdcall sub_56d3c0(int);
extern "C" int __stdcall sub_56d920();
extern "C" void* __stdcall sub_62fef6(int);
extern "C" void __stdcall sub_5f8a60(int, int, int);

DebrisService::DebrisService(int a, int b, double d, int e, int f)
{
    sub_58e470(a, b);
    sub_570db0(0);
    this->field_2c = a;
    this->maxItems = b;
    sub_56d3c0(0);
    this->field_38 = sub_56d920();
    void* p = sub_62fef6(0x10);
    if (p) {
        *(void**)p = (void*)0x7a9fb4;
        *(double*)((char*)p + 8) = d;
    } else {
        p = 0;
    }
    this->field_3c = p;
    sub_5f8a60(e, f, 0);
}
