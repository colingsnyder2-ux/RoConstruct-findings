// from server: 18% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Inner {
    void construct();
};

struct Outer {
    void assign(Inner* p, int flag);
};

void Outer::assign(Inner* p, int flag)
{
    Inner* tmp = 0;
    void* mem = malloc(0x10c);
    if (mem) {
        tmp = (Inner*)mem;
        tmp->construct();
    } else {
        tmp = 0;
    }
    this->assign(tmp, flag);
}
