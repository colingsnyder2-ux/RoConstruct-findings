// from server: 44% by colin
// roc-repair: fixed-width shims for MSVC2005/2008
typedef int intptr_t;




struct Value {
    char data[12];
    void set(int, int);
};

struct Clump {
    char padding[8];
    Value value;
    bool dirty;
    void update(Value*);
    Value* getValue();
};

struct Assembly;
struct Joint;
struct Contact;

struct Edge {
    virtual int getState();
    virtual int getEdgeState();
    virtual int v2();
    virtual int v3();
};

struct Assembly {
    char pad0[4];
    Edge* edge;
    char pad1[0x18 - 8];
    int* statePtr;
    char pad2[0x24 - 0x1c];
    void* kernel;
    char pad3[0x44 - 0x28];
    int someField44;
    int someField48;
};

struct Joint {
    char pad0[4];
    Edge* edge;
    char pad1[0x18 - 8];
    int* statePtr;
};

struct Contact {
    char pad0[4];
    Edge* edge;
    char pad1[0x18 - 8];
    int* statePtr;
    char pad2[0x24 - 0x1c];
    void* kernel;
    char pad3[0x44 - 0x28];
    int someField44;
    int someField48;
};

struct IWorldStage {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void onEdgeAdded(Edge*);
    virtual void onEdgeRemoving(Edge*);
};

struct IStage {
    virtual ~IStage();
    char pad0[4];
    IWorldStage* downstream;
};

struct SleepStage : public IStage {
    char pad1[0x140 - 12];
    char setAt140[0x1d8 - 0x140];
    int field1d8;
    bool field1dc;
    char pad2[0x1e0 - 0x1dd];

    int getStepId();
    void changeAssemblyState(Assembly*, int);
    void changeJointState(Joint*, int);
    void changeContactState(Contact*, int);
    int computeContactState(Contact*);
    int computeStateFromNeighbors(Assembly*);
    void forceNeighborAwake(Assembly*);
};

extern "C" void __stdcall sub_589330(void*);
extern "C" void* __stdcall sub_5e61b0(void*, void*);
extern "C" void* __stdcall sub_5e6c70(void*);
extern "C" void* __stdcall sub_5e8c40(void*, void*, void*);
extern "C" void* __stdcall sub_5e9f60(void*, void*);
extern "C" void* __stdcall sub_614040(void*, void*);
extern "C" void* __stdcall sub_614170(void*);
extern "C" void* __stdcall sub_64a550(void*, int);
extern "C" void* __stdcall sub_64a5b0(void*, void*);
extern "C" void* __stdcall sub_64ae90(void*, void*, int);
extern "C" void* __stdcall sub_64c1d0(void*, void*);
extern "C" void* __stdcall sub_64d2a0(void*, void*);

extern char g_97d568;
extern int g_97d580;

void SleepStage::changeAssemblyState(Assembly* a, int state)
{
    if (a->edge != 0) {
        int s1 = a->edge->getEdgeState();
        int s2 = this->getStepId();
        if (s1 < s2) {
            goto skip;
        }
        int* p = a->statePtr;
        int cur = *p;
        goto have;
    }
skip:
    {
        int cur = 0;
have:
        int saved = a->someField48;
        if (cur != 0) {
            return;
        }
        if (cur != 3) {
            sub_64ae90(this, a, 3);
        }
        Value* v = (Value*)sub_5e6c70(a);
        int i = 0;
        if (*(int*)((char*)v + 4) <= 0) {
            return;
        }
        do {
            Assembly* as = *(Assembly**)(*(char**)v + i * 4);
            int s3 = this->getStepId();
            int s4 = as->edge->getEdgeState();
            if (s4 < s3) {
                goto next;
            }
            sub_64c1d0(this, as);
            int st = as->edge->getState();
            int es = (int)(intptr_t)as->edge;
            if (st == 1) {
                if (es != 3 && es != 4) {
                    goto next;
                }
            }
            {
                void* r = sub_5e61b0(this, as);
                Assembly* asm2 = (Assembly*)r;
                if (saved < a->someField48) {
                    if (!this->field1dc) {
                        int cs = (int)(intptr_t)sub_64a5b0(this, asm2);
                        if (cs == 3) {
                            goto next;
                        }
                    }
                    int f = this->field1d8;
                    if (asm2->someField44 == f) {
                        goto next;
                    }
                    asm2->someField44 = f;
                    asm2->someField48 = saved + 1;
                    sub_589330((char*)this + 0x140);
                    goto next;
                }
                if (asm2->edge == 0) {
                    goto next;
                }
                int s5 = this->getStepId();
                int s6 = asm2->edge->getEdgeState();
                if (s6 < s5) {
                    goto next;
                }
                if (*asm2->statePtr != 5) {
                    goto next;
                }
                int st2 = 0;
                if (asm2->edge != 0) {
                    int s7 = asm2->edge->getEdgeState();
                    int s8 = this->getStepId();
                    if (s7 >= s8) {
                        st2 = *asm2->statePtr;
                    }
                }
                void* r2 = sub_64a550(this, st2);
                sub_5e9f60(r2, &asm2);
                sub_5e8c40((char*)this + 0x140, &asm2, &asm2);
                if ((g_97d580 & 1) == 0) {
                    g_97d580 |= 1;
                    sub_614170(&g_97d568);
                }
                void* k = asm2->kernel;
                void* p2 = *(void**)((char*)k + 0x1c);
                void* p3 = *(void**)((char*)p2 + 0xa0);
                sub_614040(p3, &g_97d568);
                int s9 = asm2->edge->getEdgeState();
                int s10 = this->getStepId();
                if (s9 > s10) {
                    sub_64d2a0(this->downstream, asm2);
                }
                asm2->statePtr[1] = 0;
                *asm2->statePtr = 4;
            }
next:
            i++;
        } while (i < *(int*)((char*)v + 4));
    }
}
