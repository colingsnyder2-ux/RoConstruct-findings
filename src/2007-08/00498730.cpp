// from server: 49% by colin
struct VPlayersSignalDesc {
    void* ptr;
    VPlayersSignalDesc* construct(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

VPlayersSignalDesc* VPlayersSignalDesc::construct(int arg) {
    this->ptr = 0;
    void* mem = operator_new(0x10);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x79b7f4;
        *(int*)((char*)mem + 0xc) = arg;
    } else {
        mem = 0;
    }
    this->ptr = mem;
    return this;
}
