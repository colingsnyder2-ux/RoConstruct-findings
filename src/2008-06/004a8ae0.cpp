// from server: 77% by colin
struct Mutex {
    void lock();
    void unlock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Descriptor;

struct Registry {
    unsigned char padding[32];
    Mutex mutex;
};

struct Guid {
    static const Guid& getLocalScope();
};

struct Creator {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    unsigned char pad[0x130 - 0x10];
    Registry registry;

    void method(void* a, void* b);
};

void sub_4a7e20(void* self, void* a, void* b);
void sub_4a5600(void* self, void* a, int b, int c);

void Creator::method(void* a, void* b)
{
    if (a != 0) {
        ((Mutex*)a)->lock();
        void* p8 = *(void**)((char*)a + 8);
        void* pc = *(void**)((char*)a + 0xc);
        void* local[2];
        local[0] = p8;
        local[1] = pc;
        sub_4a7e20(&this->registry, b, (char*)p8 + 4);
        sub_4a5600(b, local, 0x18, 1);
    } else {
        const Guid& g = Guid::getLocalScope();
        sub_4a7e20(&this->registry, b, (char*)&g + 4);
    }
}
