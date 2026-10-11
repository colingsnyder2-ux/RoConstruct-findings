// from server: 38% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* func_005e7900();

struct VModelInstance {
    char pad_0[0x38];
    void* f_38;
    int f_3c;
    int f_40;
    void run(int, int, int, int);
};

struct BoundFuncDesc {
    void* f_0;
    void* f_4;
};

void VModelInstance::run(int a, int b, int c, int d)
{
    BoundFuncDesc* p = (BoundFuncDesc*)func_005e7900();
    BoundFuncDesc local;
    local.f_0 = p->f_0;
    local.f_4 = p->f_4;
    if (local.f_4 != 0)
        _InterlockedExchangeAdd((volatile long*)((char*)local.f_4 + 4), 1);
    float* v = (float*)func_005e7900();
    float x = v[0];
    float y = v[1];
    float z = v[2];
    int off = *(int*)((char*)this + 0x40);
    int base = *(int*)((char*)this + 0x3c);
    void* vt = *(void**)((char*)this + 0x38);
    void (*fn)(void*, float, float, float) = (void (*)(void*, float, float, float))vt;
    fn((char*)this + 0x140 + base + off, x, y, z);
}
