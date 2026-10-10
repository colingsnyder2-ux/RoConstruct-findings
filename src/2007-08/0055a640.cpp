// from server: 12% by colin
struct RBXName {
    static const RBXName& declare(const char*);
};

struct ICreator {
    virtual ~ICreator();
    virtual void* create() const;
};

struct Creator : public ICreator {
    void* field4;
    void* field8;
    Creator(const RBXName&);
    ~Creator();
};

struct FactoryProduct {
    void* field0;
    void* field4;
    void* field8;
    FactoryProduct();
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_5594F0(void*, void*);

const RBXName* g_name_559800;
const RBXName* g_name_559C90;

FactoryProduct::FactoryProduct()
{
    char local = 0;
    if (!sub_4879D0(&local)) {
        this->field8 = (void*)0x559800;
        this->field0 = (void*)0x559C90;
        Creator* c = (Creator*)sub_62FEF6(0x18);
        if (c) {
            sub_5594F0(c, &local);
        }
        this->field4 = c;
    }
    if (local) {
        void* p = *(void**)&local;
        ((void (__stdcall*)(void*, int))p)(p, 1);
    }
}
