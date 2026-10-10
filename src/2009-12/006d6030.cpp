// from server: 82% by atomic.potato
extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl sub_98b768(int, int);

struct TToolVerb
{
    int f();
    char pad0[12];
    int value;
};

int TToolVerb::f()
{
    int eax = *(int *)((char *)this + 12);
    int ecx = *(int *)((char *)eax + 0xA90);
    eax = *(int *)((char *)ecx + 0x1B4);
    if (eax == 0)
        return 0;
    eax = sub_7f5286(eax);
    return sub_98b768(0xB3FA9C, eax);
}
