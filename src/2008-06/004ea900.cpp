// from server: 32% by colin
struct S_func_004ea900 {
    void* f(int);
};

struct S_sub_004ea2c0 {
    void g(int, int, int);
};

struct S_sub_0041ad40 {
    void h();
};

struct S_sub_0041b0f0 {
    void i(int);
};

struct S_sub_00595840 {
    void j();
};

extern "C" void* __cdecl sub_006a0920(unsigned int);

void* S_func_004ea900::f(int)
{
    S_sub_004ea2c0* p2;
    S_sub_0041ad40* p1;
    S_sub_0041b0f0* p0;
    S_sub_00595840* p3;
    void* mem;

    *(int*)this = 0;
    *(int*)((char*)this + 4) = 0;

    p2 = (S_sub_004ea2c0*)((char*)this + 8);
    p2->g(*(int*)((char*)this + 0x18), *(int*)((char*)this + 0x1c), 0);

    mem = sub_006a0920(0x28);
    if (mem == 0) {
        p1 = (S_sub_0041ad40*)mem;
        p1->h();
    } else {
        p1 = 0;
    }

    p0 = (S_sub_0041b0f0*)this;
    p0->i((int)p1);

    p3 = (S_sub_00595840*)this;
    p3->j();

    return this;
}
