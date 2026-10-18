// from server: 48% by atomic.potato
struct RunStateOwner {
    int f1;
    int f2;
    char f3;
    int f4;

    void __thiscall ctor(int arg);
};

extern "C" void __stdcall std_bad_alloc(void *p);
extern "C" void * __stdcall alloc_func(int size);
extern "C" void __stdcall RunStateOwner_init(RunStateOwner *self, int value);

void __thiscall RunStateOwner::ctor(int arg) {
    RunStateOwner *self = this;
    self->f1 = 0;
    self->f2 = 0;
    self->f3 = 0;
    if (arg != 0) {
        int *ptr = (int *)arg;
        int val = *ptr;
        self->f1 = val;
        std_bad_alloc((void *)(arg + 4));
        int *p = (int *)self->f1;
        (*p)++;
        return;
    }
    void *p = alloc_func(4);
    int val = 0;
    if (p != 0) {
        val = 1;
        *(int *)p = 1;
    }
    RunStateOwner_init(self, val);
}
