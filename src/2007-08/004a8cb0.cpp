// from server: 64% by Viper
struct S {
};

extern "C" int __cdecl sub_4a7fe0(int*);
extern "C" int __cdecl sub_4a08e0(int, int);

int __cdecl f(int a) {
    int buf[12];
    int r = sub_4a7fe0(buf);
    return sub_4a08e0(a, r);
}
