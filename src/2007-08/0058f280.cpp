// from server: 34% by colin
struct RBX_Name;

struct ICreator {
    virtual ~ICreator();
    virtual void create() = 0;
};

struct Creator : public ICreator {
    void* operator new(unsigned int);
    Creator();
    ~Creator();
    void create();
};

extern "C" void* __cdecl malloc(unsigned int);

void* Creator::operator new(unsigned int size) {
    return malloc(size);
}

Creator::Creator() {
    void* p = operator new(0x108);
    if (p) {
        ((ICreator*)p)->ICreator::ICreator();
    }
    *(void**)this = p;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = -1;
}

Creator::~Creator() {
}
