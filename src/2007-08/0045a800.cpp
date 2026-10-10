// from server: 65% by colin
struct RBXName {
    RBXName();
    ~RBXName();
};

struct CreatorBase {
    void registerCreator(const RBXName& name);
};

struct FactoryProductCreator : CreatorBase {
    char pad[0x58];
    bool construct();
};

bool FactoryProductCreator::construct() {
    RBXName name;
    this->registerCreator(name);
    return true;
}
