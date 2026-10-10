// from server: 94% by colin
struct IWorldStage {
    virtual void v0();
    virtual int getState();
};

struct SleepStage : IWorldStage {
    char pad[4];
    SleepStage* next;
    void stepSleepStage(int);
};

void __stdcall func_006278f0(SleepStage*, int);

void SleepStage::stepSleepStage(int a)
{
    SleepStage* s = this;
    while (s->getState() != 4) {
        s = s->next;
    }
    func_006278f0(s, a);
}
