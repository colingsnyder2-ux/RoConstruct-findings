// from server: 79% by atomic.potato
struct S
{
    void *field_0c;
    unsigned char f();
};

extern "C" void *__cdecl sub_495f40(void *);
extern "C" void *__cdecl sub_983b6a(void *);
typedef int (__cdecl *TypeInfoEqual)(void *, void *);

S *g_00deb9d8 = (S *)0x00deb9d8;
TypeInfoEqual g_b229ec;

unsigned char S::f()
{
    void *value = sub_495f40(*(void **)((char *)field_0c + 0xac4));
    if (value)
    {
        void *converted = sub_983b6a(value);
        g_b229ec((void *)0x00deb9d8, converted);
        return 1;
    }
    return 0;
}
