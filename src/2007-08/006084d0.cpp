// from server: 79% by colin
struct Instance {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3();
    virtual void v4();
    virtual int v5();
};

struct ClumpStage {
    void f(Instance* inst);
};

void func_00608340(ClumpStage* self, Instance* inst);
void func_00607a70(ClumpStage* self, Instance* inst);
void func_006057a0(ClumpStage* self, Instance* inst);
void func_00609140(Instance* inst, ClumpStage* self);

void ClumpStage::f(Instance* inst)
{
    if (inst->v3() == 0) {
        int t = inst->v5();
        if (t == 5 || t == 6) {
            func_00608340(this, inst);
            func_00609140(inst, this);
            return;
        }
    }
    if (inst->v3() == 0) {
        if (inst->v5() == 7) {
            func_00607a70(this, inst);
            func_00609140(inst, this);
            return;
        }
    }
    func_006057a0(this, inst);
    func_00609140(inst, this);
}
