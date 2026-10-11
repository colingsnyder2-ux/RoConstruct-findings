// from server: 17% by colin
struct S {
    char pad0[0xc];
    int field_c;
    char pad10[0x8];
    int field_18;
    int field_1c;
    void method();
};

extern "C" int __stdcall sub_5409B0(int* out);
extern "C" int __stdcall sub_54F140(int* out);
extern "C" int __stdcall sub_542FE0(int* out, int a, int b, int c, int d);
extern "C" int __stdcall sub_54C630(int a);
extern "C" int __stdcall sub_54C640(int a);
extern "C" int __stdcall sub_54F900(int a, int b);
extern "C" int __stdcall sub_541DA0(int a);
extern "C" int __stdcall sub_543610(int a, int b, int c);

void S::method() {
    int v1[2];
    int v2[2];
    int v3[2];
    sub_5409B0(v1);
    sub_54F140(v2);
    sub_542FE0(v3, v2[0], v2[1], v1[0], v1[1]);
    sub_54F900((int)&field_c, sub_54C630(field_18));
    sub_54F900((int)&field_c, sub_54C640(field_18));
    sub_54F900((int)&field_c, sub_541DA0(field_18));
    sub_543610((int)&field_c, field_18, 1);
    field_18 = 0;
    field_1c = 0;
}
