// from server: 74% by colin
struct Assembly {
    int getState();
};

struct SleepStage {
    int getState();
    void stepStage(Assembly* assembly);
};

extern "C" int __stdcall sub_5B4830(int);
extern "C" int __stdcall sub_5B2FC0(int);
extern "C" void __stdcall sub_609140(SleepStage*, Assembly*);
extern "C" void __stdcall sub_603F90(SleepStage*, int, int);

void SleepStage::stepStage(Assembly* assembly)
{
    int a = assembly->getState();
    int b = this->getState();
    if (a > b) {
        int* p = (int*)((char*)this + 8);
        int* q = (int*)*p;
        int (*fn)(void*, Assembly*) = (int (*)(void*, Assembly*))q[5];
        fn(p, assembly);
    }
    int x = sub_5B4830(*(int*)((char*)assembly + 8));
    int y = sub_5B4830(*(int*)((char*)assembly + 12));
    sub_609140(this, assembly);
    if (sub_5B2FC0(x)) {
        sub_603F90(this, x, 8);
    }
    if (sub_5B2FC0(y)) {
        sub_603F90(this, y, 8);
    }
}
