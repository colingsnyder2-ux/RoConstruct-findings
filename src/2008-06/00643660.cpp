// from server: 30% by colin
struct HumanoidState;

extern "C" void* __cdecl operator_new(unsigned int size);

struct StateBase {
    void* vfptr;
    void* vfptr2;
    int field8;
    float fieldC;
    StateBase(void* arg);
};

struct State0 : StateBase { State0(void* arg); };
struct State1 : StateBase { State1(void* arg); };
struct State2 : StateBase { State2(void* arg); };
struct State3 : StateBase { State3(void* arg); };
struct State4 : StateBase { State4(void* arg); };
struct State5 : StateBase { State5(void* arg); };
struct State6 : StateBase { State6(void* arg); };
struct State7 : StateBase { State7(void* arg); };
struct State8 : StateBase { State8(void* arg); };
struct State9 : StateBase { State9(void* arg); };
struct State10 : StateBase { State10(void* arg); };
struct State11 : StateBase { State11(void* arg); };
struct State12 : StateBase { State12(void* arg); };

struct Landed {
    StateBase* create(int type, void* arg);
};

StateBase* Landed::create(int type, void* arg)
{
    switch (type) {
    case 0: {
        State0* p = (State0*)operator_new(0xa0);
        if (p) p->State0::State0(arg);
        return p;
    }
    case 1: {
        State1* p = (State1*)operator_new(0xa8);
        if (p) p->State1::State1(arg);
        return p;
    }
    case 2: {
        State2* p = (State2*)operator_new(0xa8);
        if (p) p->State2::State2(arg);
        return p;
    }
    case 3: {
        State3* p = (State3*)operator_new(0xc0);
        if (p) p->State3::State3(arg);
        return p;
    }
    case 4: {
        State4* p = (State4*)operator_new(0xa8);
        if (p) p->State4::State4(arg);
        return p;
    }
    case 5: {
        State5* p = (State5*)operator_new(0xcc);
        if (p) p->State5::State5(arg);
        return p;
    }
    case 6: {
        State6* p = (State6*)operator_new(0xcc);
        if (p) p->State6::State6(arg);
        return p;
    }
    case 7: {
        State7* p = (State7*)operator_new(0x114);
        if (p) p->State7::State7(arg);
        return p;
    }
    case 8: {
        State8* p = (State8*)operator_new(0x114);
        if (p) p->State8::State8(arg);
        return p;
    }
    case 9: {
        State9* p = (State9*)operator_new(0xcc);
        if (p) p->State9::State9(arg);
        return p;
    }
    case 10: {
        State10* p = (State10*)operator_new(0xa0);
        if (p) p->State10::State10(arg);
        return p;
    }
    case 11: {
        State11* p = (State11*)operator_new(0xa0);
        if (p) p->State11::State11(arg);
        return p;
    }
    default: {
        State12* p = (State12*)operator_new(0xcc);
        if (p) p->State12::State12(arg);
        return p;
    }
    }
}
