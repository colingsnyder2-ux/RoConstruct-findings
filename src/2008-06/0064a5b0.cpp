// from server: 75% by colin
struct Edge {
    int pad0;
    void* prim0;
    int pad8;
    int padC;
    int pad10;
    int pad14;
    void* joint;
};

struct IStage {
    virtual int getStageType();
    virtual int getPriority();
};

struct CleanStage : IStage {
    int getPriority();
    void* primitivesAreOk(Edge* e);
};

void* CleanStage::primitivesAreOk(Edge* e) {
    if (e->prim0 != 0) {
        int a = ((IStage*)e->prim0)->getPriority();
        int b = this->getPriority();
        if (a >= b) {
            return *(void**)e->joint;
        }
    }
    return 0;
}
