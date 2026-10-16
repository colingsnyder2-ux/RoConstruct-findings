// from server: 39% by colin
struct PhysicsSender {
    char pad[4];
};

struct SimJobTracker {
    char pad[0x30];
};

struct RoundRobinPhysicsSender : PhysicsSender {
    SimJobTracker jobStagePos;
    double lastCharacterSendTime;
    float lastBufferCheckTime;
    int field44;
    float field48;

    RoundRobinPhysicsSender(const RoundRobinPhysicsSender& other);
};

extern "C" void __stdcall sub_4025b0(void* dst, const void* src);

RoundRobinPhysicsSender::RoundRobinPhysicsSender(const RoundRobinPhysicsSender& other)
{
    *(PhysicsSender*)this = *(const PhysicsSender*)&other;
    sub_4025b0(&jobStagePos, &other.jobStagePos);
    lastCharacterSendTime = other.lastCharacterSendTime;
    lastBufferCheckTime = other.lastBufferCheckTime;
    field44 = other.field44;
    field48 = other.field48;
}
