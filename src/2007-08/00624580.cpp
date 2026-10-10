// from server: 23% by colin
struct String {
    char pad[0x1c];
};

struct Locale {
    void* p;
};

extern "C" {
    void __stdcall sub_77E5E4(void*);
    void __stdcall sub_77E460(void*, int, int, int, int);
    void __stdcall sub_77E5E0(void*, void*);
    void __stdcall sub_77E434(void*, void*, int, int);
    void __stdcall sub_77E4FC(void*);
}

void* __fastcall sub_6244F0(void*, int, int, int, int, int);

struct ArrowButton {
    void func(int a, int b, int c);
};

void ArrowButton::func(int a, int b, int c)
{
    char buf[0x2c];
    String s;
    Locale loc;
    void* it1;
    void* it2;
    void* it3;
    void* it4;
    void* res;

    sub_77E5E4(&loc);
    sub_77E460(&s, 0, 0, 0, 0);
    sub_77E5E4(&loc);
    sub_77E5E0(&s, &it1);
    res = sub_6244F0(&s, 0, 0, 0, 0, 0);
    sub_77E434(&s, res, 0, 0);
    sub_77E4FC(&s);
}
