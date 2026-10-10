// from server: 73% by colin
struct IWorldStage {
    virtual int getStageId();
};

struct Assembly {
    int getState();
};

struct SleepStage : IWorldStage {
    void stepSleepStage(Assembly* assembly);
};

extern "C" int __cdecl sub_5B2FC0(Assembly* assembly);
extern "C" void __cdecl sub_603F90(SleepStage* self, Assembly* assembly, int n);

void SleepStage::stepSleepStage(Assembly* assembly) {
    int assemblyState = assembly->getState();
    int stageId = this->getStageId();
    if (assemblyState >= stageId) {
        if (sub_5B2FC0(assembly) != 0) {
            sub_603F90(this, assembly, 8);
        }
    }
}
