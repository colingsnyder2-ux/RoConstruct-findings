// from server: 53% by colin
struct Name;

struct DescribedBase {
    void* vtable;
};

struct ICreator {
    void* vtable;
};

struct FactoryProductBase {
    char pad[0xe8];
    float x;
    float y;
    float z;
};

struct FactoryClass {
    static FactoryClass* getCreators();
};

struct Creator {
    static void* find(FactoryClass* creators, const Name* name);
};

struct Name {
    static Name* declare(const char* s);
};

struct VColor3 {
    float r, g, b;
};

struct FactoryProduct : FactoryProductBase {
    void construct(const VColor3& color);
};

extern "C" void* __stdcall sub_570270(void* a, void* b);
extern "C" void __stdcall sub_5f3fd0(void* a, void* b);

void FactoryProduct::construct(const VColor3& color) {
    Name* name = 0;
    if (this) {
        name = (Name*)((char*)this + 4);
    }
    VColor3 c;
    c.r = this->x;
    c.g = this->y;
    c.b = this->z;
    void* creators = sub_570270((void*)0x8c7d3c, name);
    if (creators) {
        sub_5f3fd0((char*)creators + 0x10, &c);
    }
}
