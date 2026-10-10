// from server: 34% by colin
struct Name {
    static const Name& declare(const char*);
};

struct CreatorBase {
    virtual ~CreatorBase();
};

struct Creator : CreatorBase {
    bool tryRegister(const Name&);
    void unregister();
    const Name& getName() const;
};

struct CreatorMap {
    void* find(const Name*);
    void insert(const Name*, Creator*);
    void erase(const Name*);
};

struct FactoryProduct {
    char flag;
    Creator creator;
    CreatorMap* creators;

    FactoryProduct();
    ~FactoryProduct();
};

extern "C" void __cdecl sub_4890A0(void*, void*);
extern "C" void __cdecl sub_492970(void*, void*, void*);
extern "C" void __cdecl sub_5F1A40(void*);
extern "C" void* __cdecl sub_728F60(void*);

FactoryProduct::FactoryProduct()
{
    char localFlag = 0;
    void* localName = 0;
    void* localIter = 0;

    sub_4890A0(&localIter, &localName);
    while (!(*(unsigned char*)&localIter)) {
        if (*(unsigned char*)&localName == 0) {
            void* p = sub_728F60(&localFlag);
            sub_492970(&localIter, &localFlag, p);
            if (*(unsigned char*)&localName == 0) {
                *(unsigned char*)&localName = 1;
            }
        }
        sub_5F1A40(&localFlag);
        sub_4890A0(&localIter, &localName);
    }
}
