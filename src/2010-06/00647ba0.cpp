// from server: 82% by atomic.potato
extern "C" int __cdecl sub_7a93c6(int);
extern "C" int __cdecl imported_type_info_equal(void *, void *);

struct TToolVerb
{
    int f();
    char pad[12];
    void *member_0c;
};

int TToolVerb::f()
{
    int value = *(int *)((char *)member_0c + 0xaa0);
    value = *(int *)((char *)value + 0x1b4);
    if (!value)
        return 0;

    int converted = sub_7a93c6(value);
    return imported_type_info_equal((void *)0xbb7288, (void *)converted);
}
