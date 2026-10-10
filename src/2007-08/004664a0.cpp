// from server: 45% by colin
struct DxUserInput {
    unsigned short f0;
    unsigned short f2;
    int f4;
    void method(int a, int b);
};

extern "C" {
    void __stdcall sub_77ddac(int);
    void __stdcall sub_77dd94(int, int, int, int, int);
    void __stdcall sub_77d5ac(int, int, int);
    void __stdcall sub_77dd6c(int, int);
    void __stdcall sub_77ddbc(int);
    int __stdcall sub_727124(int, int);
}

void DxUserInput::method(int a, int b)
{
    int local0 = 0;
    int local1;
    int local2;
    int local3;
    int local4;

    sub_77ddac(a);
    sub_77ddac((int)&local0);

    int v = *(int*)b;
    unsigned short w2 = f2;
    unsigned short w0 = f0;

    sub_77dd94((int)&local1, 0x795c34, w0, w2, v);

    local2 = 0;
    local3 = 0;
    sub_77d5ac((int)&local4, (int)&local3, (int)&local2);

    if (sub_727124(f4, (int)&local4)) {
        sub_77dd6c(a, local2);
    }

    sub_77ddbc((int)&local0);
}
