// from server: 25% by colin
struct S {
    int f();
};

extern "C" int __stdcall sub_46D4D0();
extern "C" int __stdcall sub_77E69C();
extern "C" int __stdcall sub_77E5F8(const void*, const char*);
extern "C" int __stdcall sub_77E6AC();
extern "C" int __stdcall sub_630A1E();

int S::f()
{
    int result;
    int local8;
    int localC;
    int local10;
    int local14;
    int local18;
    int local1C;
    int local20;
    int local24;
    int local28;
    int local2C;
    int local30;
    int local34;

    sub_46D4D0();
    sub_77E69C();
    if (sub_77E5F8(&local8, (const char*)0x7966C8)) {
        local30 = -1;
        sub_77E6AC();
        result = 0;
    } else if (sub_77E5F8(&local8, (const char*)0x7966B4)) {
        local30 = -1;
        sub_77E6AC();
        result = 1;
    } else if (sub_77E5F8(&local8, (const char*)0x7966A8)) {
        local30 = -1;
        sub_77E6AC();
        result = 2;
    } else {
        local30 = -1;
        sub_77E6AC();
        result = 3;
    }
    sub_630A1E();
    return result;
}
