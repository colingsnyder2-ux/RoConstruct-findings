// from server: 35% by colin
struct Assembly;
struct Primitive;

struct AssemblyStage {
    Assembly* onEngineChanging(Primitive* p);
};

extern "C" int __cdecl sub_60A200(int, int, int, int);
extern "C" int __cdecl sub_60A860(int, int, int, int, int, int);
extern "C" int __cdecl sub_60A260(int, int, int, int, int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_475050(void*);

Assembly* AssemblyStage::onEngineChanging(Primitive* p) {
    int* self = (int*)this;
    int* a = (int*)p;
    int v1 = self[31];
    int v2 = a[31];
    if (v2 != 2 && v1 != 2) {
        return 0;
    }
    if (!sub_60A200((int)this, (int)p, 0, 0)) {
        return 0;
    }
    char buf1[48];
    char buf2[48];
    sub_475050(buf1);
    sub_475050(buf2);
    sub_60A860((int)this, (int)p, 0, 0, (int)buf2, (int)buf1);
    void* mem = sub_62FEF6(0x88);
    if (mem == 0) {
        return 0;
    }
    sub_60A260((int)mem, (int)this, (int)p, (int)buf1, (int)buf2);
    *(int*)mem = 0x7b6144;
    return (Assembly*)mem;
}
