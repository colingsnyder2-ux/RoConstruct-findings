// from server: 96% by atomic.potato
extern "C" void sub_409420(void *);

struct S
{
    void *reserved0;
    char padding[36];
    unsigned int value28;
    unsigned int value2c;
    S(void *);
};

S::S(void *source)
{
    sub_409420(source);
    reserved0 = (void *)0x009dffd4;
    value28 = ((S *)source)->value28;
    value2c = ((S *)source)->value2c;
}
