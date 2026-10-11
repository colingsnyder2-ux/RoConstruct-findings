// from server: 68% by colin
struct SimJob;

struct PhysicsSender {
    char pad[4];
    void* replicator;
};

struct RoundRobinPhysicsSender : PhysicsSender {
    SimJob* findTargetPlayerCharacterSimJob();
};

extern "C" void* __stdcall sub_5E50C0(void* p);

SimJob* RoundRobinPhysicsSender::findTargetPlayerCharacterSimJob()
{
    void* v = *(void**)((char*)replicator + 0);
    void* (*fn)(void*) = *(void* (**)(void*))((char*)v + 0x44);
    void* r = fn(v);
    if (r == 0)
        return 0;
    void* p = *(void**)((char*)r + 0x170);
    if (p == 0)
        return 0;
    void* q = *(void**)((char*)p + 0x134);
    void* (*fn2)(void*) = *(void* (**)(void*))((char*)q + 4);
    void* r2 = fn2((char*)p + 0x134);
    if (r2 == 0)
        return 0;
    return (SimJob*)sub_5E50C0((char*)r2 + 0x228);
}
