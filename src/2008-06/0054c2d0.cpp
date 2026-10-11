// from server: 36% by colin
struct Mesh {
    char pad0[8];
    int field8;
    int f(int);
    int sub_5409b0();
};

struct A {
    int v0;
    int v1;
};

struct B {
    int v0;
    int v1;
};

extern "C" int __stdcall sub_44f2b0(int*, int*);

extern "C" int __stdcall sub_540ed0();
extern "C" int __stdcall sub_542640();
extern "C" int __stdcall sub_54bf70();
extern "C" int __stdcall sub_54c610();
extern "C" int __stdcall sub_54dbf0();
extern "C" int __stdcall sub_54e210();
extern "C" int __stdcall sub_54e370();

int Mesh::f(int a) {
    A local8;
    B local10;
    int local1c;
    int local24;
    int local20;
    int local18;
    int local2c;

    sub_54e210();
    sub_5409b0();
    sub_540ed0();

    if (sub_54bf70() == 0) {
        sub_54c610();
        if (sub_44f2b0(&field8, &a) == 0) {
            goto end;
        }
    }

    local1c = 0;
    local24 = local8.v0;
    local20 = local8.v1;
    sub_54e370();
    sub_54dbf0();
    local8.v0 = local2c;
    local8.v1 = local2c;

end:
    sub_542640();
    return 0;
}
