// from server: 92% by atomic.potato
struct Instance;
struct ServerReplicator;

extern "C" void *const_0xaffe40;
extern "C" void *const_0xb1bdfc;
extern "C" int __stdcall sub_007f4aaa(
    void *, Instance *, void *, void *, void *);

struct Instance {};
struct ServerReplicator {};

int __stdcall f(Instance *instance)
{
    return sub_007f4aaa(0, instance, const_0xaffe40,
        const_0xb1bdfc, 0) != 0;
}