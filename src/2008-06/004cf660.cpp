// from server: 58% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct PhysicsSender {
    char pad[0x10];
    int count;
    void f(int a, int b);
};

void PhysicsSender::f(int a, int b)
{
    int n = count;
    unsigned int q = (unsigned int)((unsigned long long)0xa0a0a0a1 * (unsigned int)n >> 32);
    int m = (int)(q >> 8);
    void* p1 = malloc(n);
    void* p2 = malloc(m * 4);
    void** arr = (void**)p2;
    char* cur = (char*)p1;
    for (int i = 0; i < m; i++) {
        *(void**)(cur + 0x194) = this;
        arr[i] = cur;
        cur += 0x198;
    }
    *(void**)((char*)this + 8) = p1;
    *(int*)((char*)this + 4) = m;
    *(void**)((char*)this + 0xc) = *(void**)a;
    *(int*)((char*)this + 0x10) = b;
}
