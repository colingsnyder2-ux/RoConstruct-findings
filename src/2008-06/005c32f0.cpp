// from server: 27% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct Creator {
    void construct(void* p, int a, int b);
};

struct FactoryProduct {
    void* field0;
    void init(int a, int b);
};

void* __fastcall sub_63da90(void* p);

void FactoryProduct::init(int a, int b)
{
    void* mem = malloc(0x148);
    void* obj = 0;
    if (mem) {
        obj = sub_63da90(mem);
    }
    Creator* c = (Creator*)this;
    c->construct(obj, a, b);
}
