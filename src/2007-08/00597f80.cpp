// from server: 66% by colin
struct RefCounted {
    virtual bool isNull() = 0;
};

struct S {
    char pad0[0xf8];
    unsigned char f8;
    unsigned char f9;
    char pad1[2];
    int fc;
    int f100;
    int f104;
    int f108;
    bool check();
};

extern "C" RefCounted* __fastcall sub_575460();

bool S::check() {
    RefCounted* p = sub_575460();
    if (p->isNull()) {
        if (f9) {
            int* a = (int*)fc;
            int idx = *(int*)((char*)a + 0xec);
            int off = *(int*)((char*)(idx + f108));
            int total = off + f104;
            int (*fn)(void*) = (int (*)(void*))f100;
            char* self = (char*)a + 0xec + total;
            f8 = (unsigned char)fn(self);
            f9 = 0;
        }
        if (f8)
            return true;
    }
    return false;
}
