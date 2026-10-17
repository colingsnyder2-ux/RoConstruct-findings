// from server: 53% by colin
struct Vector
{
    void remove(void*);
};

struct Object
{
    char pad0[0x24];
    Vector v24;
    char pad1[0x1c];
    Vector v44;
    char pad2[0xc8];
    Vector v130;
    char pad3[0x1c];
    Vector v150;
};

struct LocalBackpackItem
{
    char pad0[0x168];
    Vector v168;
    Vector v16c;
    char pad1[0x8];
    Vector v178;
    Vector v17c;
    char pad2[0x8];
    Object* obj188;

    void f();
};

extern "C" void __cdecl sub_55afd0(LocalBackpackItem*);
extern "C" void __cdecl sub_456e80(Object**);

void LocalBackpackItem::f()
{
    sub_55afd0(this);
    if (obj188 != 0)
    {
        obj188->v24.remove(&v168);
        obj188->v44.remove(&v16c);
        obj188->v130.remove(&v178);
        obj188->v150.remove(&v17c);
        sub_456e80(&obj188);
    }
}
