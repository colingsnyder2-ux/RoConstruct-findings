// from server: 68% by colin
struct Assembly;
struct Joint;
struct Contact;

struct SleepStage {
    void stepSleepStage(void*);
    void changeAssemblyState(Assembly*, int);
    void changeContactState(Contact*, int);
};

extern "C" {
    int __stdcall sub_5B4830(void*);
    bool __stdcall sub_5B2FB0(void*);
    int __stdcall sub_5B2FC0(void*);
    void __stdcall sub_603F40(SleepStage*, void*);
    void __stdcall sub_603F90(SleepStage*, void*, int);
    void __stdcall sub_6271A0(SleepStage*, void*);
}

void SleepStage::stepSleepStage(void* a1)
{
    void* v2 = (void*)((int*)a1)[2];
    int v3 = sub_5B4830(v2);
    void* v4 = (void*)((int*)a1)[3];
    int v5 = sub_5B4830(v4);

    bool b1 = false;
    bool b2 = false;

    if (!sub_5B2FB0((void*)v3) && sub_5B2FC0((void*)v3) != 0) {
        sub_603F40(this, (void*)v3);
        b1 = true;
    }

    if (!sub_5B2FB0((void*)v5) && sub_5B2FC0((void*)v5) != 0) {
        sub_603F40(this, (void*)v5);
        b2 = true;
    }

    sub_6271A0(this, a1);

    if (b1) {
        sub_603F90(this, (void*)v3, 8);
    }
    if (b2) {
        sub_603F90(this, (void*)v5, 8);
    }
}
