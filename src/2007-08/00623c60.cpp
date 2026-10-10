// from server: 23% by colin
struct S_00623c60 {
    char pad[0x118];
    int m(int, int, int);
};

extern "C" {
    void __stdcall sub_0077e698(void*);
    void __stdcall sub_0077e6ac(void*);
    void __stdcall sub_00555f40(void*, int, int, void*);
    void __stdcall sub_00623720(void*, int, int, int, int, int, int, int, int, int, int);
}

int S_00623c60::m(int a1, int a2, int a3)
{
    char buf[0x1c4];
    int v;
    sub_00555f40(this, 0, 0, buf);
    sub_0077e698(buf);
    sub_0077e6ac(buf);
    v = *(int*)((char*)this + 0x118);
    *(int*)((char*)this + 0x114) = v;
    if (v == 1) {
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_00623720(this, 0x64, 0x61, 0x73, 0x77, 0, 0, 0, 0, 0, 0);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
    } else if (v == 2) {
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_00623720(this, 0x64, 0x61, 0x73, 0x77, 0, 0, 0, 0, 0, 0);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
    } else if (v == 8) {
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_0077e698(buf);
        sub_00623720(this, 0x6b, 0x68, 0x6a, 0x75, 0, 0, 0, 0, 0, 0);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
        sub_0077e6ac(buf);
    }
    return (int)this;
}
