// from server: 73% by atomic.potato
struct S {
    char pad[8];
    int field8;
    int f(int, int);
};

struct T {
    void ctor(const void*);
};

extern "C" void __stdcall sub_89e4b8(void*, const void*);

int S::f(int a, int b)
{
    int tmp = 0;
    char* p = (char*)a;
    if (p != 0)
        p -= 0x18;
    else
        p = 0;
    char* q = (char*)this->field8 + (int)p;
    ((T*)b)->ctor(q);
    *(int*)(b + 0x1c) = *(int*)(q + 0x1c);
    return b;
}
