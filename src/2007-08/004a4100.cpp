// from server: 32% by colin
struct Descriptor {
    char pad[4];
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
};

struct EnumDescriptor {
    char pad[0xac];
    void* lookup(unsigned int index) const;
};

struct Lock {
    void lock();
    void unlock();
};

struct Manager {
    char pad[4];
    Lock* lockPtr;
};

struct IdManager {
    Manager* manager;
    bool checkItem(Item* item);
};

bool IdManager::checkItem(Item* item) {
    if (item == 0) {
        return true;
    }
    Manager* m = this->manager;
    Lock* l = m->lockPtr;
    l->lock();
    bool result = item->owner.lookup(item->index) != 0;
    l->unlock();
    return result;
}
