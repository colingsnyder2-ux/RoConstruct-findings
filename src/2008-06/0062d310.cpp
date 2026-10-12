// from server: 40% by colin
struct Inner {
    unsigned char pad[0x0c];
    unsigned int *begin;
    unsigned int *end;
};

struct Outer {
    unsigned char pad[0x104];
    void *field104;
    Inner *field108;

    int GetCount();
    bool Check();
};

extern unsigned int *g_802890;

extern "C" int __cdecl sub_6a17c6(void *a, void *b, void *c, void *d, void *e);

int Outer::GetCount()
{
    Inner *p = this->field108;
    if (p == 0)
        return 0;
    return (int)(p->end - p->begin) >> 3;
}

bool Outer::Check()
{
    unsigned int i = 0;
    unsigned int count = this->GetCount();
    if (count > 0)
    {
        do
        {
            Inner *p = this->field108;
            unsigned int n = (unsigned int)(p->end - p->begin) >> 3;
            if (i >= n)
            {
                void (*h)() = (void (*)())g_802890;
                h();
            }
            unsigned int *arr = p->begin;
            unsigned int v = arr[i];
            int r = sub_6a17c6((void *)v, (void *)0, (void *)0x92907c, (void *)0x95c410, (void *)0);
            if (r != 0)
                return true;
            i++;
            count = this->GetCount();
        } while (i < count);
    }
    return false;
}

bool __cdecl Outer_CheckRecursive(Outer *self)
{
    if (self->Check())
        return true;
    void *p = self->field104;
    while (p != 0)
    {
        int r = sub_6a17c6(p, (void *)0, (void *)0x92907c, (void *)0x9481b8, (void *)0);
        if (r != 0)
            break;
        if (((Outer *)p)->Check())
            return true;
        p = ((Outer *)p)->field104;
    }
    return false;
}
