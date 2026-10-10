// from server: 79% by colin
struct CNameItem {
};

extern "C" int __stdcall GetDateFormatA(int, int, int, int, int, int);
extern "C" int __stdcall sub_77DF20(int, int);
extern "C" int __stdcall sub_77D1B0(int, int, int, int, int, int);
extern "C" int __stdcall sub_77DC7C(int, int, int);
extern "C" void __cdecl sub_630B8C(int, int, int);
extern "C" void __cdecl sub_630A1E();

int __cdecl f(int a, int b) {
    char buf[0x60];
    int arr[2];
    int i;
    arr[0] = 0x7a0d04;
    arr[1] = 0x7c81a0;
    for (i = 0; i < 2; i++) {
        int v = arr[i];
        if (sub_77DF20(a, v) < 0)
            continue;
        sub_630B8C((int)buf, 0, 0x60);
        int flag = (i != 0) ? 2 : 1;
        sub_77D1B0(b, flag, 0, (int)buf, 0x60, 0);
        sub_77DC7C(a, v, (int)buf);
    }
    return 0;
}
