// from server: 60% by colin
struct JointsService {
    char pad[0xe8];
    int field_e8;
    int field_ec;
    int field_f0;
    void sub_5b2de0(int*);
    void func(int, int);
};

extern "C" void __stdcall sub_432530(int*);
extern "C" int __stdcall sub_48cbe0(int);
extern "C" void __stdcall sub_57aa50(int, int, int);

void JointsService::func(int a, int b) {
    int* p1;
    if (this) {
        p1 = &field_e8;
    } else {
        p1 = 0;
    }
    if (field_f0) {
        sub_432530(p1);
    }
    int* p2;
    if (this) {
        p2 = &field_ec;
    } else {
        p2 = 0;
    }
    if (field_f0) {
        sub_432530(p2);
    }
    int* p3 = &field_e8;
    int* p4 = &field_ec;
    field_f0 = 0;
    sub_57aa50((int)this, a, b);
    if (b) {
        int r = sub_48cbe0(b);
        if (r) {
            field_f0 = *(int*)(r + 0x27c);
        }
    }
    if (field_f0) {
        sub_5b2de0(&field_e8);
    }
    if (field_f0) {
        sub_5b2de0(&field_ec);
    }
}
