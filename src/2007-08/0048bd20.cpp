// from server: 27% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct Creator {
    void* construct(void* arg);
};

void* Creator::construct(void* arg) {
    void* mem = malloc(0x114);
    if (mem) {
        ((void (__thiscall*)(void*))0x5a2d30)(mem);
    } else {
        mem = 0;
    }
    ((void (__thiscall*)(Creator*, void*, void*))0x48bc70)(this, mem, arg);
    return mem;
}
