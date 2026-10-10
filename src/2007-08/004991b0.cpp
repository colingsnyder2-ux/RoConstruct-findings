// from server: 25% by colin
struct RBXName;

struct ICreator {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct Creator : ICreator {
    static int isConstructed;
    Creator();
};

int Creator::isConstructed;

extern "C" {
    int __cdecl sub_499080();
    void __cdecl sub_570C00(int, int);
    void __cdecl sub_630D23(int);
}

extern int dword_8BE418;
extern int dword_8BE390;
extern int dword_88F6E0;
extern int dword_7786B0;

Creator::Creator()
{
    if (!(dword_8BE418 & 1)) {
        dword_8BE418 |= 1;
        int v = sub_499080();
        sub_570C00(v, 0x88F6E0);
        sub_630D23(0x7786B0);
    }
}
