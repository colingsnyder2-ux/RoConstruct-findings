// from server: 53% by colin
extern "C" {
    void* __stdcall allocate_helper(void*, unsigned int, void*);
    void __stdcall deallocate_helper(void*, void*, unsigned int);
}

struct Inner {
    int field0;
    char pad[0x38];
    char field3c;
    char pad2[0x40 - 0x3d];
    int field40;
    char pad3[0xa4 - 0x44];
    char* fielda4;
    int fielda8;
    int fieldac;
    int fieldb0;
};

struct Outer {
    virtual void vfunc();
    void method(int a, int b, int c);
};

void Inner_helper1(Inner* self, int* p);
void Inner_helper2(Inner* self, int* p);
void Inner_helper3(Inner* self);

void Outer::method(int a, int b, int c)
{
    Inner* self = (Inner*)this;
    int ecx_val = a;
    if (ecx_val == -1)
        ecx_val = 0x80;
    int eax_val = b;
    if (eax_val == -1)
        eax_val = 4;
    int local74 = 2;
    int* pval;
    if (eax_val > 2)
        pval = &eax_val;
    else
        pval = &local74;
    int val = *pval;
    self->fieldac = val;
    if (ecx_val == 0)
        ecx_val = 1;
    int total = val + ecx_val;
    if (self->fielda8 != total)
    {
        char* newbuf = 0;
        allocate_helper(&newbuf, total, 0);
        int oldsize = self->fielda8;
        self->fielda8 = total;
        char* oldbuf = self->fielda4;
        self->fielda4 = newbuf;
        if (oldbuf)
        {
            deallocate_helper(&newbuf, oldbuf, oldsize);
        }
    }
    void (Outer::*vfn)() = 0;
    vfn = *(void (Outer::**)())(*(int*)this + 0x54);
    (this->*vfn)();
    int local8;
    Inner_helper1(self, &local8);
    int localc = 0;
    Inner_helper2(self, &localc);
    Inner_helper3(self);
    self->fieldb0 |= 1;
    self->field3c = 0;
}
