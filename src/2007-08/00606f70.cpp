// from server: 54% by colin
struct Instance {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int getState();
    virtual void v4();
    virtual int getType();
};

struct ClumpStage {
    char pad[0xa8];
    void processChild(Instance*);
    void processChild2(Instance*);
};

extern "C" {
    int __stdcall sub_5B4830(Instance*);
    int __stdcall sub_5B4760(Instance*);
    int __stdcall sub_5B3BA0(int, Instance*);
    int __stdcall sub_5B3C00(int, Instance*);
    int __stdcall sub_5B3E10(int, Instance*);
    int __stdcall sub_5B4770(Instance*, Instance*);
    void __stdcall sub_5E29B0(void*, void*, Instance**);
}

void ClumpStage::processChild(Instance* inst) {
    int a = sub_5B4830(inst);
    Instance* child = (Instance*)sub_5B4760(inst);
    while (child) {
        if (child->getState() == 0) {
            if (child->getType() == 7) {
                int b = sub_5B4830(inst);
                processChild2((Instance*)b);
                return;
            }
        }
        if (child->getState() == 0) {
            int t = child->getType();
            if (t == 5 || t == 6) {
                goto next;
            }
        }
        if (sub_5B3BA0(a, child)) {
            processChild2(child);
        } else if (sub_5B3C00(a, child)) {
            int c = sub_5B4830(child);
            sub_5B3E10(c, child);
            Instance* tmp = child;
            sub_5E29B0((char*)this + 0xa8, &tmp, &tmp);
        }
    next:
        child = (Instance*)sub_5B4770(inst, child);
    }
}
