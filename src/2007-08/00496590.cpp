// from server: 37% by colin
struct FunctionDescriptor {
    char pad[0x30];
    void* field_30;
};

struct BoundFuncDesc {
    char pad[0x14];
    void* field_14;
    char pad2[0x18];
    void* field_30;
    void* field_34;
    void* field_38;
    void* field_3c;

    BoundFuncDesc(void* function, const char* name, int security, int attributes);
};

extern "C" void* __cdecl sub_494E80(void* a, void* b);
extern "C" void __stdcall sub_570DB0(void* self, void* a);
extern "C" void __stdcall sub_56D3C0(void* self);
extern "C" void* __stdcall sub_56D6F0(void* self);
extern "C" void* __cdecl sub_52C940(void* a, int b, void* c);
extern "C" void __stdcall sub_56D400(void* self, void* a);

BoundFuncDesc::BoundFuncDesc(void* function, const char* name, int security, int attributes) {
    void* p = sub_494E80((void*)name, (void*)security);
    sub_570DB0(this, p);
    this->field_30 = (void*)0x79bbfc;
    this->field_34 = (void*)0;
    this->field_38 = (void*)0;
    this->field_3c = (void*)0;
    sub_56D3C0(&this->field_30);
    this->field_14 = sub_56D6F0(&this->field_30);
    void* q = sub_56D6F0(&this->field_30);
    void* r = sub_52C940((void*)attributes, -1, q);
    sub_56D400(&this->field_14, r);
}
