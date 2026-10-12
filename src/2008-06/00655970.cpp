// from server: 50% by colin
struct ScoreHud {
    void* field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    unsigned int field10;
    unsigned int field14;
    unsigned char field18[0x20];
    unsigned char field38[0x20];
    unsigned char field58[0x20];
    unsigned int field78;

    ScoreHud(int);
};

struct Helper1 {
    void f(void*, void*);
};

struct Helper2 {
    void f(void*, void*);
};

struct Helper3 {
    void f(void*, void*);
};

extern "C" void* __cdecl sub_6A0920(unsigned int);

ScoreHud::ScoreHud(int arg)
{
    void* p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = this;
    else
        p = 0;
    field0 = p;
    fieldC = 0;
    field10 = 0;
    field14 = 0;

    int local1 = 1;
    ((Helper1*)(field18))->f(&local1, &local1);

    char local2 = 2;
    ((Helper2*)(field38))->f(&local2, &local2);

    char local3 = 3;
    ((Helper3*)(field58))->f(&local3, &local3);

    field78 = local1;
}
