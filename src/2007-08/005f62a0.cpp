// from server: 48% by colin
struct VColor3 {
    float r;
    float g;
    float b;
};

struct FactoryProduct {
    char pad[0xe8];
    float x;
    float y;
    float z;
    void method(int);
};

struct Other {
    void sub_5f4460(VColor3*);
};

extern "C" void* __stdcall sub_570270(int);

void FactoryProduct::method(int arg) {
    VColor3* p;
    if (this != 0) {
        p = (VColor3*)((char*)this + 4);
    } else {
        p = 0;
    }
    VColor3 v;
    v.r = this->x;
    v.g = this->y;
    v.b = this->z;
    void* result = sub_570270(0x8c7cfc);
    if (result != 0) {
        ((Other*)((char*)result + 0x10))->sub_5f4460(&v);
    }
}
