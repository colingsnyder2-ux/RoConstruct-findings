// from server: 64% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __stdcall func_00802878();

struct S {
    void f(int a, void* b, int c);
};

void S::f(int a, void* b, int c)
{
    if (c == 3) {
        *(void**)b = (void*)0x932958;
        return;
    }
    if (c == 0) {
        if (b == 0)
            return;
        *(int*)b = *(int*)a;
        *(int*)((char*)b + 4) = *(int*)((char*)a + 4);
        return;
    }
    if (c == 1)
        return;
    {
        void* p = b;
        type_info* ti = *(type_info**)p;
        bool r = ti->operator==(*(const type_info*)&func_00802878);
        *(int*)p = r ? a : 0;
    }
}
