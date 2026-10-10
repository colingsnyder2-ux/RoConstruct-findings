// from server: 49% by colin
struct Base {
    virtual bool check();
};

struct VWidget {
    char pad[0xe8];
    Base base;
    int process(int a, int b);
};

int VWidget::process(int a, int b) {
    if (!base.check()) {
        *(int*)((char*)this + 0xec) = 0;
        *(int*)((char*)this + 0xe8) = 0;
        return 0;
    }
    int* p = (int*)b;
    int v = *p;
    if (v == 1 || v == 2 || v == 3 || v == 4 || v == 5 || v == 6) {
        return process(a, b);
    }
    *(int*)((char*)this + 0xec) = 0;
    *(int*)((char*)this + 0xe8) = 0;
    return 0;
}
