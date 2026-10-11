// from server: 50% by atomic.potato
struct VLeftMotorTool {
    char pad[0xc];
    void* p;
    void* f();
};

struct Alloc {
    void* __thiscall ctor(void*);
};

extern "C" void* __cdecl sub_718A38(unsigned int);

void* VLeftMotorTool::f() {
    void* mem = sub_718A38(0x48);
    if (mem) {
        void* q = *(void**)((char*)p + 0x20c);
        ((Alloc*)mem)->ctor(q);
        *(void**)mem = (void*)0x8e03cc;
        *(void**)((char*)mem + 4) = (void*)0x8e03b0;
    }
    return mem;
}
