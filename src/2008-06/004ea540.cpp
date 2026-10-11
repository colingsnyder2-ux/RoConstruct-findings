// from server: 45% by colin
struct S_func_004ea540 {
    void f(void*);
};

struct S_sub_0041ad40 {
    void sub_0041ad40();
};

struct S_sub_0041b0f0 {
    void sub_0041b0f0(void*);
};

struct S_sub_004e9f40 {
    void sub_004e9f40(void*, void*, void*);
};

struct S_sub_00595840 {
    void sub_00595840();
};

extern "C" void* __cdecl sub_006a0920(unsigned int);

void S_func_004ea540::f(void* arg)
{
    *(void**)this = 0;
    *(void**)((char*)this + 4) = 0;
    void* p = *(void**)arg;
    void* q = *(void**)((char*)arg + 4);
    ((S_sub_004e9f40*)((char*)this + 8))->sub_004e9f40(p, q, 0);
    void* mem = sub_006a0920(0x28);
    if (mem != 0) {
        ((S_sub_0041ad40*)mem)->sub_0041ad40();
    } else {
        mem = 0;
    }
    ((S_sub_0041b0f0*)this)->sub_0041b0f0(mem);
    ((S_sub_00595840*)this)->sub_00595840();
}
