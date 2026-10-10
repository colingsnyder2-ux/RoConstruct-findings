// from server: 55% by atomic.potato
extern "C" void* __cdecl sub_0098211A(unsigned int);

struct ChatLine
{
    void* value;
    ChatLine(void*);
};

ChatLine::ChatLine(void* arg)
{
    value = 0;
    void* p = sub_0098211A(0x10);
    if (p != 0)
    {
        ((unsigned int*)p)[1] = 1;
        ((unsigned int*)p)[2] = 1;
        *(unsigned int*)p = 0x00bffe54;
        ((unsigned int*)p)[3] = (unsigned int)arg;
    }
    value = p;
}
