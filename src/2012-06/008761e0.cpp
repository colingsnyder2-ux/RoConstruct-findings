// from server: 94% by atomic.potato
struct VNotificationObject
{
    int a0;
    int a4;
    int a18;
    int a1c;
    int a80;
    int a84;
    void f();
};

void VNotificationObject::f()
{
    a0 = 0xbd7754;
    a4 = 0xbd774c;
    *(int *)((char *)this + 0x18) = 0xbd7740;
    *(int *)((char *)this + 0x1c) = 0xbd7734;
    *(int *)((char *)this + 0x80) = 0xbd7724;
    *(int *)((char *)this + 0x84) = 0xbd76f8;
    return;
}
