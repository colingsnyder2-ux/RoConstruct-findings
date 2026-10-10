// from server: 47% by atomic.potato
struct S
{
    int pad8;
    int padC;
    int pad10;
    int index;
    int state;
    int f();
};

extern "C" int sub_80f2d0(void*, int);
extern "C" void sub_810350(void*);

int S::f()
{
    state = 1;
    if (index != 0)
    {
        void* p = (void*)sub_80f2d0((void*)this, pad8);
        if (p != 0)
            sub_810350(p);
    }
    return 0;
}
