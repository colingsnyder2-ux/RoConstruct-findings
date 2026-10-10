// from server: 55% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    unsigned int value;
    unsigned int object;
    unsigned char* bytes;

    value = ((unsigned int*)&object)[3];
    if (value != 4)
    {
        ((unsigned int*)&object)[3] = value;
        return;
    }

    object = ((unsigned int*)&object)[2];
    bytes = (unsigned char*)object;
    *(unsigned int*)object = 0x00b60aa0;
    bytes[4] = 0;
    bytes[5] = 0;
}
