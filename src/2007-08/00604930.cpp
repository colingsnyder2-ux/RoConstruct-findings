// from server: 50% by colin
struct SleepStage;

struct Joint {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

struct Assembly {
    char pad[0x28];
    char data[0x30];
};

struct SleepStage {
    char pad[8];
    Assembly* field8;
    char pad2[0x1c];
    Assembly* field28;

    Assembly* getAssembly(Assembly* a, Assembly* b);
};

extern "C" void __stdcall sub_475050(void* p);
extern "C" void __stdcall sub_5095d0(void* dst, void* src);
extern "C" void __stdcall sub_473200(void* p);

Assembly* SleepStage::getAssembly(Assembly* a, Assembly* b)
{
    if (a == (Assembly*)this) {
        sub_475050(b);
        return b;
    }
    if (a == field8) {
        Joint* j = (Joint*)((char*)this + 0x28);
        sub_5095d0(b, j);
        ((Joint*)b)->f24 = j->f24;
        ((Joint*)b)->f28 = j->f28;
        ((Joint*)b)->f2c = j->f2c;
        return b;
    }
    Assembly* tmp = (Assembly*)((char*)this + 0x28);
    Assembly* r = getAssembly(a, tmp);
    sub_473200(r);
    return b;
}
