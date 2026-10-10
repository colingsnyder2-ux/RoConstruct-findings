// from server: 37% by colin
struct ICreator {
    void* vftable;
};

struct Creator : ICreator {
    void construct(void* arg);
};

struct FactoryProduct {
    void setCreator(Creator* c, int flag);
};

extern "C" void* __cdecl malloc(unsigned int size);

void Creator::construct(void* arg) {
    Creator* self = this;
    void* mem = malloc(0x108);
    Creator* obj;
    if (mem != 0) {
        obj = (Creator*)mem;
        obj->vftable = 0;
        obj->construct(0);
    } else {
        obj = 0;
    }
    FactoryProduct* fp = (FactoryProduct*)arg;
    fp->setCreator(obj, 0);
}

void FactoryProduct::setCreator(Creator* c, int flag) {
    *(Creator**)((char*)this + 8) = c;
    *(int*)((char*)this + 12) = flag;
}
