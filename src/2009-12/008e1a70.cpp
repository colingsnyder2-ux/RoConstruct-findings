// from server: 95% by atomic.potato
struct Manager;

struct Manager {
    int pad0;
    int result;
    int pad8;
    int limit;
};

extern "C" int __stdcall Lookup(Manager *, int);

struct S {
    int f(int);
};

int S::f(int value)
{
    Manager *manager = (Manager *)((char *)this + 0x13c);
    int *entry = (int *)Lookup(manager, value);
    if (entry)
        return entry[2];
    return 0;
}
