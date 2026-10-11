// from server: 49% by atomic.potato
struct Climbing {
    void f1();
    int f2();
    void* f3(void*);
    void f4(void*, float);
};

void Climbing::f1()
{
    int local;
    f2();
    void* p = f3(&local);
    float v = *(float*)((char*)p + 4);
    f4((char*)this + 0x29c, v);
}
