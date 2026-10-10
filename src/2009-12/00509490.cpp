// from server: 50% by atomic.potato
extern "C" void __cdecl sub_506DC0();

struct S
{
};

void __cdecl f(unsigned int object, unsigned int value)
{
    if (object == 4)
    {
        *(unsigned int*)value = 0x00B15A90;
        ((unsigned char*)value)[4] = 0;
        ((unsigned char*)value)[5] = 0;
    }
    else
    {
        sub_506DC0();
    }
}
