// from server: 50% by atomic.potato
struct VLeftMotorTool {
    char pad[0xc];
    struct Inner { char pad[0x204]; void* p; }* p;
    void* f();
};

struct Alloc { void* __thiscall ctor(void*); };

extern "C" void* __cdecl sub_6A0920(unsigned int);

void* VLeftMotorTool::f() {
    void* mem = sub_6A0920(0x48);
    if (mem) {
        ((Alloc*)mem)->ctor(p->p);
        *(void**)mem = (void*)0x839574;
        *(void**)((char*)mem + 4) = (void*)0x83955c;
    }
    return mem;
}
