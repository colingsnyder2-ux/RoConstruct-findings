// from server: 68% by colin
struct LuaArguments {
    int method(int a);
};

extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_5BD8D0(int, int);
extern "C" int __cdecl sub_5BE5B0(int, int);
extern "C" int __cdecl sub_5BDE00(int, int, int);
extern "C" int __cdecl sub_5BE160(int, int);

extern int dword_8ABE78;

int LuaArguments::method(int a)
{
    int v1;
    int v2;
    int v3;
    float f1, f2, f3;
    float r1, r2, r3;
    int result;

    v1 = sub_5BF240(a, 1, dword_8ABE78);
    v2 = sub_5BF240(a, 2, dword_8ABE78);
    sub_5BD8D0(a, 3);

    f1 = *(float*)v2 - *(float*)v1;
    f2 = *(float*)(v2 + 4) - *(float*)(v1 + 4);
    f3 = *(float*)(v2 + 8) - *(float*)(v1 + 8);

    r1 = f1 * 0.0f + *(float*)v1;
    r2 = f2 * 0.0f + *(float*)(v1 + 4);
    r3 = f3 * 0.0f + *(float*)(v1 + 8);

    result = sub_5BE5B0(a, 12);
    if (result != 0) {
        *(float*)result = r1;
        *(float*)(result + 4) = r2;
        *(float*)(result + 8) = r3;
    }

    sub_5BDE00(a, -10000, dword_8ABE78);
    sub_5BE160(a, -2);

    return 1;
}
