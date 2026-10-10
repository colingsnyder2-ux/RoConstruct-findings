// from server: 91% by atomic.potato
typedef int BOOL;

struct Instance;
struct JointInstance;

extern "C" BOOL sub_0080B2EA(
    void*,
    Instance*,
    void*,
    const void*,
    const void*
);

struct JointsService
{
    BOOL f(Instance*);
};

BOOL JointsService::f(Instance* a)
{
    return sub_0080B2EA(this, a, 0, (const void*)0xC071F8, (const void*)0x0) != 0;
}
