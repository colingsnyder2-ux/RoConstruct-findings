// from server: 88% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    void* f(void* out);
    int pad0;
    int field4;
    int field8;
    int fieldC;
};

void* S::f(void* out)
{
    void (*handler)() = *(void (**)())0x77e6d8;
    if (this->field8 == 0)
        handler();
    int* p = (int*)this->field8;
    int* q = (int*)this->fieldC;
    if ((unsigned int)q >= (unsigned int)p[2])
        handler();
    int* r = (int*)this->fieldC;
    int v = *r;
    int w = this->field4;
    *(int*)out = v;
    *((int*)out + 1) = w;
    return out;
}
