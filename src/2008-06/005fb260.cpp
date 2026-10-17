// from server: 40% by colin
struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct S_func_005fa870 {
    int f(int, int);
};

struct S_func_005fac30 {
    int f(int*);
};

struct S_func_0064dc00 {
    int f(int);
};

struct S_func_0064dd40 {
    int f(int);
};

extern "C" void* __cdecl func_006a0920(unsigned int);

struct S_func_005fb260 {
    char pad0[0x10];
    void* m_10;
    int f(int, int);
};

int S_func_005fb260::f(int a, int b)
{
    S_func_0064dc00* p = (S_func_0064dc00*)func_006a0920(0x34);
    S_func_0064dc00* obj = 0;
    if (p) {
        obj = (S_func_0064dc00*)p->f(a);
    }
    S_func_0064dd40* o2 = (S_func_0064dd40*)obj;
    o2->f(b);

    char* kd = (char*)m_10;
    int count = *(int*)(kd + 0x1c);
    int i = 0;
    if (count > 0) {
        int* arr = *(int**)(kd + 0x18);
        do {
            char* c = (char*)arr[i];
            if (*(int*)((char*)obj + 0xc) == *(int*)(c + 0xc)) {
                if (*(float*)(c + 0x10) == *(float*)((char*)obj + 0x10) &&
                    *(float*)(c + 0x14) == *(float*)((char*)obj + 0x14) &&
                    *(float*)(c + 0x18) == *(float*)((char*)obj + 0x18)) {
                    (*(int*)(c + 8))++;
                    (*(void(**)(void*, int))obj)(obj, 1);
                    char* kd2 = (char*)m_10;
                    int* arr2 = *(int**)(kd2 + 0x18);
                    return arr2[i];
                }
            }
            i++;
        } while (i < count);
    }

    int* r = ((S_func_005fa610*)obj)->f();
    *r = count;

    char* vec = (char*)kd + 0x18;
    int sz = *(int*)(vec + 4);
    if (sz < *(int*)(vec + 8)) {
        int* base = *(int**)vec;
        int* slot = base + sz;
        if (slot) *slot = (int)obj;
        (*(int*)(vec + 4))++;
    } else {
        S_func_005fa870* v = (S_func_005fa870*)vec;
        v->f(sz + 1, 0);
        int* base = *(int**)vec;
        int n = *(int*)(vec + 4);
        base[n - 1] = (int)obj;
    }
    return (int)obj;
}
