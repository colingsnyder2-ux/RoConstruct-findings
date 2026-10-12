// from server: 77% by king_originala
namespace RBX {
struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    char pad2[0x98];
    int active;
};
}

struct Player;
struct Scheduler;

int __cdecl eligible(Player*);
RBX::ServiceProvider* __cdecl func_00491d50(RBX::Instance*);
Scheduler* __cdecl getScheduler(Player*);
bool __cdecl ready(Player*, int);
double __cdecl currentTime();

extern double interval;
extern double delayValue;

struct Reporter {
    void report(const void*, float);
};
extern Reporter reporter;

struct Handle {
    void* object;
    void* control;
    Handle(const Handle&);
};

struct Callback {
    char data[16];
    Callback(const Callback&);
};

Handle __cdecl getHandle(Player*);
Callback __cdecl makeCallback(void (Player::*)(), int, Handle);

struct Function {
    char data[32];
    void initialize(Callback, int);
};

struct Task {
    Function function;
    double delay;
    Task(const Task&);
    __forceinline Task(Player*);
};

struct Scheduler {
    void submit(Task);
};

struct Player : RBX::Instance {
    char pad2[0xc8];
    double timestamp;
    void update();
};

__forceinline Task::Task(Player* player)
{
    delay = delayValue;
    function.initialize(makeCallback(&Player::update, 0, getHandle(player)), 0);
}

#pragma float_control(precise, off)
void Player::update()
{
    if (!eligible(this))
        return;

    if (timestamp != 0.0) {
        double elapsed = currentTime() - timestamp;
        if (elapsed > interval) {
            RBX::ServiceProvider* provider = func_00491d50(this);
            if (provider && provider->active && ready(this, 1))
                reporter.report(reinterpret_cast<char*>(this) + 0x14,
                                static_cast<float>(elapsed));
        }
    }

    Scheduler* scheduler = getScheduler(this);
    if (scheduler)
        scheduler->submit(Task(this));
}
