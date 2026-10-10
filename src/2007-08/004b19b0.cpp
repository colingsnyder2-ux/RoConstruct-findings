// from server: 29% by colin
struct FunctionDescriptor {
    void construct();
};

struct ListBase {
    void init();
};

struct BoundFuncDesc : FunctionDescriptor {
    char pad[0xe10];
    ListBase list;
    int count;

    BoundFuncDesc* construct();
};

BoundFuncDesc* BoundFuncDesc::construct() {
    FunctionDescriptor::construct();
    list.init();
    count = 0;
    return this;
}
