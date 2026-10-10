// from server: 12% by colin
struct S {
    char pad0[0x40];
    int f(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15);
};

extern "C" {
    void __stdcall sub_557320();
    void __stdcall sub_558CB0();
    void __stdcall sub_5596C0();
    void __stdcall sub_559BB0();
    void __stdcall sub_55ADB0();
    void __stdcall sub_572390();
    void __stdcall sub_726440();
    void __stdcall sub_7266D0();
    void __stdcall sub_77E698();
    void __stdcall sub_77E69C();
    void __stdcall sub_77E6AC();
}

int S::f(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15)
{
    char buf[0x38];
    int state = 0;
    int result = 0;
    char* p = arg0;
    if (*p) {
        sub_77E69C();
        sub_77E69C();
        sub_557320();
        state = 1;
    } else {
        sub_77E69C();
        sub_77E69C();
        sub_558CB0();
        sub_559BB0();
        sub_5596C0();
        sub_55ADB0();
        sub_572390();
        sub_7266D0();
        sub_726440();
        sub_77E698();
        state = 1;
    }
    sub_77E6AC();
    sub_77E6AC();
    return result;
}
