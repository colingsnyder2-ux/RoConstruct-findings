// from server: 25% by colin
struct Inner {
    char pad[0xb8];
    int field_b8;
};

struct Outer {
    char pad[0x138];
    Inner* p138;
    char pad2[4];
    int field_144;
    char pad3[4];
    char field_13c;
    int method(int, int);
};

extern "C" void* __cdecl sub_62fef6(int);
extern "C" void __cdecl sub_63b850(int, int, int, int);
extern "C" int __cdecl sub_676200(int, int, int);
extern "C" int __cdecl sub_676850(int);

int Outer::method(int a, int b)
{
    int result = sub_676850(b);
    if (result != 0)
        return *(int*)(result + 4);

    void* mem = sub_62fef6(8);
    int obj = 0;
    if (mem != 0) {
        Inner* inner = p138;
        obj = sub_676200((int)mem, b, inner->field_b8);
    } else {
        obj = 0;
    }

    int idx = a;
    if (idx == -1)
        idx = field_144;

    sub_63b850((int)&field_13c, idx, obj, 1);
    return *(int*)(obj + 4);
}
