// from server: 42% by colin
struct Instance {
    char pad[0x0c];
    void* field_0c;
};

struct Container {
    char pad[0x0c];
    void* field_0c;
};

extern "C" void* __stdcall sub_490d70(void*);

struct S {
    char pad[0x0c];
    void* field_0c;
    bool f();
};

bool S::f() {
    void* p = this->field_0c;
    if (!p) {
        return false;
    }
    void* q = sub_490d70(p);
    if (!q) {
        return false;
    }
    char* r = *(char**)((char*)q + 0x108);
    if (!r) {
        return false;
    }
    int a = *(int*)(r + 0x10);
    int b = *(int*)(r + 0x0c);
    int diff = a - b;
    diff >>= 3;
    int c = 0;
    return c < diff;
}
