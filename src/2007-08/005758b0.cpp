// from server: 96% by colin
struct PartInstance;

struct Helper {
    void* getSomething(int a, int b);
};

extern "C" void* __cdecl sub_62E660(void* p);

struct PartInstance {
    void* method(int a, int b);
};

void* PartInstance::method(int a, int b) {
    Helper* h = (Helper*)((char*)this + 0xfffffe84);
    void* r = h->getSomething(a, b);
    return sub_62E660(r);
}
