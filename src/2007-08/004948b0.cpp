// from server: 45% by colin
struct Name {
    static const Name& declare(const char*);
};

struct CreatorBase {
    virtual ~CreatorBase();
    virtual void* create() const;
};

struct CreatorImpl : CreatorBase {
    bool tryRegister(const Name&);
    void unregister(const Name&);
    const Name& getClassName() const;
    void* create() const;
};

struct FactoryProduct {
    CreatorImpl creator;
    FactoryProduct();
};

extern "C" bool __stdcall sub_4890a0(void*, void*);
extern "C" void __stdcall sub_4929e0(void*, void*, void*);
extern "C" void __stdcall sub_5f1a40(void*);
extern "C" void* __stdcall sub_728f60(void*);

FactoryProduct::FactoryProduct()
{
    char flag = 0;
    Name name;
    while (!sub_4890a0(&name, &flag)) {
        if (!flag) {
            void* p = sub_728f60(&creator);
            sub_4929e0(&creator, &p, &name);
            if (!flag) {
                flag = 1;
            }
        }
        sub_5f1a40(&creator);
    }
}
