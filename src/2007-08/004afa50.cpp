// from server: 32% by colin
struct Name {
    bool operator==(const Name& other) const;
};

struct Creator {
    const Name& getClassNameUnconstructed() const;
    void registerCreator(const Name& name);
    void unregisterCreator(const Name& name);
    bool isConstructed() const;
    void setConstructed();
};

struct FactoryProduct {
    Creator creator;
    char constructedFlag;
    char pad[3];
    Name name;
    char pad2[64];

    FactoryProduct();
};

FactoryProduct::FactoryProduct()
{
    const Name& name = creator.getClassNameUnconstructed();
    if (!creator.isConstructed()) {
        if (constructedFlag == 0) {
            Name temp;
            creator.registerCreator(temp);
            if (constructedFlag == 0) {
                constructedFlag = 1;
            }
        }
        creator.unregisterCreator(name);
        creator.getClassNameUnconstructed();
    }
}
