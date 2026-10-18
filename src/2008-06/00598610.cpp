// from server: 41% by colin
extern "C" {
    int __stdcall sub_55BD60(void*, void*);
    void* __stdcall sub_80240C(void*, void*);
    void __stdcall sub_802468(void*);
}

struct VMember {
    void assign(const char*);
};

struct String {
    char buf[0x1c];
};

struct Decal {
    char pad[0x144];
    String str;
    int f(int, int, int, int, int, int, int, int);
};

int Decal::f(int a, int b, int c, int d, int e, int f_, int g, int h) {
    int local = 0;
    if (sub_55BD60(&str, &local)) {
        sub_80240C(&str, &local);
        str.buf[0x1c] = 0;
        *(int*)((char*)this + 0x144 + 0x1c) = h;
        ((VMember*)this)->assign((const char*)0x975f14);
    }
    sub_802468(&local);
    return 0;
}
