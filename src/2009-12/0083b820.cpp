// from server: 75% by atomic.potato
extern "C" void __stdcall ImportedCall(void *);

struct S
{
    int *v;
};

struct T
{
    int vtable;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;
    int value1C;
    int value20;
};

T *Create(T *p)
{
    p->vtable = 0x9f8350;
    ImportedCall((char *)p + 4);
    p->value8 = 0;
    p->valueC = 0;
    p->value10 = 0;
    p->value14 = 0;
    p->value18 = 0;
    p->value1C = 0;
    p->value20 = 0;
    return p;
}
