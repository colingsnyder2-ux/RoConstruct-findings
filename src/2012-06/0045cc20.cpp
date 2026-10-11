// from server: 51% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct VDecalFactoryProductCreator {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

struct VDecalFactoryProductCreatorHolder {
    void* ptr;
};

struct VDecalFactoryProductCreatorOwner {
    VDecalFactoryProductCreatorHolder* holder;
    VDecalFactoryProductCreatorOwner* __thiscall construct(void* arg);
};

VDecalFactoryProductCreatorOwner* VDecalFactoryProductCreatorOwner::construct(void* arg) {
    VDecalFactoryProductCreator* obj;
    this->holder = 0;
    obj = (VDecalFactoryProductCreator*)sub_98211a(0x14);
    if (obj != 0) {
        obj->field4 = (void*)1;
        obj->field8 = (void*)1;
        obj->field0 = (void*)0xb553e4;
        obj->fieldC = arg;
    } else {
        obj = 0;
    }
    this->holder = (VDecalFactoryProductCreatorHolder*)obj;
    return this;
}
