// from server: 82% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int __stdcall sub_004fca00(S *, int, const char *);
extern "C" int __stdcall sub_004f5230(int);
extern "C" int __stdcall sub_00636ac0(S *, int);

int S::f(int value)
{
    int x = sub_004fca00(this, 3, "set a Player's name");
    x = sub_004f5230(x);
    return sub_00636ac0(this, value);
}
