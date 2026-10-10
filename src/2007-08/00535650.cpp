// from server: 73% by colin
// roc 2007-08 00535650  unit: std::logic_error  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535650

extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" void __cdecl sub_5BDD60(int, int);

extern int dword_8ABE74;

struct Vec3 {
    float x;
    float y;
    float z;
};

int __cdecl sub_535650(int a1)
{
    Vec3 *p1;
    Vec3 *p2;
    int eq;

    p1 = (Vec3 *)sub_5BF240(dword_8ABE74, 2, a1);
    p2 = (Vec3 *)sub_5BF240(dword_8ABE74, 1, a1);

    if (p1->x == p2->x && p1->y == p2->y && p1->z == p2->z)
        eq = 1;
    else
        eq = 0;

    sub_5BDD60(a1, eq);
    return 1;
}
