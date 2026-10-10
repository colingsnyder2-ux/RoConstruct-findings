// from server: 42% by atomic.potato
struct S
{
    int value;
    int *out10;
    int *out20;
    int *out30;
    int get();
};

int S::get()
{
    int value = *(int *)((char *)this + 0x4c);
    *(int *)((char *)this + 0x10) = value;
    *(int *)((char *)this + 0x20) = value;
    *(int *)((char *)this + 0x30) = 0;
    return 0;
}
