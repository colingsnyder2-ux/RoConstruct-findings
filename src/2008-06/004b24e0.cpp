// from server: 50% by tester
struct ICreator {
    virtual ~ICreator();
    virtual void* create() const;
};

struct Creator : ICreator {
    void* ptr;
    Creator(int arg0, int arg1);
    void* create() const;
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* Creator::create() const { return 0; }

Creator::Creator(int arg0, int arg1) {
    this->ptr = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x824bd8;
        *(int*)((char*)mem + 0xc) = arg0;
    } else {
        mem = 0;
    }
    this->ptr = mem;
}
