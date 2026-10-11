// from server: 15% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Item {
    void* construct(int* p);
    void init(int* p);
};

void* Item::construct(int* p)
{
    *p = 0;
    return 0;
}

void Item::init(int* p)
{
    int* q = (int*)malloc(0x160);
    if (q) {
        construct(q);
    } else {
        q = 0;
    }
    *(int*)0 = 0;
    init(q);
}
