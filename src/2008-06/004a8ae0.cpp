// from server: 63% by colin
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
    unsigned char padding[0x130];
    Registry registry;
    void insert(Descriptor* d, Key* k);
};

extern "C" void __stdcall sub_4a7e20(void* self, void* d, Key* k);
extern "C" void __stdcall sub_4a5600(void* self, Key* k, int count);

void Creator::insert(Descriptor* d, Key* k)
{
    if (d) {
        ((Mutex*)d)->lock();
        Key local;
        local.first = *(unsigned int*)((char*)d + 8);
        local.second = *(unsigned int*)((char*)d + 0xc);
        sub_4a7e20(&this->registry, (char*)d + 8, &local);
        sub_4a5600(k, &local, 1);
    } else {
        const Guid& g = Guid::getLocalScope();
        sub_4a7e20(&this->registry, k, (Key*)((char*)&g + 4));
    }
}
