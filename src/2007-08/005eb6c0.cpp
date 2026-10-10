// from server: 80% by colin
struct BodyMover {
    char pad[0x100];
    void f(int, int, int);
};

struct Inner {
    char pad[0x44];
    char (__thiscall *fn)(Inner*);
};

void __stdcall G1_func_005a91c0(int*, int);

void BodyMover::f(int, int, int)
{
    Inner* self = (Inner*)((char*)this - 0xf0);
    char (__thiscall *fn)(Inner*) = self->fn;
    if (fn(self)) {
        int* a = *(int**)((char*)this + 8);
        int b = *(int*)((char*)a + 0x1d8);
        int* c = *(int**)((char*)this + 4);
        G1_func_005a91c0(c, b);
    }
}
