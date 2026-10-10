// from server: 20% by colin
struct Sub1 {
    void destroy();
};

struct Sub2 {
    void destroy();
};

struct Sub3 {
    void destroy();
};

struct CMap {
    void* vtable;
    char pad1[0x54];
    Sub3 sub3;
    char pad2[0x74];
    Sub2 sub2;
    char pad3[0x98];
    Sub1 sub1;
    void destructor();
};

void CMap::destructor()
{
    vtable = (void*)0x7dafdc;
    sub1.destroy();
    sub2.destroy();
    sub3.destroy();
    ((Sub3*)((char*)this + 4))->destroy();
}
