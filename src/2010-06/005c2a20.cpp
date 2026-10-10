// from server: 90% by atomic.potato
struct VColor3ValueFactoryProduct
{
    void f();
};

void VColor3ValueFactoryProduct::f()
{
    *(int*)((char*)this + 0) = 0x00a2c0f4;
    *(int*)((char*)this + 4) = 0x00a2c0e8;
    *(int*)((char*)this + 0x18) = 0x00a2c0dc;
    *(int*)((char*)this + 0x1c) = 0x00a2c0d0;
}
