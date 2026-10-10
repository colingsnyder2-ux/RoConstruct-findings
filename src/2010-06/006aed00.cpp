// from server: 82% by atomic.potato
extern "C" void __cdecl sub_006aeb50(int);

struct S
{
    void __cdecl f(void*, int);
};

void S::f(void* value, int kind)
{
    if (kind != 4)
    {
        sub_006aeb50(kind);
        return;
    }

    *(unsigned long*)value = 0x00bca680;
    ((unsigned char*)value)[4] = 0;
    ((unsigned char*)value)[5] = 0;
}
