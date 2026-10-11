// from server: 14% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Item {
    void construct(int);
    void init(int, int);
};

void Item::construct(int a)
{
    Item* p = (Item*)malloc(0x178);
    if (p) {
        p->init(a, 0);
    }
    this->init((int)p, 0);
}

void Item::init(int, int) {}
