// from server: 28% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct Instance {
    void* vtable;
    void constructFromInstance(const Instance* other);
};

struct JointsService : Instance {
    JointsService(const Instance* other);
};

JointsService::JointsService(const Instance* other)
{
    void* mem = malloc(0x154);
    if (mem) {
        ((Instance*)mem)->constructFromInstance(other);
    }
    else {
        mem = 0;
    }
    constructFromInstance((Instance*)mem);
}
