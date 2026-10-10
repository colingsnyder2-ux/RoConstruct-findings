// from server: 89% by colin
struct S {
    char pad[0x6c];
    unsigned int flags6c;
    char pad2[0x110 - 0x70];
    int field110;
    char pad3[0x11c - 0x114];
    unsigned char flags11c;

    int method();
};

extern "C" int __cdecl sub_51d790(S* self, void* out, int size);
extern "C" int __cdecl sub_520650(void* p);

int __cdecl S_method(S* self)
{
    int result = 1;
    if (self->flags11c & 0x20)
    {
        unsigned int v = self->flags6c & 0x300;
        if (v == 0x300)
            result = 0;
    }
    else
    {
        if (self->flags6c & 0x800)
            result = 0;
    }

    int local;
    sub_51d790(self, &local, 4);

    if (result)
    {
        int r = sub_520650(&local);
        return r != self->field110;
    }
    return 0;
}
