// from server: 56% by colin
typedef unsigned int size_t;

struct String {
    char data[0x1c];
    String();
    String(const String&);
    ~String();
};

extern "C" {
    void __stdcall func_0080245c(void*);
    void __stdcall func_00802468(void*);
}

extern int __fastcall func_00454ac0(void*, void*);

struct Inner {
    void** vptr;
    char pad[0x20];
    void* field_24;
};

struct CRbxPlayDocTemplate {
    char pad[0x58];
    Inner* field_58;
    int method(int, int, int, int, int, int, int);
};

int CRbxPlayDocTemplate::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    Inner* inner = (Inner*)field_58->field_24;
    void** vt = *(void***)inner;
    int (*fn1)(void*) = (int (*)(void*))vt[0x5c / 4];
    int result = fn1(inner);
    if (result == 0)
        return 1;

    do {
        void** vt2 = *(void***)inner;
        int (*fn2)(void*, int*) = (int (*)(void*, int*))vt2[0x60 / 4];
        int local = result;
        int r = fn2(inner, &local);
        String s;
        func_0080245c(&s);
        int r2 = func_00454ac0((void*)r, &s);
        s.~String();
        if (r2 == 0)
            return 0;
        result = local;
    } while (result != 0);

    return 1;
}
