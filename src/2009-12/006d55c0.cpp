// from server: 82% by atomic.potato
typedef int BOOL;

extern "C" int __cdecl sub_7f5286(int);
extern "C" BOOL sub_98b768(void *, int);

struct S
{
    int f();
};

int S::f()
{
    int a = *(int *)((char *)this + 12);
    void *b = *(void **)((char *)a + 0xA90);
    int c = *(int *)((char *)b + 0x1B4);
    if (!c)
        return 0;
    c = sub_7f5286(c);
    return sub_98b768((void *)0xB3F3C4, c);
}
