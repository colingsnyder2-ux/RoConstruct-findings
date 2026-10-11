// from server: 62% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info type_info_9329e0;
extern "C" bool (__stdcall *func_802878)(const type_info*);

struct S {
    void f(int a, int b, int c);
};

void S::f(int a, int b, int c)
{
    if (c == 3) {
        *(const type_info**)b = &type_info_9329e0;
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
        const type_info** p = (const type_info**)b;
        const type_info* t = *p;
        bool r = func_802878(&type_info_9329e0);
        *p = r ? 0 : t;
    }
}
