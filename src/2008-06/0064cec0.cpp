// from server: 56% by colin
struct Instance {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual int  v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual bool v12();
};

struct TreeStage {
    void addChild(Instance* child);
};

struct ClumpStage {
    char pad[0x10];
    void addChild(Instance* child);
};

void sub_645830(Instance* self, Instance* arg);
void sub_5e8c40(void* self, void* a, void* b);

void TreeStage::addChild(Instance* child) {
    Instance* self = (Instance*)this;
    sub_645830(child, self);
    Instance* p = *(Instance**)((char*)this + 8);
    p->v00();
}

void ClumpStage::addChild(Instance* child) {
    TreeStage* ts = (TreeStage*)this;
    ts->addChild(child);

    if (child->v03() == 0) {
        if (child->v12()) {
            Instance* tmp = child;
            sub_5e8c40((char*)this + 0x10, &tmp, &tmp);
        }
    }
}
