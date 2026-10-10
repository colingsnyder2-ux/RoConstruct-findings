// from server: 28% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct VBodyPositionFactoryProductCreator {
    void construct(void* p);
    void* create();
};

void* VBodyPositionFactoryProductCreator::create() {
    void* mem = malloc(0x124);
    if (mem) {
        void* obj = mem;
        ((void (__thiscall*)(void*))0x5eec10)(obj);
        return obj;
    }
    return 0;
}
