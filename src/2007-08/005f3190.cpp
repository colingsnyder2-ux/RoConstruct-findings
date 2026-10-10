// from server: 41% by colin
struct TSignalInstance {
    void* vtable;
    float a;
    float b;
    float c;
};

struct TSignalDesc {
    void* signal;
    void addSignal(float a, float b, float c);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void TSignalDesc::addSignal(float a, float b, float c)
{
    void* local = 0;
    void* arr[1];
    arr[0] = 0;
    void* tmp = 0;

    TSignalInstance* inst = (TSignalInstance*)operator_new(0x10);
    if (inst)
    {
        inst->vtable = (void*)0x7a575c;
        inst->a = a;
        inst->b = b;
        inst->c = c;
    }
    else
    {
        inst = 0;
    }

    void* old = this->signal;
    this->signal = inst;
    if (old)
    {
        void** vt = *(void***)old;
        void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
        dtor(old, 1);
    }

    void* s = this->signal;
    void** vt2 = *(void***)s;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt2[1];
    fn(s, &tmp);

    if (arr[0])
    {
        operator_delete(arr[0]);
    }
}
