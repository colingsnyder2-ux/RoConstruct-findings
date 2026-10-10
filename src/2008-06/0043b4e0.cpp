// from server: 56% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_437ed0(int *);
extern "C" int __cdecl imported_802fd8(int);
extern "C" unsigned char __cdecl imported_803f14(int *);

int S::f()
{
    int value;
    value = sub_437ed0(&value);
    imported_802fd8(value);
    imported_803f14(&value);
    return value;
}
