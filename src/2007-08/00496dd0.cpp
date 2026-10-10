// from server: 32% by colin
struct BoundFuncDesc {
    void* vtable;
    void* field_4;
    void* field_8;
    void construct(void* function, char* name, int security, int attributes);
};

extern "C" void __stdcall sub_493300(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_494E20(void*, void*);
extern "C" void __stdcall sub_571500(void*, void*);
extern "C" void __stdcall sub_725750(void*);
extern "C" void __stdcall sub_725770(void*);

void BoundFuncDesc::construct(void* function, char* name, int security, int attributes) {
    void* f4 = this->field_4;
    void* f8 = this->field_8;
    void* local[3];
    local[0] = (void*)0x4937d0;
    local[1] = function;
    local[2] = name;
    sub_493300(local, f4, f8, function, name);
    void* p = (char*)this->vtable + 0x14;
    sub_725750(p);
    sub_494E20(this->vtable, function);
    sub_725770(p);
    sub_571500(this->field_8, 0);
}
