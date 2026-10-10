// from server: 36% by colin
struct Humanoid;

struct Skin {
    char pad[0xbc];
    void* field_bc;
    char pad2[0x28];
    void* field_e8;
    void applyByMyself(Humanoid* humanoid);
};

struct Humanoid {
    char pad[0xbc];
    void* field_bc;
    char pad2[0x28];
    void* field_e8;
};

struct Helper {
    int f1(void*);
    int f2(void*);
    int f3(void*);
    int f4(void*);
    int f5(void*);
    int f6(void*);
    int f7(void*);
    void f8(void*);
};

extern Helper* g_helper;

void Skin::applyByMyself(Humanoid* humanoid)
{
    int v = g_helper->f1(this->field_bc);
    bool flag = (v != 0);

    int r;
    r = g_helper->f2(humanoid);
    if (r != 0) {
        g_helper->f8((void*)r);
    }

    r = g_helper->f3(humanoid);
    if (r != 0) {
        g_helper->f8((void*)r);
    }

    r = g_helper->f4(humanoid);
    if (r != 0) {
        g_helper->f8((void*)r);
    }

    if (!flag) {
        r = g_helper->f5(humanoid);
        if (r != 0) {
            g_helper->f8((void*)r);
        }

        r = g_helper->f6(humanoid);
        if (r != 0) {
            g_helper->f8((void*)r);
        }

        r = g_helper->f7(humanoid);
        if (r != 0) {
            g_helper->f8((void*)r);
        }
    }
}
