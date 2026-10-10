// from server: 34% by colin
struct Descriptor {
    void* vtable;
};

struct FunctionDescriptor {
    void* vtable;
    int pad04;
    int pad08;
    int pad0c;
    int pad10;
    int pad14;
    int pad18;
    int pad1c;
    int pad20;
    int pad24;
    int pad28;
    int pad2c;
    int pad30;
    int pad34;
};

struct BoundFuncDesc {
    void* vtable;
    int pad04;
    int pad08;
    int pad0c;
    int pad10;
    int pad14;
    int pad18;
    int pad1c;
    int pad20;
    int pad24;
    int pad28;
    int pad2c;
    int pad30;
    int pad34;
    void construct(int, int);
};

extern "C" void* __stdcall sub_630D36(void*, void*, void*, int, int);
extern "C" void __stdcall sub_630B9E(void*, void*);
extern "C" void __stdcall sub_56F410(void*);
extern "C" void __stdcall sub_77E710(void*);
extern "C" void __stdcall sub_77E69C(void*, void*);

void BoundFuncDesc::construct(int a, int b)
{
    int local0;
    int local4;
    int local8;
    void* p;
    void* q;
    void* r;
    int* vt;
    int* vt2;
    void* result;
    void* str;

    local0 = this->pad30;
    if (this->pad34) {
        vt = *(int**)this->pad34;
        local4 = ((int (__thiscall*)(void*))vt[2])((void*)this->pad34);
    } else {
        local4 = 0;
    }

    vt2 = *(int**)a;
    ((void (__thiscall*)(void*, int*, int))vt2[1])((void*)a, &local0, 1);

    result = sub_630D36((void*)local8, (void*)0x88209c, (void*)0x882bc0, 0, 0);
    if (result == 0) {
        sub_77E710((void*)0x786e04);
        sub_630B9E((void*)0x841e0c, &local8);
    }

    sub_56F410(&local0);
    sub_77E69C((void*)result, (void*)0);

    ((void (__thiscall*)(void*, int))this->pad28)((void*)this->pad2c, (int)result + (int)result);

    if (local4) {
        vt = *(int**)local4;
        ((void (__thiscall*)(void*, int))vt[0])((void*)local4, 1);
    }
}
