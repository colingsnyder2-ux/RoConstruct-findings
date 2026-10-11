// from server: 64% by atomic.potato
struct Inner {
    char pad0[0x94];
    int flags94;
    char pad98[0xd0 - 0x98];
    int flagsD0;
    virtual int vf94(int);
    virtual int vf7c(int, int, int, int);
};

struct Outer {
    char pad0[0x34];
    int a34;
    int a38;
    int a3c;
    int a40;
    char pad44[0x5c - 0x44];
    void* p5c;
    char pad60[0x68 - 0x60];
    Inner* p68;
    Inner* p6c;
    int f70;
    int f74;
    void func(int, int, int, int);
};

extern void G1_func_00894c70();

void Outer::func(int a, int b, int c, int d)
{
    this->a34 = d;
    this->a38 = a;
    this->a3c = b;
    this->a40 = c;

    if (this->f70 != 0)
    {
        Inner* p = this->p6c;
        p->vf94(p->flagsD0 & ~2);
        Inner* q = this->p6c;
        q->vf7c(d, a, b, c);
        this->p6c->flags94 = 1;
    }
    else
    {
        Inner* p = this->p6c;
        p->vf94(p->flagsD0 | 2);
    }

    if (this->f74 == 0)
    {
        Inner* r = this->p68;
        r->vf94(r->flagsD0 | 1);
        return;
    }

    if (this->f70 != 0)
    {
        Inner* r = this->p68;
        r->vf94(r->flagsD0 | 2);
        return;
    }

    G1_func_00894c70();
    int ebx = *(int*)((char*)this->p5c + 0x660);

    this->p68->flags94 = 1;

    Inner* s = this->p68;
    s->vf94(s->flagsD0 & ~1);

    Inner* t = this->p68;
    t->vf94(t->flagsD0 & ~2);

    int ecx = this->a34;
    int edx = this->a38;
    int eax = ecx - ebx - 1;
    int edi = edx - ebx;
    int ebp = edx - 3;
    int ebx2 = ecx - 3;

    Inner* u = this->p68;
    u->vf7c(eax, edi, ebx2, ebp);
}
