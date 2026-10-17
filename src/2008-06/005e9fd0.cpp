// from server: 38% by colin
extern "C" double __cdecl floor(double);
extern "C" double __cdecl currentTime();

struct Scope {
    char pad[0x28];
    Scope(const char*, bool);
    ~Scope();
};

struct Node {
    virtual int getType();
    Node* parent;
};

struct PhysicsService {
    char pad0[0x80];
    float progress;
    char pad1[0x4];
    Node* root;
    char pad2[0x8];
    char pad3[0x8];
    char pad4[0x8];
    bool flag_a4;
    char pad5[0x3];
    int counter_a8;
    char pad6[0xc];
    char pad7[0x40];
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;

    void sub_5e9e00();
    void sub_5e9bb0();
    void sub_5e9550(int);
    void method(int, int, int);
};

void PhysicsService::method(int a, int b, int c) {
    Scope s1((const char*)field_fc, true);
    flag_a4 = true;
    double t0 = currentTime();
    int n = (int)floor((double)currentTime() * 0.0f);
    int count = n > 1 ? n : 1;
    int div = (int)currentTime();
    int ebx = counter_a8 / div;
    Scope s2((const char*)field_104, false);
    Node* edi = root;
    while (edi->getType() != 2) edi = edi->parent;
    edi->getType();
    s2.~Scope();
    Scope s3((const char*)field_108, false);
    flag_a4 = false;
    sub_5e9e00();
    flag_a4 = true;
    sub_5e9bb0();
    sub_5e9550(ebx);
    s3.~Scope();
    bool bl = false;
    int ebp = 0;
    int i = 0;
    while (i < count) {
        Scope s4((const char*)field_10c, false);
        sub_5e9bb0();
        s4.~Scope();
        Scope s5((const char*)field_110, false);
        if (!bl) {
            sub_5e9550(ebx);
        }
        s5.~Scope();
        counter_a8++;
        i++;
    }
    progress = (float)count / (float)ebp;
    currentTime();
    Scope s6(0, false);
    s6.~Scope();
}
