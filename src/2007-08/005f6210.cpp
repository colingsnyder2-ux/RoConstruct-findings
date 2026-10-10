// from server: 41% by colin
struct Name {
    char data[4];
};

struct Vector3 {
    float x, y, z;
};

struct Color3 {
    float r, g, b;
};

struct DescribedBase {
    void* vtable;
};

struct ICreator {
    void* vtable;
};

struct Creator : ICreator {
    void* field4;
};

struct FactoryProduct : DescribedBase {
    char pad[0xe4];
    Vector3 color;
    void method(Creator* creator);
};

extern "C" void __cdecl sub_5095d0(void* dst, const void* src);
extern "C" void* __stdcall sub_570270(Creator* creator, void* name);
extern "C" void __cdecl sub_5f41f0(void* self, void* arg);

void FactoryProduct::method(Creator* creator) {
    void* namePtr;
    if (this != 0) {
        namePtr = (char*)this + 4;
    } else {
        namePtr = 0;
    }

    Vector3* color = (Vector3*)((char*)this + 0xe8);

    char buf[0x30];
    sub_5095d0(buf, color);

    float cx = color->x;
    float cy = color->y;
    float cz = color->z;

    void* result = sub_570270(creator, namePtr);
    if (result != 0) {
        char buf2[0x30];
        sub_5095d0(buf2, buf);
        *(float*)(buf2 + 0x24) = cx;
        *(float*)(buf2 + 0x28) = cy;
        *(float*)(buf2 + 0x2c) = cz;
        sub_5f41f0((char*)result + 0x10, buf2 + 0x2b);
    }
}
