// from server: 61% by atomic.potato
extern "C" void sub_004d7890(void *, int, int);

struct SimpleSceneManager_004d8310
{
    void f();
};

void SimpleSceneManager_004d8310::f()
{
    void *p = *(void **)((char *)this + 4);
    sub_004d7890((char *)p + 8, 0, 1);
}
