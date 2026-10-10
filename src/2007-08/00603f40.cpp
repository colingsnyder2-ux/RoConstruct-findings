// from server: 67% by colin
struct Assembly;
struct Joint;
struct Contact;

struct IWorldStage {
    char pad[8];
    void* m_p;
};

struct SleepStage {
    char pad0[8];
    void* m_p8;
    char pad1[4];
    char pad2[4];
    void* m_p10;
    void stepSleepStage(Assembly* a);
};

struct S_func_005b2fc0 {
    char pad[8];
    void* m_p;
    int f();
};

struct P_func_005b3040 { void g(); };
struct S_func_005b3040 {
    char pad[8];
    P_func_005b3040* m_p;
    void f();
};

extern "C" void __stdcall func_00603be0(SleepStage* self, Assembly* a);
extern "C" void __stdcall func_005e29b0(void* self, void* a, void* b);
extern "C" void __stdcall func_006271e0(void* self, Assembly* a);

void SleepStage::stepSleepStage(Assembly* a)
{
    func_00603be0(this, a);
    void* local1;
    void* local2;
    local2 = a;
    func_005e29b0(&this->pad1[0], &local1, &local2);
    ((S_func_005b3040*)this)->f();
    if (((S_func_005b2fc0*)this)->f() == 0) {
        func_006271e0(this->m_p8, a);
    }
}
