// from server: 34% by colin
struct PropDesc;

struct PropDesc {
    bool equalTo(PropDesc* other);
};

struct TypedPropDesc {
    char pad[0x18];
    void* getset;
    bool equalTo(TypedPropDesc* other);
};

extern int g_attr1;
extern int g_attr2;

struct Helper1 {
    bool __thiscall eq(void* other);
};

struct Helper2 {
    void* __thiscall get(int attr);
};

struct Helper3 {
    void __thiscall getShort(short* out);
};

extern Helper1* h1;
extern Helper2* h2;
extern Helper3* h3;

bool TypedPropDesc::equalTo(TypedPropDesc* other) {
    if (h1->eq(other)) {
        return true;
    }
    void* a = h2->get(g_attr1);
    void* b = h2->get(g_attr2);
    short v1;
    short v2;
    h3->getShort(&v1);
    h3->getShort(&v2);
    short packed[2];
    packed[0] = v1;
    packed[1] = v2;
    void* p = this->getset;
    void (__thiscall *fn)(void*, short*, short*) = *(void (__thiscall **)(void*, short*, short*))p;
    fn(p, packed, packed);
    return false;
}
