// from server: 39% by colin
struct Descriptor {
    Descriptor(const char*, unsigned int);
};

struct EnumDescriptor {
    void addItem(void*);
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct Lock {
    void lock();
    void unlock();
};

extern Lock g_lock;

void* __stdcall sub_4A3FD0(void*);
void* __stdcall sub_4A3E90(void*, void*);

Item::Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes)
    , owner(owner)
    , value(value)
    , index(index)
{
    g_lock.lock();
    void* p = sub_4A3FD0((char*)&owner + 0xac);
    *(void**)p = this;
    *(int*)((char*)p + 4) = value;
    *(void**)((char*)p + 8) = (void*)&owner;
    void* q = sub_4A3E90((char*)this + 0xc, (char*)p + 4);
    *(void**)q = p;
    g_lock.unlock();
}
