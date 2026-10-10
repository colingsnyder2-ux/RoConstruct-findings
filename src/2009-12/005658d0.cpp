// from server: 75% by atomic.potato
struct RakPeer
{
    void f();
};

void RakPeer::f()
{
    if (*(unsigned char *)((char *)this + 4))
        *(unsigned char *)((char *)this + 0xb15) = 0;
}
