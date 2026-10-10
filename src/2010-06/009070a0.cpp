// from server: 65% by atomic.potato
struct RbxParticleEmitter
{
    void f(void* a, int b, int c);
};

extern "C" void f_00906640();

void RbxParticleEmitter::f(void* a, int b, int c)
{
    if (c != 4)
    {
        f_00906640();
        return;
    }

    *(unsigned long*)b = 0x00bfe550;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
