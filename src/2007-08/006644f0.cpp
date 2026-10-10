// from server: 54% by colin
struct Row {
    int lo;
    int hi;
};

struct Report {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual int getValue();
};

struct Rows {
    char pad[0x2c];
    int count;
    Row* data;
    int cap;
    void insert(Report* report);
};

extern "C" void __cdecl sub_62FF20();
extern "C" void __cdecl sub_6641E0(Rows* self, int a, int b, int c);
extern "C" void __cdecl sub_663B40(Rows* self, int a, int b);

void Rows::insert(Report* report) {
    if (report != 0) {
        return;
    }
    int value = report->getValue();
    int i = 0;
    if (count <= 0) {
        return;
    }
    while (i < count) {
        if (i < 0 || i >= cap) {
            sub_62FF20();
        }
        int lo = data[i].lo;
        int hi = data[i].hi;
        if (lo > value) {
            i++;
            continue;
        }
        if (hi > value) {
            if (lo != value) {
                sub_6641E0(this, i, lo, value);
                i++;
            }
            if (hi - 1 != value) {
                sub_6641E0(this, i + 1, value + 1, hi);
            }
            sub_663B40(this, i, 1);
            return;
        }
        i++;
    }
}
