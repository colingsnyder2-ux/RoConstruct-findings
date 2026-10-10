// from server: 40% by colin
struct Assembly {
    int getState();
    void setState(int);
};

struct Contact {
    int getState();
    void setState(int);
};

struct Joint {
    int getState();
    void setState(int);
};

struct AssemblyList {
    Assembly** data;
    int count;
};

struct ContactList {
    Contact** data;
    int count;
};

struct JointList {
    Joint** data;
    int count;
};

struct SleepStage {
    char pad0[4];
    void* field4;
    void* field8;
    void changeAssemblyState(Assembly*, int);
    void changeContactState(Contact*, int);
    void changeJointState(Joint*, int);
    void stepSleepStage(AssemblyList*);
};

extern "C" int __stdcall Assembly_getState(Assembly*);
extern "C" int __stdcall Assembly_setState(Assembly*, int);
extern "C" int __stdcall Contact_getState(Contact*);
extern "C" int __stdcall Contact_setState(Contact*, int);
extern "C" int __stdcall Joint_getState(Joint*);
extern "C" int __stdcall Joint_setState(Joint*, int);
extern "C" int __stdcall sub_5B2FC0(void*);
extern "C" int __stdcall sub_5B4830(void*);
extern "C" int __stdcall sub_609140(Contact*, SleepStage*);
extern "C" int __stdcall sub_627AC0(void*, AssemblyList*);

void SleepStage::stepSleepStage(AssemblyList* list) {
    int i;
    for (i = 0; i < list->count; i++) {
        Assembly* a = list->data[i];
        int s1 = sub_5B4830((void*)a->getState());
        int s2 = sub_5B4830((void*)a->getState());
        if (sub_5B2FC0((void*)s1)) {
            changeAssemblyState(a, 8);
        }
        if (sub_5B2FC0((void*)s2)) {
            changeAssemblyState(a, 8);
        }
    }
    for (i = 0; i < list->count; i++) {
        Assembly* a = list->data[i];
        int state = a->getState();
        int myState = this->field4 ? 0 : 0;
        (void)myState;
        if (state > 0) {
            void* p = this->field8;
            (void)p;
        }
        sub_609140((Contact*)a, this);
    }
    sub_627AC0(this->field4, list);
}
