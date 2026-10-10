// from server: 31% by colin
struct RBXName {
    static const RBXName& declare(const char*);
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
};

struct CreatorImpl : CreatorBase {
    void construct(const RBXName& name, int arg);
};

struct FactoryProduct {
    char pad[8];
    CreatorImpl creator;
    void FactoryProductCtor(int arg);
};

extern "C" void __cdecl sub_4147D0(void*, const RBXName*);
extern "C" void __cdecl sub_4923A0(void*);

void FactoryProduct::FactoryProductCtor(int arg) {
    char state = 0;
    int local = 0;
    RBXName name;
    sub_4147D0(&name, (const RBXName*)&arg);
    creator.construct(name, arg);
    sub_4923A0(&name);
}
